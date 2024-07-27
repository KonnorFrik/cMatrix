/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Multiply every number in matrix on given number
 * @note allocate memory for result
 *
 * param[in]  a matrix object for operation
 * param[in]  number for multiply on it
 * param[out] result for write result in
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_mult_number(cmatrix* a, double number, cmatrix* result) {
  if (cmatrix_is_valid(a) == FAILURE || result == NULL) {
    return ERROR;
  }

  int status = cmatrix_create(a->rows, a->columns, result);

  if (status == OK) {
    for (int r = 0; r < a->rows; ++r) {
      for (int c = 0; c < a->columns; ++c) {
        result->matrix[r][c] = a->matrix[r][c] * number;
      }
    }
  }

  return status;
}
