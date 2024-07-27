/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Calc minor for one element from matrix 'a'
 *
 * @param[in]  a cmatrix object for find minor in
 * @param[in]  row Element row to find minor
 * @param[in]  col Element column to find minor
 * @param[out] result Minor for given element
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_minor_elem(cmatrix* a, int row, int column, double* result) {
  if (cmatrix_is_valid(a) == FAILURE || result == NULL) {
    return ERROR;
  }

  if (a->rows != a->columns || row < 0 || column < 0) {
    return CALC_ERROR;
  }

  int status = OK;
  cmatrix minor = {0};

  if ((status = cmatrix_minor_matrix(a, row, column, &minor)) == OK) {
    if (minor.rows == 1) {
      *result = minor.matrix[0][0];

    } else if (minor.rows == 2) {
      *result = minor.matrix[0][0] * minor.matrix[1][1] -
                minor.matrix[0][1] * minor.matrix[1][0];
    } else {
      status = cmatrix_determinant(&minor, result);
    }

    cmatrix_remove(&minor);
  }

  return status;
}
