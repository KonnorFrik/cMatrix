/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Calculate determinant for given matrix 'a'
 *
 * @param[in]  a cmatrix for transpose
 * @param[out] result number ptr for write result in
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_determinant(cmatrix* a, double* result) {
  if (cmatrix_is_valid(a) == FAILURE || result == NULL) {
    return ERROR;
  }

  *result = 0;

  if (a->rows != a->columns) {
    return CALC_ERROR;
  }

  int sign = 1;
  int status = OK;

  if (a->rows == 1) {
    *result = a->matrix[0][0];
    return status;
  }

  for (int r = 0; status == OK && r < a->rows; ++r) {
    double minor_elem = 0;

    if ((status = cmatrix_minor_elem(a, r, 0, &minor_elem)) == OK) {
      *result += (a->matrix[r][0] * sign) * minor_elem;
    }

    sign *= -1;
  }

  return status;
}
