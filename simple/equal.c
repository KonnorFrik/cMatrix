/** @file */

#include <math.h>
#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Compares given matrix
 *
 * Compare their sizes and values
 * Argument order doesn't matter
 *
 * @param[in] a First matrix for compare
 * @param[in] b Second matrix for compare
 * @return result SUCCESS, FAILURE
 */
int cmatrix_eq(cmatrix* a, cmatrix* b) {
  if (cmatrix_is_valid(a) == FAILURE || cmatrix_is_valid(b) == FAILURE ||
      a->rows != b->rows || a->columns != b->columns) {
    return FAILURE;
  }

  int result = SUCCESS;

  for (int r = 0; result == SUCCESS && r < a->rows; ++r) {
    for (int c = 0; result == SUCCESS && c < a->columns; ++c) {
      if (fabs(a->matrix[r][c] - b->matrix[r][c]) > EPS) {
        result = FAILURE;
      }
    }
  }

  return result;
}
