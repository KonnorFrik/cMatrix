#ifndef __TEST_CMATRIX_H__
#define __TEST_CMATRIX_H__

#include <check.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#include "../other/other.h"
#include "../cmatrix.h"

Suite* test_create_remove();
Suite* test_equal();

Suite* test_sum();
Suite* test_sub();
Suite* test_mul_num();
Suite* test_mul_mtrx();

Suite* test_transpose();
Suite* test_minor();
Suite* test_minor_elem();
Suite* test_minor_matrix();
Suite* test_determinant();
Suite* test_calc_complements();
Suite* test_inverse();

Suite* test_auto();

#endif
