/** @file */

#include "../cmatrix.h"
#include <stdlib.h>

/**
 * @brief Free memory stored in a.matrix
 * @warning Modify input argument
 *
 * Free mem and write NULL in freed ptr
 * Also write 0 in rows and colums
 *
 * @param[in,out] a cmatrix object for free
 * @return void
 */
void cmatrix_remove(cmatrix* a) {
  if (a != NULL) {
    if (a->matrix != NULL) {
      for (int i = 0; i < a->rows; ++i) {
        free(a->matrix[i]);
        a->matrix[i] = NULL;
      }

      free(a->matrix);
    }

    a->matrix = NULL;
    a->rows = 0;
    a->columns = 0;
  }
}
