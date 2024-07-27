#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m MINOR MATRIX \033[0m"

START_TEST(test_1_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 666;

  exp.matrix[0][0] = 666;

  status = cmatrix_minor_matrix(&obj, 0, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows);
  ck_assert_int_eq(res.columns, cols);
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
  cmatrix_create(rows - 1, cols - 1, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp.matrix[0][0] = 4;

  status = cmatrix_minor_matrix(&obj, 0, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows - 1);
  ck_assert_int_eq(res.columns, cols - 1);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_3_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows - 1, cols - 1, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp.matrix[0][0] = 3;

  status = cmatrix_minor_matrix(&obj, 0, 1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows - 1);
  ck_assert_int_eq(res.columns, cols - 1);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_4_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows - 1, cols - 1, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp.matrix[0][0] = 2;

  status = cmatrix_minor_matrix(&obj, 1, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows - 1);
  ck_assert_int_eq(res.columns, cols - 1);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_5_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows - 1, cols - 1, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[1][0] = 3;
  obj.matrix[1][1] = 4;

  exp.matrix[0][0] = 1;

  status = cmatrix_minor_matrix(&obj, 1, 1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows - 1);
  ck_assert_int_eq(res.columns, cols - 1);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_6_invalid) {
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows - 1, cols - 1, &exp);

  exp.matrix[0][0] = 1;

  status = cmatrix_minor_matrix(NULL, 1, 1, &res);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_7_invalid) {
  cmatrix obj = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows - 1, cols - 1, &exp);

  exp.matrix[0][0] = 1;

  status = cmatrix_minor_matrix(&obj, 1, 1, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_8_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_minor_matrix(&obj, 1, 1, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_9_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows - 1, cols - 1, &exp);

  exp.matrix[0][0] = 1;

  status = cmatrix_minor_matrix(&obj, -1, 1, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_10_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows - 1, cols - 1, &exp);

  exp.matrix[0][0] = 1;

  status = cmatrix_minor_matrix(&obj, 1, -1, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_11_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows - 1, cols - 1, &exp);

  exp.matrix[0][0] = 1;

  status = cmatrix_minor_matrix(&obj, 3, 1, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_12_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows - 1, cols - 1, &exp);

  exp.matrix[0][0] = 1;

  status = cmatrix_minor_matrix(&obj, 1, 3, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_13_norm) {
  cmatrix obj;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 666;

  exp.matrix[0][0] = 666;

  status = cmatrix_minor_matrix(&obj, 0, 0, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(res.rows, rows);
  ck_assert_int_eq(res.columns, cols);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

Suite* test_minor_matrix() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("minor_matrix_tc");

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
  tcase_add_test(t, test_11_invalid);
  tcase_add_test(t, test_12_invalid);
  tcase_add_test(t, test_13_norm);

  suite_add_tcase(s, t);
  return s;
}
