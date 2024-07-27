#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m CALC COMPLEMENTS \033[0m"

START_TEST(test_1_norm) {
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
  obj.matrix[1][0] = 0;
  obj.matrix[1][1] = 4;
  obj.matrix[1][2] = 2;
  obj.matrix[2][0] = 5;
  obj.matrix[2][1] = 2;
  obj.matrix[2][2] = 1;

  exp.matrix[0][0] = 0;
  exp.matrix[0][1] = 10;
  exp.matrix[0][2] = -20;
  exp.matrix[1][0] = 4;
  exp.matrix[1][1] = -14;
  exp.matrix[1][2] = 8;
  exp.matrix[2][0] = -8;
  exp.matrix[2][1] = -2;
  exp.matrix[2][2] = 4;

  status = cmatrix_calc_complements(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_2_invalid) {
  cmatrix res = {0};

  int status = OK;

  status = cmatrix_calc_complements(NULL, &res);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_3_invalid) {
  cmatrix obj = {0};

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_calc_complements(&obj, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_4_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_calc_complements(&obj, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_5_norm) {
  cmatrix obj;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 1;
  obj.matrix[0][1] = 2;
  obj.matrix[0][2] = 3;
  obj.matrix[1][0] = 0;
  obj.matrix[1][1] = 4;
  obj.matrix[1][2] = 2;
  obj.matrix[2][0] = 5;
  obj.matrix[2][1] = 2;
  obj.matrix[2][2] = 1;

  exp.matrix[0][0] = 0;
  exp.matrix[0][1] = 10;
  exp.matrix[0][2] = -20;
  exp.matrix[1][0] = 4;
  exp.matrix[1][1] = -14;
  exp.matrix[1][2] = 8;
  exp.matrix[2][0] = -8;
  exp.matrix[2][1] = -2;
  exp.matrix[2][2] = 4;

  status = cmatrix_calc_complements(&obj, &res);

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

  int rows = 4;
  int cols = 4;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 112.0;
  obj.matrix[0][1] = 243.0;
  obj.matrix[0][2] = 3.0;
  obj.matrix[0][3] = -8.0;
  obj.matrix[1][0] = 47.0;
  obj.matrix[1][1] = 51.0;
  obj.matrix[1][2] = -66.0;
  obj.matrix[1][3] = 99.0;
  obj.matrix[2][0] = -74.0;
  obj.matrix[2][1] = 85.0;
  obj.matrix[2][2] = 97.0;
  obj.matrix[2][3] = 63.0;
  obj.matrix[3][0] = -13.0;
  obj.matrix[3][1] = 79.0;
  obj.matrix[3][2] = -99.0;
  obj.matrix[3][3] = -121.0;

  exp.matrix[0][0] = -2879514.0;
  exp.matrix[0][1] = -1236631.0;
  exp.matrix[0][2] = -1685096.0;
  exp.matrix[0][3] = 880697.0;
  exp.matrix[1][0] = 1162090.0;
  exp.matrix[1][1] = -714015.0;
  exp.matrix[1][2] = 4046255.0;
  exp.matrix[1][3] = -3901600.0;
  exp.matrix[2][0] = 4362897.0;
  exp.matrix[2][1] = -2049432.0;
  exp.matrix[2][2] = -532912.0;
  exp.matrix[2][3] = -1370781.0;
  exp.matrix[3][0] = 3412773.0;
  exp.matrix[3][1] = -1569493.0;
  exp.matrix[3][2] = 3144517.0;
  exp.matrix[3][3] = 1284666.0;

  status = cmatrix_calc_complements(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_7_norm) {
  cmatrix obj;
  cmatrix res;
  cmatrix exp;

  int rows = 4;
  int cols = 4;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = -1.0;
  obj.matrix[0][1] = 2.0;
  obj.matrix[0][2] = 7.0;
  obj.matrix[0][3] = 9.0;
  obj.matrix[1][0] = 1.0;
  obj.matrix[1][1] = 0.0;
  obj.matrix[1][2] = 0.0;
  obj.matrix[1][3] = 0.0;
  obj.matrix[2][0] = 47.0;
  obj.matrix[2][1] = 13.0;
  obj.matrix[2][2] = 17.0;
  obj.matrix[2][3] = 21.0;
  obj.matrix[3][0] = 22.0;
  obj.matrix[3][1] = 7.0;
  obj.matrix[3][2] = 1.0;
  obj.matrix[3][3] = 3.0;

  exp.matrix[0][0] = 0.0;
  exp.matrix[0][1] = -30.0;
  exp.matrix[0][2] = -108.0;
  exp.matrix[0][3] = 106.0;
  exp.matrix[1][0] = 138.0;
  exp.matrix[1][1] = -726.0;
  exp.matrix[1][2] = -1137.0;
  exp.matrix[1][3] = 1061.0;
  exp.matrix[2][0] = 0.0;
  exp.matrix[2][1] = 12.0;
  exp.matrix[2][2] = 57.0;
  exp.matrix[2][3] = -47.0;
  exp.matrix[3][0] = 0.0;
  exp.matrix[3][1] = 6.0;
  exp.matrix[3][2] = -75.0;
  exp.matrix[3][3] = 57.0;

  status = cmatrix_calc_complements(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_8_norm) {
  cmatrix obj;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 1.0;
  obj.matrix[0][1] = 2.0;
  obj.matrix[0][2] = 3.0;
  obj.matrix[1][0] = 0.0;
  obj.matrix[1][1] = 4.0;
  obj.matrix[1][2] = 2.0;
  obj.matrix[2][0] = 5.0;
  obj.matrix[2][1] = 2.0;
  obj.matrix[2][2] = 1.0;

  exp.matrix[0][0] = 0.0;
  exp.matrix[0][1] = 10.0;
  exp.matrix[0][2] = -20.0;
  exp.matrix[1][0] = 4.0;
  exp.matrix[1][1] = -14.0;
  exp.matrix[1][2] = 8.0;
  exp.matrix[2][0] = -8.0;
  exp.matrix[2][1] = -2.0;
  exp.matrix[2][2] = 4.0;

  status = cmatrix_calc_complements(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_9_norm) {
  int rows1 = 2, cols1 = 2;
  cmatrix A = {0}, result = {0};

  cmatrix_create(rows1, cols1, &A);

  A.matrix[0][0] = 57.0;
  A.matrix[0][1] = -55.0;
  A.matrix[1][0] = 2.0;
  A.matrix[1][1] = -79.0;

  int status = cmatrix_calc_complements(&A, &result);

  ck_assert_int_eq(status, OK);

  ck_assert_double_eq_tol(result.matrix[0][0], -79.0, EPS);
  ck_assert_double_eq_tol(result.matrix[0][1], -2.0, EPS);
  ck_assert_double_eq_tol(result.matrix[1][0], 55.0, EPS);
  ck_assert_double_eq_tol(result.matrix[1][1], 57.0, EPS);

  cmatrix_remove(&A);
  cmatrix_remove(&result);
}
END_TEST

START_TEST(test_10_norm) {
  cmatrix A = {0}, check = {0}, result = {0};
  cmatrix_create(3, 3, &A);
  cmatrix_create(3, 3, &check);

  A.matrix[0][0] = 1;
  A.matrix[0][1] = 2;
  A.matrix[0][2] = 3;
  A.matrix[1][0] = 0;
  A.matrix[1][1] = 4;
  A.matrix[1][2] = 2;
  A.matrix[2][0] = 5;
  A.matrix[2][1] = 2;
  A.matrix[2][2] = 1;

  check.matrix[0][0] = 0;
  check.matrix[0][1] = 10;
  check.matrix[0][2] = -20;
  check.matrix[1][0] = 4;
  check.matrix[1][1] = -14;
  check.matrix[1][2] = 8;
  check.matrix[2][0] = -8;
  check.matrix[2][1] = -2;
  check.matrix[2][2] = 4;

  int ret_val = cmatrix_calc_complements(&A, &result);
  ck_assert_int_eq(ret_val, OK);
  int eq = cmatrix_eq(&result, &check);
  ck_assert_int_eq(eq, SUCCESS);

  cmatrix_remove(&A);
  cmatrix_remove(&check);
  cmatrix_remove(&result);
}
END_TEST

START_TEST(test_11_norm) {
  cmatrix A = {0}, check = {0}, result = {0};

  cmatrix_create(1, 1, &A);
  cmatrix_create(1, 1, &check);

  A.matrix[0][0] = 23464;

  check.matrix[0][0] = 1;

  int ret_val = cmatrix_calc_complements(&A, &result);

  ck_assert_int_eq(ret_val, OK);
  int eq = cmatrix_eq(&result, &check);
  ck_assert_int_eq(eq, SUCCESS);

  cmatrix_remove(&A);
  cmatrix_remove(&check);
  cmatrix_remove(&result);
}
END_TEST

START_TEST(test_12_norm) {
  cmatrix A = {0}, check = {0}, result = {0};

  cmatrix_create(4, 4, &A);
  cmatrix_create(4, 4, &check);

  A.matrix[0][0] = 3;
  A.matrix[0][1] = 15;
  A.matrix[0][2] = 3;
  A.matrix[0][3] = 9;
  A.matrix[1][0] = 8;
  A.matrix[1][1] = 6;
  A.matrix[1][2] = 4;
  A.matrix[1][3] = 2;
  A.matrix[2][0] = 1;
  A.matrix[2][1] = 3;
  A.matrix[2][2] = 9;
  A.matrix[2][3] = 9;
  A.matrix[3][0] = -1;
  A.matrix[3][1] = 3;
  A.matrix[3][2] = 3;
  A.matrix[3][3] = 2;

  check.matrix[0][0] = -6;
  check.matrix[0][1] = 92;
  check.matrix[0][2] = -222;
  check.matrix[0][3] = 192;
  check.matrix[1][0] = 234;
  check.matrix[1][1] = 48;
  check.matrix[1][2] = 174;
  check.matrix[1][3] = -216;
  check.matrix[2][0] = 66;
  check.matrix[2][1] = -204;
  check.matrix[2][2] = 18;
  check.matrix[2][3] = 312;
  check.matrix[3][0] = -504;
  check.matrix[3][1] = 456;
  check.matrix[3][2] = 744;
  check.matrix[3][3] = -840;

  int ret_val = cmatrix_calc_complements(&A, &result);
  ck_assert_int_eq(ret_val, OK);
  int eq = cmatrix_eq(&result, &check);
  ck_assert_int_eq(eq, SUCCESS);

  cmatrix_remove(&A);
  cmatrix_remove(&check);
  cmatrix_remove(&result);
}
END_TEST

Suite* test_calc_complements() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("calc_complements_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_invalid);
  tcase_add_test(t, test_3_invalid);
  tcase_add_test(t, test_4_invalid);
  tcase_add_test(t, test_5_norm);
  tcase_add_test(t, test_6_norm);
  tcase_add_test(t, test_7_norm);
  tcase_add_test(t, test_8_norm);
  tcase_add_test(t, test_9_norm);
  tcase_add_test(t, test_10_norm);
  tcase_add_test(t, test_11_norm);
  tcase_add_test(t, test_12_norm);

  suite_add_tcase(s, t);
  return s;
}
