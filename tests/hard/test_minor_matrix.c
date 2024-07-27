#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m MATRIX OF MINOR \033[0m"

START_TEST(test_1_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp.matrix[0][0] = 4;
  exp.matrix[0][1] = 3;
  exp.matrix[1][0] = 2;
  exp.matrix[1][1] = 1;

  status = cmatrix_matrix_minor(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows);
  ck_assert_int_eq(res.columns, cols);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_2_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[0][2] = 3;
  obj.matrix[1][0] = 4;
  obj.matrix[1][1] = 5;
  obj.matrix[1][2] = 6;
  obj.matrix[2][0] = 7;
  obj.matrix[2][1] = 8;
  obj.matrix[2][2] = 9;

  exp.matrix[0][0] = -3;
  exp.matrix[0][1] = -6;
  exp.matrix[0][2] = -3;
  exp.matrix[1][0] = -6;
  exp.matrix[1][1] = -12;
  exp.matrix[1][2] = -6;
  exp.matrix[2][0] = -3;
  exp.matrix[2][1] = -6;
  exp.matrix[2][2] = -3;

  status = cmatrix_matrix_minor(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows);
  ck_assert_int_eq(res.columns, cols);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_3_invalid) {
  cmatrix res = {0};

  int status = OK;

  status = cmatrix_matrix_minor(NULL, &res);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_4_invalid) {
  cmatrix obj = {0};

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_matrix_minor(&obj, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_5_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_matrix_minor(&obj, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_6_norm) {
  cmatrix obj;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp.matrix[0][0] = 4;
  exp.matrix[0][1] = 3;
  exp.matrix[1][0] = 2;
  exp.matrix[1][1] = 1;

  status = cmatrix_matrix_minor(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows);
  ck_assert_int_eq(res.columns, cols);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

Suite* test_matrix_minor() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("matrix_minor_cmatrixc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_norm);
  tcase_add_test(t, test_3_invalid);
  tcase_add_test(t, test_4_invalid);
  tcase_add_test(t, test_5_invalid);
  tcase_add_test(t, test_6_norm);

  suite_add_tcase(s, t);
  return s;
}
