/** @file */

#include <stddef.h>

#include "../other/other.h"
#include "../cmatrix.h"

/**
 * @brief Calculate inverse matrix for matrix 'a'
 *
 * @param[in]  a cmatrix object for calculate
 * @param[out] result matrix object for write result in
 * @return status OK, ERROR, CALC_ERROR
 */
int cmatrix_inverse(cmatrix* a, cmatrix* result) {
  if (cmatrix_is_valid(a) == FAILURE || result == NULL) {
    return ERROR;
  }

  int status = OK;
  double det = 0;
  cmatrix complements = {0};
  cmatrix trans = {0};

  status = cmatrix_determinant(a, &det);

  if (status != OK || det == 0) status = CALC_ERROR;
  if (status == OK) status = cmatrix_calc_complements(a, &complements);
  if (status == OK) status = cmatrix_transpose(&complements, &trans);
  if (status == OK) status = cmatrix_mult_number(&trans, 1. / det, result);

  cmatrix_remove(&complements);
  cmatrix_remove(&trans);

  return status;
}
