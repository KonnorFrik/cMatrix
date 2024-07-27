#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m MUL NUM \033[0m"

START_TEST(test_1_norm) {
  cmatrix val = {0};
  cmatrix res = {0};
  cmatrix exp = {0};
  int rows = 1;
  int cols = 2;
  double num = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val);
  cmatrix_create(rows, cols, &exp);

  val.matrix[0][0] = 24;
  val.matrix[0][1] = 666.666;

  exp.matrix[0][0] = 48;
  exp.matrix[0][1] = 1333.332;

  status = cmatrix_mult_number(&val, num, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_2_norm) {
  cmatrix val = {0};
  cmatrix res = {0};
  cmatrix exp = {0};
  int rows = 2;
  int cols = 1;
  double num = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val);
  cmatrix_create(rows, cols, &exp);

  val.matrix[0][0] = 24;
  val.matrix[1][0] = 666.666;

  exp.matrix[0][0] = 48;
  exp.matrix[1][0] = 1333.332;

  status = cmatrix_mult_number(&val, num, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_3_norm) {
  cmatrix val = {0};
  cmatrix res = {0};
  cmatrix exp = {0};
  int rows = 2;
  int cols = 1;
  double num = -2;
  int status = OK;

  cmatrix_create(rows, cols, &val);
  cmatrix_create(rows, cols, &exp);

  val.matrix[0][0] = 24;
  val.matrix[1][0] = 666.666;

  exp.matrix[0][0] = -48;
  exp.matrix[1][0] = -1333.332;

  status = cmatrix_mult_number(&val, num, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_4_leak) {
  cmatrix val = {0};
  cmatrix res = {0};
  cmatrix exp = {0};
  int rows = 2;
  int cols = 1;
  double num = -2;
  int status = OK;

  cmatrix_create(rows, cols, &val);
  cmatrix_create(rows, cols, &exp);

  val.matrix[0][0] = 24;
  val.matrix[1][0] = 666.666;

  exp.matrix[0][0] = -48;
  exp.matrix[1][0] = -1333.332;

  status = cmatrix_mult_number(&val, num, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows);
  ck_assert_int_eq(res.columns, cols);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_5_invalid) {
  cmatrix val = {0};
  int rows = 1;
  int cols = 1;
  double num = -2;
  int status = OK;

  cmatrix_create(rows, cols, &val);

  val.matrix[0][0] = 24;

  status = cmatrix_mult_number(&val, num, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&val);
}
END_TEST

START_TEST(test_6_invalid) {
  cmatrix res = {0};
  double num = -2;
  int status = OK;

  status = cmatrix_mult_number(NULL, num, &res);

  ck_assert_int_eq(status, ERROR);
}
END_TEST

START_TEST(test_7_norm) {
  cmatrix val;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  double num = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val);
  cmatrix_create(rows, cols, &exp);

  val.matrix[0][0] = 24;
  val.matrix[0][1] = 666.666;

  exp.matrix[0][0] = 48;
  exp.matrix[0][1] = 1333.332;

  status = cmatrix_mult_number(&val, num, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

Suite* test_mul_num() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("mul_num_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_norm);
  tcase_add_test(t, test_3_norm);
  tcase_add_test(t, test_4_leak);
  tcase_add_test(t, test_5_invalid);
  tcase_add_test(t, test_6_invalid);
  tcase_add_test(t, test_7_norm);

  suite_add_tcase(s, t);
  return s;
}
