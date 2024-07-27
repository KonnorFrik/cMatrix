/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Transpose matrix 'a' and write into 'result'
 * @note Allocate memory for result.matrix
 *
 * @param[in]  a cmatrix for transpose
 * @param[out] result cmatrix for write result in
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_transpose(cmatrix* a, cmatrix* result) {
  if (cmatrix_is_valid(a) == FAILURE || result == NULL) {
    return ERROR;
  }

  int status = cmatrix_create(a->columns, a->rows, result);

  if (status == OK) {
    for (int r = 0; r < a->rows; ++r) {
      for (int c = 0; c < a->columns; ++c) {
        result->matrix[c][r] = a->matrix[r][c];
      }
    }
  }

  return status;
}
