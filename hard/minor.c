/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Build minor matrix with size smaller by 1
 * @note Allocate memory for result ptr
 * @note Indexing starts from 0 for both row and column
 *
 * @param[in]  a cmatrix object for build minor matrix from
 * @param[in]  row Element row to find minor
 * @param[in]  column Element column to find minor
 * @param[out] result cmatrix object for write result in
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_minor_matrix(cmatrix* a, int row, int column, cmatrix* result) {
  if (cmatrix_is_valid(a) == FAILURE || result == NULL) {
    return ERROR;
  }

  if (a->rows != a->columns || row < 0 || column < 0 || row > a->rows ||
      column > a->columns) {
    return CALC_ERROR;
  }

  int status = OK;

  if (a->rows == 1) {
    if ((status = cmatrix_create(1, 1, result)) == OK) {
      result->matrix[0][0] = a->matrix[0][0];
    }

    return status;
  }

  status = cmatrix_create(a->rows - 1, a->columns - 1, result);

  if (status == OK) {
    int row_ind = 0;
    int col_ind = 0;

    for (int r = 0; r < a->rows; ++r) {
      if (r == row) {
        continue;
      }

      col_ind = 0;

      for (int c = 0; c < a->columns; ++c) {
        if (c == column) {
          continue;
        }

        result->matrix[row_ind][col_ind] = a->matrix[r][c];
        col_ind++;
      }

      row_ind++;
    }
  }

  return status;
}
