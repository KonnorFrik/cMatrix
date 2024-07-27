/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Calculate complements for given matrix 'a'
 * @note Allocate memory for 'result'
 *
 * @param[in]  a cmatrix object for operation
 * @param[out] result cmatrix object for write result in
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_calc_complements(cmatrix* a, cmatrix* result) {
  if (cmatrix_is_valid(a) == FAILURE || result == NULL) {
    return ERROR;
  }

  if (a->rows != a->columns) {
    return CALC_ERROR;
  }

  int status = cmatrix_create(a->rows, a->columns, result);

  if (status == OK && a->rows == 1) {
    result->matrix[0][0] = 1;
    return status;
  }

  for (int r = 0; status == OK && r < a->rows; ++r) {
    for (int c = 0; status == OK && c < a->columns; ++c) {
      double minor_elem = 0;

      if ((status = cmatrix_minor_elem(a, r, c, &minor_elem)) == OK) {
        result->matrix[r][c] = minor_elem * ((r + c) % 2 == 0 ? 1 : -1);
      }
    }
  }

  return status;
}
