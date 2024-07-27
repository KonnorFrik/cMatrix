/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Multiply two given matrices
 * @note allocate memory for result
 *
 * param[in]  a matrix object for operation
 * param[in]  number for multiply on it
 * param[out] result for write result in
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_mult(cmatrix* a, cmatrix* b, cmatrix* result) {
  if (cmatrix_is_valid(a) == FAILURE || cmatrix_is_valid(b) == FAILURE ||
      result == NULL) {
    return ERROR;
  }

  if (a->rows != b->columns || a->columns != b->rows) {
    return CALC_ERROR;
  }

  int status = cmatrix_create(a->rows, a->rows, result);

  for (int k = 0; status == OK && k < a->columns; ++k) {
    for (int r = 0; r < a->rows; ++r) {
      for (int c = 0; c < b->columns; ++c) {
        result->matrix[r][c] += a->matrix[r][k] * b->matrix[k][c];
      }
    }
  }

  return status;
}
