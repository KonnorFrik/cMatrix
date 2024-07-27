#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m CREATE REMOVE \033[0m"

START_TEST(test_1_norm) {
  cmatrix obj = {0};
  int rows = 1;
  int cols = 1;
  int status = cmatrix_create(rows, cols, &obj);

  ck_assert_int_eq(status, OK);
  ck_assert_ptr_nonnull(obj.matrix);
  ck_assert_int_eq(obj.rows, rows);
  ck_assert_int_eq(obj.columns, cols);

  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

START_TEST(test_2_null) {
  int rows = 1;
  int cols = 1;
  int status = cmatrix_create(rows, cols, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(NULL);
}
END_TEST

START_TEST(test_3_invalid) {
  cmatrix obj = {0};
  int rows = -1;
  int cols = -1;
  int status = cmatrix_create(rows, cols, &obj);

  ck_assert_int_eq(status, ERROR);
  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);

  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

START_TEST(test_4_norm) {
  cmatrix obj = {0};
  int rows = 10;
  int cols = 20;
  int status = cmatrix_create(rows, cols, &obj);

  ck_assert_int_eq(status, OK);
  ck_assert_ptr_nonnull(obj.matrix);
  ck_assert_int_eq(obj.rows, rows);
  ck_assert_int_eq(obj.columns, cols);

  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

START_TEST(test_5_invalid) {
  cmatrix obj = {0};
  int rows = 0;
  int cols = 0;
  int status = cmatrix_create(rows, cols, &obj);

  ck_assert_int_eq(status, ERROR);
  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);

  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

START_TEST(test_6_rem_garbage) {
  cmatrix obj = {0};
  obj.rows = 2;
  obj.columns = 3;
  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

START_TEST(test_7_rem) {
  cmatrix obj = {0};
  obj.rows = 2;
  obj.matrix = calloc(obj.rows, sizeof(double**));
  free(obj.matrix[1]);
  obj.matrix[1] = NULL;
  obj.columns = 3;
  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

START_TEST(test_8_invalid) {
  cmatrix obj = {0};
  int rows = 0;
  int cols = 1;
  int status = cmatrix_create(rows, cols, &obj);

  ck_assert_int_eq(status, ERROR);
  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);

  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

START_TEST(test_9_invalid) {
  cmatrix obj = {0};
  int rows = 1;
  int cols = 0;
  int status = cmatrix_create(rows, cols, &obj);

  ck_assert_int_eq(status, ERROR);
  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);

  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

START_TEST(test_10_norm) {
  cmatrix obj;
  int rows = 1;
  int cols = 1;
  int status = cmatrix_create(rows, cols, &obj);

  ck_assert_int_eq(status, OK);
  ck_assert_ptr_nonnull(obj.matrix);
  ck_assert_int_eq(obj.rows, rows);
  ck_assert_int_eq(obj.columns, cols);

  cmatrix_remove(&obj);

  ck_assert_ptr_null(obj.matrix);
  ck_assert_int_eq(obj.rows, 0);
  ck_assert_int_eq(obj.columns, 0);
}
END_TEST

Suite* test_create_remove() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("create_remove_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_null);
  tcase_add_test(t, test_3_invalid);
  tcase_add_test(t, test_4_norm);
  tcase_add_test(t, test_5_invalid);
  tcase_add_test(t, test_6_rem_garbage);
  tcase_add_test(t, test_7_rem);
  tcase_add_test(t, test_8_invalid);
  tcase_add_test(t, test_9_invalid);
  tcase_add_test(t, test_10_norm);

  suite_add_tcase(s, t);
  return s;
}
