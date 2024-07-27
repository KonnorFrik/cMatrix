#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m SUM \033[0m"

START_TEST(test_1_norm) {
  cmatrix v1 = {0};
  cmatrix v2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int status = OK;
  int rows = 1;
  int columns = 1;

  ck_assert_int_eq(cmatrix_create(rows, columns, &v1), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &v2), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &exp), OK);

  v1.matrix[0][0] = 1;
  v2.matrix[0][0] = 1;

  exp.matrix[0][0] = 2;

  status = cmatrix_sum(&v1, &v2, &res);
  ck_assert_int_eq(status, OK);

  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&v1);
  cmatrix_remove(&v2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_2_norm) {
  cmatrix v1 = {0};
  cmatrix v2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int status = OK;
  int rows = 1;
  int columns = 2;

  ck_assert_int_eq(cmatrix_create(rows, columns, &v1), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &v2), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &exp), OK);

  v1.matrix[0][0] = 5.9;
  v1.matrix[0][1] = 69.8;

  v2.matrix[0][0] = 4.1;
  v2.matrix[0][1] = 0.2;

  exp.matrix[0][0] = 10;
  exp.matrix[0][1] = 70;

  status = cmatrix_sum(&v1, &v2, &res);
  ck_assert_int_eq(status, OK);

  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&v1);
  cmatrix_remove(&v2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_3_invalid) {
  cmatrix v2 = {0};
  cmatrix res = {0};

  int status = OK;
  int rows = 1;
  int columns = 2;

  ck_assert_int_eq(cmatrix_create(rows, columns, &v2), OK);

  status = cmatrix_sum(NULL, &v2, &res);
  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&v2);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_4_invalid) {
  cmatrix v1 = {0};
  cmatrix res = {0};

  int status = OK;
  int rows = 1;
  int columns = 2;

  ck_assert_int_eq(cmatrix_create(rows, columns, &v1), OK);

  status = cmatrix_sum(&v1, NULL, &res);
  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&v1);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_5_invalid) {
  cmatrix v1 = {0};
  cmatrix v2 = {0};

  int status = OK;
  int rows = 1;
  int columns = 2;

  ck_assert_int_eq(cmatrix_create(rows, columns, &v1), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &v2), OK);

  status = cmatrix_sum(&v1, &v2, NULL);
  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&v1);
  cmatrix_remove(&v2);
}
END_TEST

START_TEST(test_6_invalid) {
  cmatrix v1 = {0};
  cmatrix v2 = {0};
  cmatrix res = {0};

  int status = OK;
  int rows = 1;
  int columns = 2;

  ck_assert_int_eq(cmatrix_create(3, columns, &v1), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &v2), OK);

  status = cmatrix_sum(&v1, &v2, &res);
  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&v1);
  cmatrix_remove(&v2);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_7_invalid) {
  cmatrix v1 = {0};
  cmatrix v2 = {0};
  cmatrix res = {0};

  int status = OK;
  int rows = 1;
  int columns = 2;

  ck_assert_int_eq(cmatrix_create(rows, 3, &v1), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &v2), OK);

  status = cmatrix_sum(&v1, &v2, &res);
  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&v1);
  cmatrix_remove(&v2);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_8_invalid) {
  cmatrix v1 = {0};
  cmatrix v2 = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int status = OK;
  int rows = 1;
  int columns = 1;

  ck_assert_int_eq(cmatrix_create(rows, columns, &v1), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &v2), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &exp), OK);

  v1.matrix[0][0] = 1;
  v2.matrix[0][0] = 1;

  exp.matrix[0][0] = 2;

  status = cmatrix_sum(&v1, &v2, &res);
  ck_assert_int_eq(status, OK);

  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&v1);
  cmatrix_remove(&v2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_9_norm) {
  cmatrix v1;
  cmatrix v2;
  cmatrix res;
  cmatrix exp;

  int status = OK;
  int rows = 1;
  int columns = 1;

  ck_assert_int_eq(cmatrix_create(rows, columns, &v1), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &v2), OK);
  ck_assert_int_eq(cmatrix_create(rows, columns, &exp), OK);

  v1.matrix[0][0] = 1;
  v2.matrix[0][0] = 1;

  exp.matrix[0][0] = 2;

  status = cmatrix_sum(&v1, &v2, &res);
  ck_assert_int_eq(status, OK);

  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&v1);
  cmatrix_remove(&v2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

Suite* test_sum() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("sum_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_norm);
  tcase_add_test(t, test_3_invalid);
  tcase_add_test(t, test_4_invalid);
  tcase_add_test(t, test_5_invalid);
  tcase_add_test(t, test_6_invalid);
  tcase_add_test(t, test_7_invalid);
  tcase_add_test(t, test_8_invalid);
  tcase_add_test(t, test_9_norm);

  suite_add_tcase(s, t);
  return s;
}
