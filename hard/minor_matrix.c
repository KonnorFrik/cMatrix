/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Buld a matrix of minors with same size
 * @note Allocate memory for result
 *
 * @param[in]  a cmatrix object for build minors from
 * @param[out] result cmatrix object for write result in it
 *
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_matrix_minor(cmatrix* a, cmatrix* result) {
  if (cmatrix_is_valid(a) == FAILURE || result == NULL) {
    return ERROR;
  }

  if (a->rows != a->columns) {
    return CALC_ERROR;
  }

  int status = cmatrix_create(a->rows, a->columns, result);

  for (int r = 0; status == OK && r < a->rows; ++r) {
    for (int c = 0; status == OK && c < a->columns; ++c) {
      status = cmatrix_minor_elem(a, r, c, &(result->matrix[r][c]));
    }
  }

  return status;
}
