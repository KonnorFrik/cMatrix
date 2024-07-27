#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m TRANSPOSE \033[0m"

START_TEST(test_1_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(cols, rows, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;

  exp.matrix[0][0] = 1;
  exp.matrix[1][0] = 2;

  status = cmatrix_transpose(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_2_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(cols, rows, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp.matrix[0][0] = 1;
  exp.matrix[0][1] = 3;
  exp.matrix[1][0] = 2;
  exp.matrix[1][1] = 4;

  status = cmatrix_transpose(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_3_invalid) {
  cmatrix res = {0};

  int status = OK;

  status = cmatrix_transpose(NULL, &res);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_4_invalid) {
  cmatrix obj = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_transpose(&obj, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_5_norm) {
  cmatrix obj;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(cols, rows, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;

  exp.matrix[0][0] = 1;
  exp.matrix[1][0] = 2;

  status = cmatrix_transpose(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_6_norm) {
  cmatrix obj;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(cols, rows, &exp);

  obj.matrix[0][0] = 1;

  exp.matrix[0][0] = 1;

  status = cmatrix_transpose(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

Suite* test_transpose() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("transpose_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_norm);
  tcase_add_test(t, test_3_invalid);
  tcase_add_test(t, test_4_invalid);
  tcase_add_test(t, test_5_norm);
  tcase_add_test(t, test_6_norm);

  suite_add_tcase(s, t);
  return s;
}
