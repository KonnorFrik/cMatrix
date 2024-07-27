#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m MINOR ELEM \033[0m"

START_TEST(test_1_norm) {
  cmatrix obj = {0};
  double res = 0;
  double exp = 0;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  obj.matrix[0][0] = 666;

  exp = 666;

  status = cmatrix_minor_elem(&obj, 0, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_2_norm) {
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

  exp = 4;

  status = cmatrix_minor_elem(&obj, 0, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_3_norm) {
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

  exp = 3;

  status = cmatrix_minor_elem(&obj, 0, 1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_4_norm) {
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

  exp = 2;

  status = cmatrix_minor_elem(&obj, 1, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_5_norm) {
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

  exp = 1;

  status = cmatrix_minor_elem(&obj, 1, 1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_6_invalid) {
  double res = 0;
  int status = OK;

  status = cmatrix_minor_elem(NULL, 0, 0, &res);

  ck_assert_int_eq(status, ERROR);
}
END_TEST

START_TEST(test_7_invalid) {
  cmatrix obj = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_minor_elem(&obj, 0, 0, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_8_invalid) {
  cmatrix obj = {0};
  double res = 0;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_minor_elem(&obj, 0, 0, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_9_invalid) {
  cmatrix obj = {0};
  double res = 0;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_minor_elem(&obj, -1, 0, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_10_invalid) {
  cmatrix obj = {0};
  double res = 0;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_minor_elem(&obj, 0, -1, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_11_norm) {
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

  exp = -3;

  status = cmatrix_minor_elem(&obj, 0, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_12_norm) {
  cmatrix obj = {0};
  double res = 0;
  double exp = 0;

  int rows = 4;
  int cols = 4;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[0][2] = 3;
  obj.matrix[0][3] = 4;
  obj.matrix[1][0] = 5;
  obj.matrix[1][1] = 6;
  obj.matrix[1][2] = 7;
  obj.matrix[1][3] = 8;
  obj.matrix[2][0] = 9;
  obj.matrix[2][1] = 10;
  obj.matrix[2][2] = 11;
  obj.matrix[2][3] = 12;
  obj.matrix[3][0] = 13;
  obj.matrix[3][1] = 14;
  obj.matrix[3][2] = 15;
  obj.matrix[3][3] = 16;

  exp = 0;

  status = cmatrix_minor_elem(&obj, 0, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_13_norm) {
  cmatrix obj;
  double res = 0;
  double exp = 0;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  obj.matrix[0][0] = 666;

  exp = 666;

  status = cmatrix_minor_elem(&obj, 0, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(res, exp);

  cmatrix_remove(&obj);
}
END_TEST

Suite* test_minor_elem() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("minor_elem_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_norm);
  tcase_add_test(t, test_3_norm);
  tcase_add_test(t, test_4_norm);
  tcase_add_test(t, test_5_norm);
  tcase_add_test(t, test_6_invalid);
  tcase_add_test(t, test_7_invalid);
  tcase_add_test(t, test_8_invalid);
  tcase_add_test(t, test_9_invalid);
  tcase_add_test(t, test_10_invalid);
  tcase_add_test(t, test_11_norm);
  tcase_add_test(t, test_12_norm);
  tcase_add_test(t, test_13_norm);

  suite_add_tcase(s, t);
  return s;
}
