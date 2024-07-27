#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m INVERSE \033[0m"

START_TEST(test_1_norm) {
  cmatrix obj = {0};
  cmatrix res = {0};
  cmatrix exp = {0};

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 2;
  obj.matrix[0][1] = 5;
  obj.matrix[0][2] = 7;
  obj.matrix[1][0] = 6;
  obj.matrix[1][1] = 3;
  obj.matrix[1][2] = 4;
  obj.matrix[2][0] = 5;
  obj.matrix[2][1] = -2;
  obj.matrix[2][2] = -3;

  exp.matrix[0][0] = 1;
  exp.matrix[0][1] = -1;
  exp.matrix[0][2] = 1;
  exp.matrix[1][0] = -38;
  exp.matrix[1][1] = 41;
  exp.matrix[1][2] = -34;
  exp.matrix[2][0] = 27;
  exp.matrix[2][1] = -29;
  exp.matrix[2][2] = 24;

  status = cmatrix_inverse(&obj, &res);

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

  status = cmatrix_inverse(NULL, &res);

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

  status = cmatrix_inverse(&obj, NULL);

  ck_assert_int_eq(status, ERROR);

  cmatrix_remove(&obj);
}
END_TEST

START_TEST(test_4_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_inverse(&obj, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_5_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &obj);

  status = cmatrix_inverse(&obj, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_6_invalid) {
  cmatrix obj = {0};
  cmatrix res = {0};

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

  status = cmatrix_inverse(&obj, &res);

  ck_assert_int_eq(status, CALC_ERROR);

  cmatrix_remove(&obj);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_7_norm) {
  cmatrix obj;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &obj);
  cmatrix_create(rows, cols, &exp);

  obj.matrix[0][0] = 2;
  obj.matrix[0][1] = 5;
  obj.matrix[0][2] = 7;
  obj.matrix[1][0] = 6;
  obj.matrix[1][1] = 3;
  obj.matrix[1][2] = 4;
  obj.matrix[2][0] = 5;
  obj.matrix[2][1] = -2;
  obj.matrix[2][2] = -3;

  exp.matrix[0][0] = 1;
  exp.matrix[0][1] = -1;
  exp.matrix[0][2] = 1;
  exp.matrix[1][0] = -38;
  exp.matrix[1][1] = 41;
  exp.matrix[1][2] = -34;
  exp.matrix[2][0] = 27;
  exp.matrix[2][1] = -29;
  exp.matrix[2][2] = 24;

  status = cmatrix_inverse(&obj, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&obj);
  cmatrix_remove(&exp);
  cmatrix_remove(&res);
}
END_TEST

START_TEST(test_8_norm) {
  int rows1 = 3, cols1 = 3;
  cmatrix A, result;

  cmatrix_create(rows1, cols1, &A);

  A.matrix[0][0] = 766.0;
  A.matrix[0][1] = 240.0;
  A.matrix[0][2] = -476.0;
  A.matrix[1][0] = 645.0;
  A.matrix[1][1] = -513.0;
  A.matrix[1][2] = 815.0;
  A.matrix[2][0] = -243.0;
  A.matrix[2][1] = 616.0;
  A.matrix[2][2] = -416.0;

  int status = cmatrix_inverse(&A, &result);
  ck_assert_int_eq(status, OK);

  ck_assert_double_eq_tol(result.matrix[0][0], 0.0008641345, EPS);
  ck_assert_double_eq_tol(result.matrix[0][1], 0.000578947962788534, EPS);
  ck_assert_double_eq_tol(result.matrix[0][2], 0.00014546750173738873, EPS);
  ck_assert_double_eq_tol(result.matrix[1][0], -0.0002103961612866347, EPS);
  ck_assert_double_eq_tol(result.matrix[1][1], 0.0013003216272451977, EPS);
  ck_assert_double_eq_tol(result.matrix[1][2], 0.002788246872541524, EPS);
  ck_assert_double_eq_tol(result.matrix[2][0], -0.0008163191424059061, EPS);
  ck_assert_double_eq_tol(result.matrix[2][1], 0.0015872927101572784, EPS);
  ck_assert_double_eq_tol(result.matrix[2][2], 0.001639931419623541, EPS);

  cmatrix_remove(&A);
  cmatrix_remove(&result);
}
END_TEST

START_TEST(test_9_norm) {
  int rows1 = 5, cols1 = 5;
  cmatrix A = {0}, result = {0};
  cmatrix_create(rows1, cols1, &A);
  A.matrix[0][0] = -910.0;
  A.matrix[0][1] = -557.0;
  A.matrix[0][2] = 112.0;
  A.matrix[0][3] = -865.0;
  A.matrix[0][4] = -876.0;
  A.matrix[1][0] = -6.0;
  A.matrix[1][1] = 470.0;
  A.matrix[1][2] = -21.0;
  A.matrix[1][3] = 619.0;
  A.matrix[1][4] = -687.0;
  A.matrix[2][0] = 217.0;
  A.matrix[2][1] = -885.0;
  A.matrix[2][2] = 759.0;
  A.matrix[2][3] = 830.0;
  A.matrix[2][4] = 852.0;
  A.matrix[3][0] = 337.0;
  A.matrix[3][1] = -300.0;
  A.matrix[3][2] = -515.0;
  A.matrix[3][3] = -423.0;
  A.matrix[3][4] = 186.0;
  A.matrix[4][0] = 639.0;
  A.matrix[4][1] = 318.0;
  A.matrix[4][2] = 65.0;
  A.matrix[4][3] = 82.0;
  A.matrix[4][4] = -49.0;
  int status = cmatrix_inverse(&A, &result);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(result.matrix[0][0], 0.00019350613989249304, EPS);
  ck_assert_double_eq_tol(result.matrix[0][1], 0.0001411592845602524, EPS);
  ck_assert_double_eq_tol(result.matrix[0][2], 0.0002631302868267338, EPS);
  ck_assert_double_eq_tol(result.matrix[0][3], 0.0006050388068648478, EPS);
  ck_assert_double_eq_tol(result.matrix[0][4], 0.0014333962329494139, EPS);
  ck_assert_double_eq_tol(result.matrix[1][0], -0.0004966177070684136, EPS);
  ck_assert_double_eq_tol(result.matrix[1][1], -0.0005269671888727825, EPS);
  ck_assert_double_eq_tol(result.matrix[1][2], -0.0006912626240476625, EPS);
  ck_assert_double_eq_tol(result.matrix[1][3], -0.0010928055572588776, EPS);
  ck_assert_double_eq_tol(result.matrix[1][4], 9.889756752596478e-05, EPS);
  ck_assert_double_eq_tol(result.matrix[2][0], 0.0004489502427905742, EPS);
  ck_assert_double_eq_tol(result.matrix[2][1], -0.0007445787791843059, EPS);
  ck_assert_double_eq_tol(result.matrix[2][2], 0.0002230442393125384, EPS);
  ck_assert_double_eq_tol(result.matrix[2][3], -0.0013264832762574213, EPS);
  ck_assert_double_eq_tol(result.matrix[2][4], 0.0012561839005199482, EPS);
  ck_assert_double_eq_tol(result.matrix[3][0], -0.00032525463861768675, EPS);
  ck_assert_double_eq_tol(result.matrix[3][1], 0.0009996638017220041, EPS);
  ck_assert_double_eq_tol(result.matrix[3][2], 0.00035835614565125673, EPS);
  ck_assert_double_eq_tol(result.matrix[3][3], 0.000322536881504121, EPS);
  ck_assert_double_eq_tol(result.matrix[3][4], -0.0007456055571282856, EPS);
  ck_assert_double_eq_tol(result.matrix[4][0], -0.0006482269804431723, EPS);
  ck_assert_double_eq_tol(result.matrix[4][1], -0.0008938769823126321, EPS);
  ck_assert_double_eq_tol(result.matrix[4][2], -0.00015914656461542517, EPS);
  ck_assert_double_eq_tol(result.matrix[4][3], -0.00042175016928734313, EPS);
  ck_assert_double_eq_tol(result.matrix[4][4], -0.0006550629147508305, EPS);
  cmatrix_remove(&A);
  cmatrix_remove(&result);
}
END_TEST

START_TEST(test_10_norm) {
  int rows1 = 5, cols1 = 5;
  cmatrix A = {0}, result = {0};
  cmatrix_create(rows1, cols1, &A);

  A.matrix[0][0] = -12.0;
  A.matrix[0][1] = 62.0;
  A.matrix[0][2] = 6.0;
  A.matrix[0][3] = 22.0;
  A.matrix[0][4] = 56.0;
  A.matrix[1][0] = -63.0;
  A.matrix[1][1] = -81.0;
  A.matrix[1][2] = 18.0;
  A.matrix[1][3] = 56.0;
  A.matrix[1][4] = -92.0;
  A.matrix[2][0] = 1.0;
  A.matrix[2][1] = 45.0;
  A.matrix[2][2] = -35.0;
  A.matrix[2][3] = 22.0;
  A.matrix[2][4] = -53.0;
  A.matrix[3][0] = 44.0;
  A.matrix[3][1] = 17.0;
  A.matrix[3][2] = 90.0;
  A.matrix[3][3] = -16.0;
  A.matrix[3][4] = -49.0;
  A.matrix[4][0] = 100.0;
  A.matrix[4][1] = -10.0;
  A.matrix[4][2] = 2.0;
  A.matrix[4][3] = -53.0;
  A.matrix[4][4] = 50.0;

  int status = cmatrix_inverse(&A, &result);
  ck_assert_int_eq(status, OK);

  ck_assert_double_eq_tol(result.matrix[0][0], 0.008521704629175248, EPS);
  ck_assert_double_eq_tol(result.matrix[0][1], 0.009167665441345825, EPS);
  ck_assert_double_eq_tol(result.matrix[0][2], 0.00826376866944917, EPS);
  ck_assert_double_eq_tol(result.matrix[0][3], 0.00044493385904102083, EPS);
  ck_assert_double_eq_tol(result.matrix[0][4], 0.01651982519887636, EPS);
  ck_assert_double_eq_tol(result.matrix[1][0], 0.001360118173368697, EPS);
  ck_assert_double_eq_tol(result.matrix[1][1], -0.007067456274437373, EPS);
  ck_assert_double_eq_tol(result.matrix[1][2], 0.005039659348831998, EPS);
  ck_assert_double_eq_tol(result.matrix[1][3], 0.003412488115349414, EPS);
  ck_assert_double_eq_tol(result.matrix[1][4], -0.005841174636333363, EPS);
  ck_assert_double_eq_tol(result.matrix[2][0], 0.004357896382673963, EPS);
  ck_assert_double_eq_tol(result.matrix[2][1], 0.0013708103111181222, EPS);
  ck_assert_double_eq_tol(result.matrix[2][2], -0.00696225080889106, EPS);
  ck_assert_double_eq_tol(result.matrix[2][3], 0.007883605213786072, EPS);
  ck_assert_double_eq_tol(result.matrix[2][4], -0.0020126057240516682, EPS);
  ck_assert_double_eq_tol(result.matrix[3][0], 0.02385379834474297, EPS);
  ck_assert_double_eq_tol(result.matrix[3][1], 0.02026762619525435, EPS);
  ck_assert_double_eq_tol(result.matrix[3][2], 0.008382280158783494, EPS);
  ck_assert_double_eq_tol(result.matrix[3][3], -0.0027564489568132513, EPS);
  ck_assert_double_eq_tol(result.matrix[3][4], 0.01676007504378939, EPS);
  ck_assert_double_eq_tol(result.matrix[4][0], 0.008339324766443832, EPS);
  ck_assert_double_eq_tol(result.matrix[4][1], 0.0016800292169457617, EPS);
  ck_assert_double_eq_tol(result.matrix[4][2], -0.006355898468465792, EPS);
  ck_assert_double_eq_tol(result.matrix[4][3], -0.003444550197785648, EPS);
  ck_assert_double_eq_tol(result.matrix[4][4], 0.003638298450359432, EPS);

  cmatrix_remove(&A);
  cmatrix_remove(&result);
}
END_TEST

START_TEST(test_11_norm) {
  int rows1 = 2, cols1 = 2;
  cmatrix A = {0}, result = {0};
  cmatrix_create(rows1, cols1, &A);

  A.matrix[0][0] = -374.0;
  A.matrix[0][1] = 466.0;
  A.matrix[1][0] = 582.0;
  A.matrix[1][1] = -919.0;

  int status = cmatrix_inverse(&A, &result);
  ck_assert_int_eq(status, OK);

  ck_assert_double_eq_tol(result.matrix[0][0], -0.01267691119265044, EPS);
  ck_assert_double_eq_tol(result.matrix[0][1], -0.006428118189091518, EPS);
  ck_assert_double_eq_tol(result.matrix[1][0], -0.008028250613843912, EPS);
  ck_assert_double_eq_tol(result.matrix[1][1], -0.005159047645322376, EPS);

  cmatrix_remove(&A);
  cmatrix_remove(&result);
}
END_TEST

START_TEST(test_12_norm) {
  int rows1 = 5, cols1 = 5;
  cmatrix A = {0}, result = {0};
  cmatrix_create(rows1, cols1, &A);

  A.matrix[0][0] = 2.0;
  A.matrix[0][1] = 10.0;
  A.matrix[0][2] = -10.0;
  A.matrix[0][3] = -7.0;
  A.matrix[0][4] = -7.0;
  A.matrix[1][0] = -7.0;
  A.matrix[1][1] = -4.0;
  A.matrix[1][2] = -4.0;
  A.matrix[1][3] = -6.0;
  A.matrix[1][4] = -1.0;
  A.matrix[2][0] = 10.0;
  A.matrix[2][1] = 8.0;
  A.matrix[2][2] = -8.0;
  A.matrix[2][3] = 9.0;
  A.matrix[2][4] = 1.0;
  A.matrix[3][0] = -7.0;
  A.matrix[3][1] = -4.0;
  A.matrix[3][2] = 1.0;
  A.matrix[3][3] = -7.0;
  A.matrix[3][4] = -5.0;
  A.matrix[4][0] = 9.0;
  A.matrix[4][1] = -9.0;
  A.matrix[4][2] = 10.0;
  A.matrix[4][3] = -2.0;
  A.matrix[4][4] = 7.0;

  int status = cmatrix_inverse(&A, &result);
  ck_assert_int_eq(status, OK);

  ck_assert_double_eq_tol(result.matrix[0][0], 0.01944743803272263, EPS);
  ck_assert_double_eq_tol(result.matrix[0][1], -0.023807191143333007, EPS);
  ck_assert_double_eq_tol(result.matrix[0][2], 0.08019006564122662, EPS);
  ck_assert_double_eq_tol(result.matrix[0][3], 0.0853335945919467, EPS);
  ck_assert_double_eq_tol(result.matrix[0][4], 0.06554325462917608, EPS);
  ck_assert_double_eq_tol(result.matrix[1][0], 0.06965807778975214, EPS);
  ck_assert_double_eq_tol(result.matrix[1][1], -0.06260409522876456, EPS);
  ck_assert_double_eq_tol(result.matrix[1][2], -0.14098167923973745, EPS);
  ck_assert_double_eq_tol(result.matrix[1][3], -0.1830116586656216, EPS);
  ck_assert_double_eq_tol(result.matrix[1][4], -0.04986773782698149, EPS);
  ck_assert_double_eq_tol(result.matrix[2][0], 0.008180660331145293, EPS);
  ck_assert_double_eq_tol(result.matrix[2][1], -0.11916658502335, EPS);
  ck_assert_double_eq_tol(result.matrix[2][2], -0.08969334770255707, EPS);
  ck_assert_double_eq_tol(result.matrix[2][3], -0.018679990855948535, EPS);
  ck_assert_double_eq_tol(result.matrix[2][4], -0.009372652754645508, EPS);
  ck_assert_double_eq_tol(result.matrix[3][0], -0.07960223376114431, EPS);
  ck_assert_double_eq_tol(result.matrix[3][1], -0.03605368864504752, EPS);
  ck_assert_double_eq_tol(result.matrix[3][2], 0.08234544920152836, EPS);
  ck_assert_double_eq_tol(result.matrix[3][3], 0.08396198687175466, EPS);
  ck_assert_double_eq_tol(result.matrix[3][4], -0.03654354854511611, EPS);
  ck_assert_double_eq_tol(result.matrix[4][0], 0.030126383854217696, EPS);
  ck_assert_double_eq_tol(result.matrix[4][1], 0.1100551908820744, EPS);
  ck_assert_double_eq_tol(result.matrix[4][2], -0.13270304692857846, EPS);
  ck_assert_double_eq_tol(result.matrix[4][3], -0.2943404852878743, EPS);
  ck_assert_double_eq_tol(result.matrix[4][4], -0.002579928807027859, EPS);

  cmatrix_remove(&A);
  cmatrix_remove(&result);
}
END_TEST

START_TEST(test_13_norm) {
  int rows1 = 5, cols1 = 5;
  cmatrix A = {0}, result = {0};
  cmatrix_create(rows1, cols1, &A);

  A.matrix[0][0] = 456.0;
  A.matrix[0][1] = 798.0;
  A.matrix[0][2] = -989.0;
  A.matrix[0][3] = -399.0;
  A.matrix[0][4] = 71.0;
  A.matrix[1][0] = 709.0;
  A.matrix[1][1] = -812.0;
  A.matrix[1][2] = -39.0;
  A.matrix[1][3] = 567.0;
  A.matrix[1][4] = 439.0;
  A.matrix[2][0] = -34.0;
  A.matrix[2][1] = 457.0;
  A.matrix[2][2] = 762.0;
  A.matrix[2][3] = -750.0;
  A.matrix[2][4] = -598.0;
  A.matrix[3][0] = -969.0;
  A.matrix[3][1] = 722.0;
  A.matrix[3][2] = 289.0;
  A.matrix[3][3] = -867.0;
  A.matrix[3][4] = 346.0;
  A.matrix[4][0] = 663.0;
  A.matrix[4][1] = -774.0;
  A.matrix[4][2] = 674.0;
  A.matrix[4][3] = 883.0;
  A.matrix[4][4] = -245.0;

  int status = cmatrix_inverse(&A, &result);
  ck_assert_int_eq(status, OK);

  ck_assert_double_eq_tol(result.matrix[0][0], 0.0007583461364238186, EPS);
  ck_assert_double_eq_tol(result.matrix[0][1], 0.0007259756963678526, EPS);
  ck_assert_double_eq_tol(result.matrix[0][2], 0.0005223280767558048, EPS);
  ck_assert_double_eq_tol(result.matrix[0][3], 0.0001730335772956844, EPS);
  ck_assert_double_eq_tol(result.matrix[0][4], 0.0004900544254527106, EPS);
  ck_assert_double_eq_tol(result.matrix[1][0], 0.001378511422098663, EPS);
  ck_assert_double_eq_tol(result.matrix[1][1], -0.0009852492454638898, EPS);
  ck_assert_double_eq_tol(result.matrix[1][2], -0.0006175323100391719, EPS);
  ck_assert_double_eq_tol(result.matrix[1][3], 0.0013701890423531305, EPS);
  ck_assert_double_eq_tol(result.matrix[1][4], 0.0020764066215018997, EPS);
  ck_assert_double_eq_tol(result.matrix[2][0], 0.0002462938735654122, EPS);
  ck_assert_double_eq_tol(result.matrix[2][1], 0.0001043064979764259, EPS);
  ck_assert_double_eq_tol(result.matrix[2][2], 0.00019649050621145238, EPS);
  ck_assert_double_eq_tol(result.matrix[2][3], 0.001005032696536952, EPS);
  ck_assert_double_eq_tol(result.matrix[2][4], 0.0011980302364168658, EPS);
  ck_assert_double_eq_tol(result.matrix[3][0], 0.0006070965568700898, EPS);
  ck_assert_double_eq_tol(result.matrix[3][1], -0.0012402412021589196, EPS);
  ck_assert_double_eq_tol(result.matrix[3][2], -0.0011996921025869726, EPS);
  ck_assert_double_eq_tol(result.matrix[3][3], 0.0007026181906962917, EPS);
  ck_assert_double_eq_tol(result.matrix[3][4], 0.0018741213841548454, EPS);
  ck_assert_double_eq_tol(result.matrix[4][0], 0.0005627917479347087, EPS);
  ck_assert_double_eq_tol(result.matrix[4][1], 0.0008941812277988655, EPS);
  ck_assert_double_eq_tol(result.matrix[4][2], -0.00041885715321779735, EPS);
  ck_assert_double_eq_tol(result.matrix[4][3], 0.0014367299706793746, EPS);
  ck_assert_double_eq_tol(result.matrix[4][4], 0.0007350568187198888, EPS);

  cmatrix_remove(&A);
  cmatrix_remove(&result);
}
END_TEST

Suite* test_inverse() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("inverse_tc");

  tcase_add_test(t, test_1_norm);
  tcase_add_test(t, test_2_invalid);
  tcase_add_test(t, test_3_invalid);
  tcase_add_test(t, test_4_invalid);
  tcase_add_test(t, test_5_invalid);
  tcase_add_test(t, test_6_invalid);
  tcase_add_test(t, test_7_norm);
  tcase_add_test(t, test_8_norm);
  tcase_add_test(t, test_9_norm);
  tcase_add_test(t, test_10_norm);
  tcase_add_test(t, test_11_norm);
  tcase_add_test(t, test_12_norm);
  tcase_add_test(t, test_13_norm);

  suite_add_tcase(s, t);
  return s;
}
