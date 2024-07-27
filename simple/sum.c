/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Adds tow matrices
 * @warning Modify input argument
 * @note Can add only matrices with same size
 * @note Allocate memory for result.matrix
 *
 * @param[in]  a First matrix object for operation
 * @param[in]  b Second matrix object for operation
 * @param[out] result matrix object for write result of operation
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_sum(cmatrix* a, cmatrix* b, cmatrix* result) {
  int status = OK;

  if ((status = cmatrix_validate_all(a, b, result)) != OK) {
    return status;
  }

  status = cmatrix_create(a->rows, a->columns, result);

  if (status == OK) {
    for (int r = 0; r < a->rows; ++r) {
      for (int c = 0; c < a->columns; ++c) {
        result->matrix[r][c] = a->matrix[r][c] + b->matrix[r][c];
      }
    }
  }

  return status;
}
