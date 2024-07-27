#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m MUL MATRICES \033[0m"

START_TEST(test_1_norm) {
  cmatrix val1 = {0};
  cmatrix val2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 3;
  val1.matrix[0][1] = 10;

  val2.matrix[0][0] = 2;
  val2.matrix[1][0] = 5;

  exp.matrix[0][0] = 56;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_2_norm) {
  cmatrix val1 = {0};
  cmatrix val2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 3;
  val1.matrix[0][1] = 10;
  val1.matrix[0][2] = 4;

  val2.matrix[0][0] = 2;
  val2.matrix[1][0] = 5;
  val2.matrix[2][0] = 2;

  exp.matrix[0][0] = 64;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_3_norm) {
  cmatrix val1 = {0};
  cmatrix val2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1;
  val1.matrix[0][1] = 4;
  val1.matrix[1][0] = 2;
  val1.matrix[1][1] = 5;
  val1.matrix[2][0] = 3;
  val1.matrix[2][1] = 6;

  val2.matrix[0][0] = 1;
  val2.matrix[0][1] = -1;
  val2.matrix[0][2] = 1;
  val2.matrix[1][0] = 2;
  val2.matrix[1][1] = 3;
  val2.matrix[1][2] = 4;

  exp.matrix[0][0] = 9;
  exp.matrix[0][1] = 11;
  exp.matrix[0][2] = 17;
  exp.matrix[1][0] = 12;
  exp.matrix[1][1] = 13;
  exp.matrix[1][2] = 22;
  exp.matrix[2][0] = 15;
  exp.matrix[2][1] = 15;
  exp.matrix[2][2] = 27;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_4_invalid) {
  cmatrix val2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);
  status = cmatrix_mult(NULL, &val2, &res);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_5_invalid) {
  cmatrix val1 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, rows, &exp);
  status = cmatrix_mult(&val1, NULL, &res);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&val1);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_6_invalid) {
  cmatrix val1 = {0};
  cmatrix val2 = {0};
  cmatrix exp = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);
  status = cmatrix_mult(&val1, &val2, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_7_invalid) {
  cmatrix val1 = {0};
  cmatrix val2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows + 1, &val2);
  cmatrix_create(rows, rows, &exp);
  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_8_invalid) {
  cmatrix val1 = {0};
  cmatrix val2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols + 1, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_9_norm) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 3;
  val1.matrix[0][1] = 10;

  val2.matrix[0][0] = 2;
  val2.matrix[1][0] = 5;

  exp.matrix[0][0] = 56;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

Suite* test_mul_mtrx() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("mul_mtrx_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_norm);
  tcase_add_test(t, test_3_norm);
  tcase_add_test(t, test_4_invalid);
  tcase_add_test(t, test_5_invalid);
  tcase_add_test(t, test_6_invalid);
  tcase_add_test(t, test_7_invalid);
  tcase_add_test(t, test_8_invalid);
  tcase_add_test(t, test_9_norm);

  suite_add_tcase(s, t);
  return s;
}
