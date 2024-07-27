/** @file */

#include <stdlib.h>
#include <stdio.h>

#include "other.h"

/**
 * @brief Validate given matrix ptr
 * Validate for:
 *      obj not null
 *      obj.matrix not null
 *      obj.rows & obj.columns > 0
 *
 * @param[in] obj cmatrix object for validate
 * @return result SUCCESS, FAILURE
 */
int cmatrix_is_valid(const cmatrix* obj) {
  if (obj == NULL || obj->matrix == NULL || obj->rows <= 0 ||
      obj->columns <= 0) {
    return FAILURE;
  }

  return SUCCESS;
}

/**
 * @brief Validate 2 matrices a and b + result
 * The code is submitted for use in funcs
 * @param[in] a cmatrix object ptr
 * @param[in] b cmatrix object ptr
 * @param[in] result cmatrix object ptr
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_validate_all(const cmatrix* a, const cmatrix* b, const cmatrix* result) {
  if (cmatrix_is_valid(a) == FAILURE || cmatrix_is_valid(b) == FAILURE ||
      result == NULL) {
    return ERROR;
  }

  if (a->rows != b->rows || a->columns != b->columns) {
    return CALC_ERROR;
  }

  return OK;
}

/**
 * @brief Print cmatrix object
 * @param[in] obj cmatrix object
 * @param[in] fmt Format for one matrix element
 */
void cmatrix_print(cmatrix* obj, const char* fmt) {
  printf("Shape: (%d, %d)\n", obj->rows, obj->columns);

  for (int r = 0; r < obj->rows; ++r) {
    for (int c = 0; c < obj->columns; ++c) {
      printf(fmt, obj->matrix[r][c]);
    }

    printf("\n");
  }
}
