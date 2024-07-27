#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m EQUAL \033[0m"

START_TEST(test_1_norm) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 2.2;
  obj_2.matrix[0][0] = 2.2;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_2_norm) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 2;
  int cols = 1;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 2.2;
  obj_1.matrix[1][0] = 2;

  obj_2.matrix[0][0] = 2.2;
  obj_2.matrix[1][0] = 2;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_3_norm) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 2;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 2.2;
  obj_1.matrix[0][1] = 2;

  obj_2.matrix[0][0] = 2.2;
  obj_2.matrix[0][1] = 2;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_4_null) {
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 2;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_2.matrix[0][0] = 2.2;
  obj_2.matrix[0][1] = 2;

  status = cmatrix_eq(NULL, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_5_null) {
  cmatrix obj_1 = {0};
  int rows = 1;
  int cols = 2;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 2.2;
  obj_1.matrix[0][1] = 2;

  status = cmatrix_eq(&obj_1, NULL);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
}
END_TEST

START_TEST(test_6_invalid) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int status = OK;

  status = cmatrix_create(1, 1, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(1, 2, &obj_2);
  ck_assert_int_eq(status, OK);

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_7_invalid) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int status = OK;

  status = cmatrix_create(1, 1, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(2, 1, &obj_2);
  ck_assert_int_eq(status, OK);

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_8_invalid) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int status = OK;

  status = cmatrix_create(1, 1, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(1, 1, &obj_2);
  ck_assert_int_eq(status, OK);

  cmatrix_remove(&obj_1);

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_9_invalid) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int status = OK;

  status = cmatrix_create(1, 1, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(1, 1, &obj_2);
  ck_assert_int_eq(status, OK);

  cmatrix_remove(&obj_2);

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
}
END_TEST

START_TEST(test_10_invalid) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.rows = -1;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  obj_1.rows = rows;

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_11_invalid) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.columns = -1;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  obj_1.columns = cols;

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_12_invalid) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.columns = 0;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  obj_1.columns = cols;

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_13_invalid) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.rows = 0;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  obj_1.rows = rows;

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_14_not_eq) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 2;
  obj_2.matrix[0][0] = 1;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_15_not_eq) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 1;
  obj_2.matrix[0][0] = 2;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_16_not_eq) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = -1;
  obj_2.matrix[0][0] = -2;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_17_not_eq) {
  cmatrix obj_1 = {0};
  cmatrix obj_2 = {0};
  int rows = 1;
  int cols = 1;
  int status = OK;

  status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = -2;
  obj_2.matrix[0][0] = -1;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_18_norm) {
  cmatrix obj_1;
  cmatrix obj_2;
  int rows = 1;
  int cols = 1;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 2.2;
  obj_2.matrix[0][0] = 2.2;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_19_norm) {
  cmatrix obj_1;
  cmatrix obj_2;
  int rows = 2;
  int cols = 3;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = -565.0;
  obj_1.matrix[0][1] = 336.0;
  obj_1.matrix[0][2] = 387.0;
  obj_1.matrix[1][0] = -571.0;
  obj_1.matrix[1][1] = -625.0;
  obj_1.matrix[1][2] = 659.0;

  obj_2.matrix[0][0] = -564.9999999425665;
  obj_2.matrix[0][1] = 336.00000009840676;
  obj_2.matrix[0][2] = 386.99999991639265;
  obj_2.matrix[1][0] = -571.0000000294291;
  obj_2.matrix[1][1] = -624.9999999675878;
  obj_2.matrix[1][2] = 658.9999999752287;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_20_norm) {
  cmatrix obj_1;
  cmatrix obj_2;
  int rows = 5;
  int cols = 5;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 89.0;
  obj_1.matrix[0][1] = 15.0;
  obj_1.matrix[0][2] = -73.0;
  obj_1.matrix[0][3] = 84.0;
  obj_1.matrix[0][4] = 48.0;
  obj_1.matrix[1][0] = -48.0;
  obj_1.matrix[1][1] = 98.0;
  obj_1.matrix[1][2] = -37.0;
  obj_1.matrix[1][3] = -15.0;
  obj_1.matrix[1][4] = 75.0;
  obj_1.matrix[2][0] = -65.0;
  obj_1.matrix[2][1] = 9.0;
  obj_1.matrix[2][2] = 65.0;
  obj_1.matrix[2][3] = -39.0;
  obj_1.matrix[2][4] = -23.0;
  obj_1.matrix[3][0] = 98.0;
  obj_1.matrix[3][1] = -76.0;
  obj_1.matrix[3][2] = -36.0;
  obj_1.matrix[3][3] = -80.0;
  obj_1.matrix[3][4] = -98.0;
  obj_1.matrix[4][0] = 28.0;
  obj_1.matrix[4][1] = -89.0;
  obj_1.matrix[4][2] = 84.0;
  obj_1.matrix[4][3] = 20.0;
  obj_1.matrix[4][4] = -54.0;

  obj_2.matrix[0][0] = 89.00000003664061;
  obj_2.matrix[0][1] = 15.000000094637693;
  obj_2.matrix[0][2] = -72.999999904439;
  obj_2.matrix[0][3] = 83.99999997453918;
  obj_2.matrix[0][4] = 48.000000015533104;
  obj_2.matrix[1][0] = -48.00000008941054;
  obj_2.matrix[1][1] = 97.9999999016849;
  obj_2.matrix[1][2] = -37.00000003212506;
  obj_2.matrix[1][3] = -14.999999956040131;
  obj_2.matrix[1][4] = 75.0000000166082;
  obj_2.matrix[2][0] = -65.00000000140128;
  obj_2.matrix[2][1] = 9.000000066562974;
  obj_2.matrix[2][2] = 65.00000008968755;
  obj_2.matrix[2][3] = -38.99999992486857;
  obj_2.matrix[2][4] = -23.00000004317343;
  obj_2.matrix[3][0] = 97.99999996879005;
  obj_2.matrix[3][1] = -76.0000000282288;
  obj_2.matrix[3][2] = -36.00000005955415;
  obj_2.matrix[3][3] = -79.99999996250125;
  obj_2.matrix[3][4] = -98.00000003676463;
  obj_2.matrix[4][0] = 27.99999994109817;
  obj_2.matrix[4][1] = -89.00000003152424;
  obj_2.matrix[4][2] = 84.00000007691321;
  obj_2.matrix[4][3] = 19.999999959039037;
  obj_2.matrix[4][4] = -53.999999912804135;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_21_norm) {
  cmatrix obj_1;
  cmatrix obj_2;
  int rows = 5;
  int cols = 5;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 0.0;
  obj_1.matrix[0][1] = 1.0;
  obj_1.matrix[0][2] = 1.0;
  obj_1.matrix[0][3] = 0.0;
  obj_1.matrix[0][4] = 1.0;
  obj_1.matrix[1][0] = -1.0;
  obj_1.matrix[1][1] = -1.0;
  obj_1.matrix[1][2] = -1.0;
  obj_1.matrix[1][3] = -1.0;
  obj_1.matrix[1][4] = 0.0;
  obj_1.matrix[2][0] = -1.0;
  obj_1.matrix[2][1] = -1.0;
  obj_1.matrix[2][2] = 0.0;
  obj_1.matrix[2][3] = 1.0;
  obj_1.matrix[2][4] = -1.0;
  obj_1.matrix[3][0] = 0.0;
  obj_1.matrix[3][1] = -1.0;
  obj_1.matrix[3][2] = -1.0;
  obj_1.matrix[3][3] = 1.0;
  obj_1.matrix[3][4] = -1.0;
  obj_1.matrix[4][0] = 0.0;
  obj_1.matrix[4][1] = 0.0;
  obj_1.matrix[4][2] = -1.0;
  obj_1.matrix[4][3] = 0.0;
  obj_1.matrix[4][4] = 0.0;

  obj_2.matrix[0][0] = 3.018410239096916e-08;
  obj_2.matrix[0][1] = 1.00000007493629;
  obj_2.matrix[0][2] = 1.0000000433069167;
  obj_2.matrix[0][3] = -9.17621868869887e-08;
  obj_2.matrix[0][4] = 1.0000000438293917;
  obj_2.matrix[1][0] = -1.000000018217474;
  obj_2.matrix[1][1] = -1.000000083388464;
  obj_2.matrix[1][2] = -0.9999999972079685;
  obj_2.matrix[1][3] = -0.9999999058602741;
  obj_2.matrix[1][4] = -1.2304865374555484e-08;
  obj_2.matrix[2][0] = -0.9999999342936077;
  obj_2.matrix[2][1] = -1.0000000257054464;
  obj_2.matrix[2][2] = -8.27796973355895e-08;
  obj_2.matrix[2][3] = 0.9999999038146333;
  obj_2.matrix[2][4] = -1.000000081187636;
  obj_2.matrix[3][0] = -9.633636160900536e-08;
  obj_2.matrix[3][1] = -0.9999999626153269;
  obj_2.matrix[3][2] = -0.9999999028574234;
  obj_2.matrix[3][3] = 0.9999999240293977;
  obj_2.matrix[3][4] = -0.9999999336977742;
  obj_2.matrix[4][0] = 4.161821884740602e-08;
  obj_2.matrix[4][1] = 4.430939140060852e-08;
  obj_2.matrix[4][2] = -0.9999999535764741;
  obj_2.matrix[4][3] = -2.9035838328182373e-08;
  obj_2.matrix[4][4] = 9.478407929020278e-08;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_22_norm) {
  cmatrix obj_1;
  cmatrix obj_2;
  int rows = 5;
  int cols = 2;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 0.0;
  obj_1.matrix[0][1] = -1.0;
  obj_1.matrix[1][0] = 0.0;
  obj_1.matrix[1][1] = -1.0;
  obj_1.matrix[2][0] = 0.0;
  obj_1.matrix[2][1] = 1.0;
  obj_1.matrix[3][0] = 1.0;
  obj_1.matrix[3][1] = 1.0;
  obj_1.matrix[4][0] = 1.0;
  obj_1.matrix[4][1] = 1.0;

  obj_2.matrix[0][0] = -8.021627222955141e-09;
  obj_2.matrix[0][1] = -1.000000065560335;
  obj_2.matrix[1][0] = 8.272703231169782e-08;
  obj_2.matrix[1][1] = -1.0000000642580948;
  obj_2.matrix[2][0] = -5.800126812247424e-08;
  obj_2.matrix[2][1] = 1.0000000761970786;
  obj_2.matrix[3][0] = 1.000000001199033;
  obj_2.matrix[3][1] = 1.000000021719552;
  obj_2.matrix[4][0] = 1.0000000825280435;
  obj_2.matrix[4][1] = 1.0000000483478904;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_23_norm) {
  cmatrix obj_1;
  cmatrix obj_2;
  int rows = 4;
  int cols = 5;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = -42.0;
  obj_1.matrix[0][1] = -6.0;
  obj_1.matrix[0][2] = -66.0;
  obj_1.matrix[0][3] = -4.0;
  obj_1.matrix[0][4] = -96.0;
  obj_1.matrix[1][0] = -14.0;
  obj_1.matrix[1][1] = 40.0;
  obj_1.matrix[1][2] = 56.0;
  obj_1.matrix[1][3] = 92.0;
  obj_1.matrix[1][4] = -7.0;
  obj_1.matrix[2][0] = 33.0;
  obj_1.matrix[2][1] = 64.0;
  obj_1.matrix[2][2] = -91.0;
  obj_1.matrix[2][3] = -34.0;
  obj_1.matrix[2][4] = 55.0;
  obj_1.matrix[3][0] = -79.0;
  obj_1.matrix[3][1] = 51.0;
  obj_1.matrix[3][2] = -75.0;
  obj_1.matrix[3][3] = -26.0;
  obj_1.matrix[3][4] = -3.0;

  obj_2.matrix[0][0] = -42.00000000025071;
  obj_2.matrix[0][1] = -6.0000000467236045;
  obj_2.matrix[0][2] = -66.00000000847012;
  obj_2.matrix[0][3] = -3.9999999180681494;
  obj_2.matrix[0][4] = -96.00000005425697;
  obj_2.matrix[1][0] = -13.999999960174542;
  obj_2.matrix[1][1] = 39.99999991655606;
  obj_2.matrix[1][2] = 55.99999994462708;
  obj_2.matrix[1][3] = 92.00000002015003;
  obj_2.matrix[1][4] = -6.99999997591102;
  obj_2.matrix[2][0] = 32.99999999683639;
  obj_2.matrix[2][1] = 63.99999995102012;
  obj_2.matrix[2][2] = -91.00000000732605;
  obj_2.matrix[2][3] = -33.999999952088494;
  obj_2.matrix[2][4] = 55.000000087920355;
  obj_2.matrix[3][0] = -79.00000004131194;
  obj_2.matrix[3][1] = 51.00000002282117;
  obj_2.matrix[3][2] = -74.99999992879957;
  obj_2.matrix[3][3] = -26.00000004169098;
  obj_2.matrix[3][4] = -3.0000000387943504;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, SUCCESS);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

START_TEST(test_24_norm) {
  cmatrix obj_1;
  cmatrix obj_2;
  int rows = 4;
  int cols = 5;

  int status = cmatrix_create(rows, cols, &obj_1);
  ck_assert_int_eq(status, OK);
  status = cmatrix_create(rows, cols, &obj_2);
  ck_assert_int_eq(status, OK);

  obj_1.matrix[0][0] = 26.0;
  obj_1.matrix[0][1] = 777.0;

  obj_2.matrix[0][0] = -42.00000000025071;
  obj_2.matrix[0][1] = -6.0000000467236045;

  status = cmatrix_eq(&obj_1, &obj_2);
  ck_assert_int_eq(status, FAILURE);

  cmatrix_remove(&obj_1);
  cmatrix_remove(&obj_2);
}
END_TEST

Suite* test_equal() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("equal_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_norm);
  tcase_add_test(t, test_3_norm);
  tcase_add_test(t, test_4_null);
  tcase_add_test(t, test_5_null);
  tcase_add_test(t, test_6_invalid);
  tcase_add_test(t, test_7_invalid);
  tcase_add_test(t, test_8_invalid);
  tcase_add_test(t, test_9_invalid);
  tcase_add_test(t, test_10_invalid);
  tcase_add_test(t, test_11_invalid);
  tcase_add_test(t, test_12_invalid);
  tcase_add_test(t, test_13_invalid);
  tcase_add_test(t, test_14_not_eq);
  tcase_add_test(t, test_15_not_eq);
  tcase_add_test(t, test_16_not_eq);
  tcase_add_test(t, test_17_not_eq);
  tcase_add_test(t, test_18_norm);
  tcase_add_test(t, test_19_norm);
  tcase_add_test(t, test_20_norm);
  tcase_add_test(t, test_21_norm);
  tcase_add_test(t, test_22_norm);
  tcase_add_test(t, test_23_norm);
  tcase_add_test(t, test_24_norm);

  suite_add_tcase(s, t);
  return s;
}
