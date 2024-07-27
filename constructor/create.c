/** @file */

#include "../cmatrix.h"
#include <stdlib.h>

/**
 * @brief Allocate memory for given matrix object ptr
 * Count of allocated bytes depends on rows and columns args
 *
 * @param[in]  rows Count of rows in matrix
 * @param[in]  columns Count of columns in matrix
 * @param[out] result Matrix object ptr for allocate memory in
 * @return status OK, ERROR
 */
int cmatrix_create(int rows, int columns, cmatrix* result) {
  if (result == NULL || rows <= 0 || columns <= 0) {
    return ERROR;
  }

  int status = OK;
  double** row_mem = calloc(rows, sizeof(double*));

  if (row_mem == NULL) status = ERROR;

  for (int row_num = 0; status == OK && row_num < rows; ++row_num) {
    double* column = calloc(columns, sizeof(double));

    if (column != NULL) {
      row_mem[row_num] = column;

    } else {
      status = ERROR;
    }
  }

  if (status == OK) {
    result->matrix = row_mem;
    result->rows = rows;
    result->columns = columns;
  }

  return status;
}
