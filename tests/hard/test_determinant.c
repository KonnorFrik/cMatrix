#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m DETERMINANT \033[0m"

START_TEST(test_1_norm) {
  cmatrix obj = {0};
  double res = 0;
  double exp = 0;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp = -2;

  status = cmatrix_determinant(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_2_norm) {
  cmatrix obj = {0};
  double res = 0;
  double exp = 0;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[0][2] = 3;
  obj.matrix[1][0] = 4;
  obj.matrix[1][1] = 5;
  obj.matrix[1][2] = 6;
  obj.matrix[2][0] = 7;
  obj.matrix[2][1] = 8;
  obj.matrix[2][2] = 9;

  exp = 0;

  status = cmatrix_determinant(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_3_invalid) {
  double res = 0;
  int status = OK;

  status = cmatrix_determinant(NULL, &res);

  ck_assert_int_eq(status, ERROR);
}
END_TEST

START_TEST(test_4_invalid) {
  cmatrix obj = {0};

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_determinant(&obj, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_5_invalid) {
  cmatrix obj = {0};
  double res = 0;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_determinant(&obj, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_6_norm) {
  cmatrix obj = {0};
  double res = 0;
  double exp = 0;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  obj.matrix[0][0] = 666;

  exp = 666;

  status = cmatrix_determinant(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_7_norm) {
  cmatrix obj;
  double res = 0;
  double exp = 0;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp = -2;

  status = cmatrix_determinant(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_8_norm) {
  int rows1 = 2, cols1 = 2;
  cmatrix A;

  cmatrix_create(rows1, cols1, &A);
  double result;

  A.matrix[0][0] = 1.0;
  A.matrix[0][1] = -1.0;
  A.matrix[1][0] = 0.0;
  A.matrix[1][1] = 0.0;

  int status = cmatrix_determinant(&A, &result);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(result, 0.0, EPS);

  cmatrix_remove(&A);
}
END_TEST

START_TEST(test_9_norm) {
  int rows1 = 1, cols1 = 1;
  cmatrix A = {0};

  cmatrix_create(rows1, cols1, &A);
  double result = 0;

  A.matrix[0][0] = -55.0;

  int status = cmatrix_determinant(&A, &result);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(result, -55.0000, EPS);

  cmatrix_remove(&A);
}
END_TEST

START_TEST(test_10_norm) {
  int rows1 = 2, cols1 = 2;
  cmatrix A;

  cmatrix_create(rows1, cols1, &A);
  double result = 0;

  A.matrix[0][0] = 1.0;
  A.matrix[0][1] = -1.0;
  A.matrix[1][0] = -1.0;
  A.matrix[1][1] = 0.0;

  int status = cmatrix_determinant(&A, &result);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(result, -1.0, EPS);

  cmatrix_remove(&A);
}
END_TEST

START_TEST(test_11_norm) {
  int rows1 = 5, cols1 = 5;
  cmatrix A = {0};

  cmatrix_create(rows1, cols1, &A);
  double result = 0;

  A.matrix[0][0] = 0.0;
  A.matrix[0][1] = -1.0;
  A.matrix[0][2] = -1.0;
  A.matrix[0][3] = 0.0;
  A.matrix[0][4] = 1.0;
  A.matrix[1][0] = -1.0;
  A.matrix[1][1] = 0.0;
  A.matrix[1][2] = -1.0;
  A.matrix[1][3] = -1.0;
  A.matrix[1][4] = -1.0;
  A.matrix[2][0] = 1.0;
  A.matrix[2][1] = 0.0;
  A.matrix[2][2] = -1.0;
  A.matrix[2][3] = 1.0;
  A.matrix[2][4] = -1.0;
  A.matrix[3][0] = 1.0;
  A.matrix[3][1] = 0.0;
  A.matrix[3][2] = 1.0;
  A.matrix[3][3] = 0.0;
  A.matrix[3][4] = 1.0;
  A.matrix[4][0] = -1.0;
  A.matrix[4][1] = 0.0;
  A.matrix[4][2] = 0.0;
  A.matrix[4][3] = 1.0;
  A.matrix[4][4] = -1.0;

  int status = cmatrix_determinant(&A, &result);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(result, 2.0, EPS);
  cmatrix_remove(&A);
}
END_TEST

Suite* test_determinant() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("determinant_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_norm);
  tcase_add_test(t, test_3_invalid);
  tcase_add_test(t, test_4_invalid);
  tcase_add_test(t, test_5_invalid);
  tcase_add_test(t, test_6_norm);
  tcase_add_test(t, test_7_norm);
  tcase_add_test(t, test_8_norm);
  tcase_add_test(t, test_9_norm);
  tcase_add_test(t, test_10_norm);
  tcase_add_test(t, test_11_norm);

  suite_add_tcase(s, t);
  return s;
}
