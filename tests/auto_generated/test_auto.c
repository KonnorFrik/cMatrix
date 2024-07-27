#include "../test_all_matrix.h"
#define NAME "\033[38;5;45m AUTO GENERATED \033[0m"

START_TEST(test_auto_10) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 909.4632434268781;
  val1.matrix[1][0] = 1222.837236468491;
  val1.matrix[2][0] = 1055.437001111395;

  val2.matrix[0][0] = 884.1470418177702;
  val2.matrix[0][1] = 1039.8974305855875;
  val2.matrix[0][2] = 1102.1768310505643;

  exp.matrix[0][0] = 804099.2363178688;
  exp.matrix[0][1] = 945748.4900516452;
  exp.matrix[0][2] = 1002389.3155972044;
  exp.matrix[1][0] = 1081167.9252482334;
  exp.matrix[1][1] = 1271625.3002279643;
  exp.matrix[1][2] = 1347782.8701814709;
  exp.matrix[2][0] = 933161.5023576585;
  exp.matrix[2][1] = 1097546.2256006973;
  exp.matrix[2][2] = 1163278.2092584681;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_11) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 948.618192144978;
  val1.matrix[1][0] = 1048.79852021448;

  val2.matrix[0][0] = 932.3400064224659;
  val2.matrix[0][1] = 866.4812672477003;

  exp.matrix[0][0] = 884434.6913569168;
  exp.matrix[0][1] = 821959.893264003;
  exp.matrix[1][0] = 977836.8190726411;
  exp.matrix[1][1] = 908764.2708829555;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_12) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1026.487403149576;
  val1.matrix[0][1] = 974.4255151814244;
  val1.matrix[0][2] = 891.4292784863436;
  val1.matrix[1][0] = 848.6706381459223;
  val1.matrix[1][1] = 927.9832137264971;
  val1.matrix[1][2] = 1111.525633846328;

  val2.matrix[0][0] = 928.7093111323009;
  val2.matrix[0][1] = 1031.4763644627412;
  val2.matrix[1][0] = 956.3007905828404;
  val2.matrix[1][1] = 953.8065533065715;
  val2.matrix[2][0] = 1179.2737226850743;
  val2.matrix[2][1] = 980.9480874823518;

  exp.matrix[0][0] = 2936391.423348175;
  exp.matrix[0][1] = 2862656.782713651;
  exp.matrix[1][0] = 2986392.3767508096;
  exp.matrix[1][1] = 2850849.1197810206;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_13) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1083.0004644289647;
  val1.matrix[0][1] = 994.1911949743351;
  val1.matrix[1][0] = 1086.4417170316958;
  val1.matrix[1][1] = 943.2393078030252;
  val1.matrix[2][0] = 1131.2728149846762;
  val1.matrix[2][1] = 986.2660239034667;

  val2.matrix[0][0] = 948.0357149747423;
  val2.matrix[0][1] = 956.8056953125159;
  val2.matrix[0][2] = 851.2829105485602;
  val2.matrix[1][0] = 1005.2640196572871;
  val2.matrix[1][1] = 912.6952903831129;
  val2.matrix[1][2] = 1050.5730111613723;

  exp.matrix[0][0] = 2026147.7565806734;
  exp.matrix[0][1] = 1943614.633785168;
  exp.matrix[0][2] = 1966410.2248588416;
  exp.matrix[1][0] = 1978190.0880453566;
  exp.matrix[1][1] = 1900403.696417084;
  exp.matrix[1][2] = 1915811.02686051;
  exp.matrix[2][0] = 2063944.779626096;
  exp.matrix[2][1] = 1982568.627411133;
  exp.matrix[2][2] = 1999177.681103037;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_14) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 931.2195297473584;
  val1.matrix[0][1] = 937.8286468570144;
  val1.matrix[1][0] = 1116.2098149259664;
  val1.matrix[1][1] = 1102.1331254310476;
  val1.matrix[2][0] = 879.8392648392864;
  val1.matrix[2][1] = 753.5127597546832;

  val2.matrix[0][0] = 1052.6472708288684;
  val2.matrix[0][1] = 958.2967019304593;
  val2.matrix[0][2] = 1013.4261664628532;
  val2.matrix[1][0] = 945.4975693519118;
  val2.matrix[1][1] = 1105.7498454025244;
  val2.matrix[1][2] = 937.0329568834685;

  exp.matrix[0][0] = 1866960.4026029985;
  exp.matrix[0][1] = 1929388.4854063292;
  exp.matrix[0][2] = 1822498.5881816568;
  exp.matrix[1][0] = 2217039.406551496;
  exp.matrix[1][1] = 2288343.717364344;
  exp.matrix[1][2] = 2163931.295110506;
  exp.matrix[2][0] = 1638604.883724857;
  exp.matrix[2][1] = 1676343.6833319787;
  exp.matrix[2][2] = 1597718.4225919265;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_15) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 948.4431791284403;
  val1.matrix[0][1] = 1167.2500417785022;
  val1.matrix[1][0] = 1080.9097471042708;
  val1.matrix[1][1] = 954.0100371389079;

  val2.matrix[0][0] = 945.4287165838416;
  val2.matrix[0][1] = 874.2484340635815;
  val2.matrix[1][0] = 1071.76342432691;
  val2.matrix[1][1] = 1124.082243536453;

  exp.matrix[0][0] = 2147701.3194183563;
  exp.matrix[0][1] = 2141260.0098817213;
  exp.matrix[1][0] = 2044396.179193994;
  exp.matrix[1][1] = 2017369.3966733692;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_16) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1020.2779721041975;
  val1.matrix[1][0] = 881.6077583068029;
  val1.matrix[2][0] = 861.0662810997856;

  val2.matrix[0][0] = 904.2025341344195;
  val2.matrix[0][1] = 1022.4706333356138;
  val2.matrix[0][2] = 1070.0328168559006;

  exp.matrix[0][0] = 922537.9278981419;
  exp.matrix[0][1] = 1043204.2643157545;
  exp.matrix[0][2] = 1091730.9124666804;
  exp.matrix[1][0] = 797151.969173576;
  exp.matrix[1][1] = 901418.0429895475;
  exp.matrix[1][2] = 943349.2329830443;
  exp.matrix[2][0] = 778578.3134281265;
  exp.matrix[2][1] = 880414.9857800395;
  exp.matrix[2][2] = 921369.1782648383;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_17) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1066.3016857005878;
  val1.matrix[0][1] = 1119.409196224845;
  val1.matrix[1][0] = 1041.300942191966;
  val1.matrix[1][1] = 920.4236785139356;
  val1.matrix[2][0] = 1058.8161065035256;
  val1.matrix[2][1] = 1005.2115479014227;

  val2.matrix[0][0] = 772.7751107655022;
  val2.matrix[0][1] = 910.4339491999477;
  val2.matrix[0][2] = 1144.8350611007224;
  val2.matrix[1][0] = 852.7099372572693;
  val2.matrix[1][1] = 951.484980729488;
  val2.matrix[1][2] = 1146.212950902519;

  exp.matrix[0][0] = 1778542.7487548112;
  exp.matrix[0][1] = 2035898.2922493557;
  exp.matrix[0][2] = 2503820.873573132;
  exp.matrix[1][0] = 1589545.8680983414;
  exp.matrix[1][1] = 1823805.0351192546;
  exp.matrix[1][2] = 2247119.3684085887;
  exp.matrix[2][0] = 1675380.6099248645;
  exp.matrix[2][1] = 1920425.8196045612;
  exp.matrix[2][2] = 2364356.2965847715;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_18) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 909.7924688446454;
  val1.matrix[0][1] = 1056.741529006581;
  val1.matrix[0][2] = 1018.5855347445191;
  val1.matrix[1][0] = 1008.0841839245547;
  val1.matrix[1][1] = 985.3616370387005;
  val1.matrix[1][2] = 1109.391783700696;
  val1.matrix[2][0] = 908.939209979492;
  val1.matrix[2][1] = 894.8272990099221;
  val1.matrix[2][2] = 1038.3883445860067;

  val2.matrix[0][0] = 1096.1331717791554;
  val2.matrix[0][1] = 1096.993350085179;
  val2.matrix[0][2] = 947.4216789797856;
  val2.matrix[1][0] = 890.5704172687877;
  val2.matrix[1][1] = 937.2788322420045;
  val2.matrix[1][2] = 922.5784920017508;
  val2.matrix[2][0] = 862.1594143514328;
  val2.matrix[2][1] = 1059.7644965444042;
  val2.matrix[2][2] = 887.5597195763686;

  exp.matrix[0][0] = 2816539.5570702925;
  exp.matrix[0][1] = 3067958.54098501;
  exp.matrix[0][2] = 2740939.606204865;
  exp.matrix[1][0] = 2939001.0087255184;
  exp.matrix[1][1] = 3205114.2757150508;
  exp.matrix[1][2] = 2848805.7237040265;
  exp.matrix[2][0] = 2688481.427289654;
  exp.matrix[2][1] = 2936250.056071232;
  exp.matrix[2][2] = 2608328.8004640294;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_19) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1041.7718513782654;
  val1.matrix[0][1] = 936.3828227145045;
  val1.matrix[1][0] = 1055.8183188557298;
  val1.matrix[1][1] = 1035.435830952682;
  val1.matrix[2][0] = 1183.8481515216185;
  val1.matrix[2][1] = 996.0391130192908;

  val2.matrix[0][0] = 1029.6914094414747;
  val2.matrix[0][1] = 968.6705186835511;
  val2.matrix[0][2] = 903.8063047932928;
  val2.matrix[1][0] = 1003.9752332454583;
  val2.matrix[1][1] = 1017.0627028366882;
  val2.matrix[1][2] = 778.0318448765056;

  exp.matrix[0][0] = 2012808.688803976;
  exp.matrix[0][1] = 1961493.7241843692;
  exp.matrix[0][2] = 1670095.6224990934;
  exp.matrix[1][0] = 2126718.9827481085;
  exp.matrix[1][1] = 2075843.2434042615;
  exp.matrix[1][2] = 1759857.3031054165;
  exp.matrix[2][0] = 2218996.8725201217;
  exp.matrix[2][1] = 2159793.0353954667;
  exp.matrix[2][2] = 1844919.5719346812;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_20) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1105.470324253643;

  val2.matrix[0][0] = 1068.5746693269068;

  exp.matrix[0][0] = 1181277.5861900449;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_21) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1014.4517819381543;
  val1.matrix[0][1] = 989.8610705707516;
  val1.matrix[0][2] = 1090.3881294220957;

  val2.matrix[0][0] = 983.2340125399273;
  val2.matrix[1][0] = 997.2038920641638;
  val2.matrix[2][0] = 1036.5509236339456;

  exp.matrix[0][0] = 3114779.630931248;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_22) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1048.134155239431;
  val1.matrix[0][1] = 801.6199853676826;
  val1.matrix[1][0] = 910.5093724009818;
  val1.matrix[1][1] = 974.0459908969441;
  val1.matrix[2][0] = 764.2057351446582;
  val1.matrix[2][1] = 965.56013422519;

  val2.matrix[0][0] = 1023.7905064237808;
  val2.matrix[0][1] = 1096.5710058663374;
  val2.matrix[0][2] = 1136.4462268467082;
  val2.matrix[1][0] = 1007.248879100703;
  val2.matrix[1][1] = 973.8478870522333;
  val2.matrix[1][2] = 759.4991328096769;

  exp.matrix[0][0] = 1880500.629318959;
  exp.matrix[0][1] = 1930009.4538629267;
  exp.matrix[0][2] = 1799977.7896806742;
  exp.matrix[1][0] = 1913277.5839974803;
  exp.matrix[1][1] = 1947010.80847116;
  exp.matrix[1][2] = 1774532.0261766315;
  exp.matrix[2][0] = 1754945.9394983542;
  exp.matrix[2][1] = 1778314.5482134738;
  exp.matrix[2][2] = 1601820.8088593888;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_23) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1117.130266883845;
  val1.matrix[0][1] = 1099.726967739242;
  val1.matrix[1][0] = 1004.2076052479447;
  val1.matrix[1][1] = 1181.178049673057;
  val1.matrix[2][0] = 1002.5644542458002;
  val1.matrix[2][1] = 1020.1557366274233;

  val2.matrix[0][0] = 951.4619424497861;
  val2.matrix[0][1] = 1107.9917725459168;
  val2.matrix[0][2] = 923.4468398741456;
  val2.matrix[1][0] = 1085.027839934894;
  val2.matrix[1][1] = 998.4636711970866;
  val2.matrix[1][2] = 982.1612874335631;

  exp.matrix[0][0] = 2256141.3100230116;
  exp.matrix[0][1] = 2335808.570092688;
  exp.matrix[0][2] = 2111719.66914183;
  exp.matrix[1][0] = 2237076.3865273255;
  exp.matrix[1][1] = 2292017.1363567356;
  exp.matrix[1][2] = 2087439.6935989528;
  exp.matrix[2][0] = 2060799.2983778624;
  exp.matrix[2][1] = 2129421.608737119;
  exp.matrix[2][2] = 1927772.4487121566;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_24) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1000.8014986062805;
  val1.matrix[0][1] = 1059.640733230182;
  val1.matrix[1][0] = 1024.178532405693;
  val1.matrix[1][1] = 983.9114603309464;
  val1.matrix[2][0] = 1199.324349271569;
  val1.matrix[2][1] = 931.9204037952893;

  val2.matrix[0][0] = 974.813952532794;
  val2.matrix[0][1] = 857.5000373927077;
  val2.matrix[0][2] = 983.3511234117775;
  val2.matrix[1][0] = 1083.2154189334099;
  val2.matrix[1][1] = 1009.7976771792378;
  val2.matrix[1][2] = 902.5702695650435;

  exp.matrix[0][0] = 2123414.4453219688;
  exp.matrix[0][1] = 1928210.0735379055;
  exp.matrix[0][2] = 1940539.5002003422;
  exp.matrix[1][0] = 2064171.587969399;
  exp.matrix[1][1] = 1871784.6370269116;
  exp.matrix[1][2] = 1895176.3423944018;
  exp.matrix[2][0] = 2178588.6598919462;
  exp.matrix[2][1] = 1969471.7334147757;
  exp.matrix[2][2] = 2020480.5962579749;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_25) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 901.8185163212385;
  val1.matrix[1][0] = 888.8891065180737;

  val2.matrix[0][0] = 1010.0646613417291;
  val2.matrix[0][1] = 822.2280855047255;

  exp.matrix[0][0] = 910895.0142797123;
  exp.matrix[0][1] = 741500.5121475239;
  exp.matrix[1][0] = 897835.4743455303;
  exp.matrix[1][1] = 730869.5882783618;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_26) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 985.4631711908526;
  val1.matrix[0][1] = 1011.3514950743381;
  val1.matrix[1][0] = 946.1320880782586;
  val1.matrix[1][1] = 849.5871763865356;
  val1.matrix[2][0] = 1140.3812438860475;
  val1.matrix[2][1] = 1224.1250838226822;

  val2.matrix[0][0] = 1044.6978701196538;
  val2.matrix[0][1] = 1149.137197940844;
  val2.matrix[0][2] = 991.9044431430333;
  val2.matrix[1][0] = 1063.1087974955428;
  val2.matrix[1][1] = 900.750499999642;
  val2.matrix[1][2] = 1087.643948734371;

  exp.matrix[0][0] = 2104687.9477982423;
  exp.matrix[0][1] = 2043407.7520797502;
  exp.matrix[0][2] = 2077475.631719093;
  exp.matrix[1][0] = 1891625.778723141;
  exp.matrix[1][1] = 1852501.650499626;
  exp.matrix[1][2] = 1862520.9732841565;
  exp.matrix[2][0] = 2492732.0024590176;
  exp.matrix[2][1] = 2413085.7884988915;
  exp.matrix[2][2] = 2462561.4626012444;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_27) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1101.4734964400618;
  val1.matrix[0][1] = 1056.9691442312576;
  val1.matrix[1][0] = 1043.6872003102783;
  val1.matrix[1][1] = 868.5756241052616;
  val1.matrix[2][0] = 941.0980790961835;
  val1.matrix[2][1] = 919.7059087642356;

  val2.matrix[0][0] = 882.8731126039274;
  val2.matrix[0][1] = 1064.003718122572;
  val2.matrix[0][2] = 1043.1669250425705;
  val2.matrix[1][0] = 1036.2850535158263;
  val2.matrix[1][1] = 872.7929640742168;
  val2.matrix[1][2] = 1075.29212327154;

  exp.matrix[0][0] = 2067782.6604470343;
  exp.matrix[0][1] = 2094487.127954283;
  exp.matrix[0][2] = 2285571.3156301994;
  exp.matrix[1][0] = 1821535.3042312772;
  exp.matrix[1][1] = 1868573.7551725176;
  exp.matrix[1][2] = 2022712.4945200123;
  exp.matrix[2][0] = 1783947.6772397922;
  exp.matrix[2][1] = 1804044.7014632581;
  exp.matrix[2][2] = 1970674.9087547115;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_28) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1019.7668207109484;
  val1.matrix[0][1] = 1180.010774014223;
  val1.matrix[0][2] = 1018.6313083798634;
  val1.matrix[1][0] = 1007.6586484314611;
  val1.matrix[1][1] = 1105.6490620968282;
  val1.matrix[1][2] = 970.339897924385;

  val2.matrix[0][0] = 871.1335099963975;
  val2.matrix[0][1] = 867.5035067244452;
  val2.matrix[1][0] = 955.0934547476563;
  val2.matrix[1][1] = 877.3147357553429;
  val2.matrix[2][0] = 892.3331311561129;
  val2.matrix[2][1] = 1243.220653156038;

  exp.matrix[0][0] = 2924332.081596747;
  exp.matrix[0][1] = 3186275.6139299353;
  exp.matrix[1][0] = 2799669.83714346;
  exp.matrix[1][1] = 3050496.227528046;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_29) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1163.7529535653402;
  val1.matrix[0][1] = 910.8580550942345;
  val1.matrix[1][0] = 1062.9561992660538;
  val1.matrix[1][1] = 1011.4781361067786;
  val1.matrix[2][0] = 995.6529829407301;
  val1.matrix[2][1] = 865.9249343491489;

  val2.matrix[0][0] = 907.1204963343172;
  val2.matrix[0][1] = 1044.5256518279707;
  val2.matrix[0][2] = 991.3466483834538;
  val2.matrix[1][0] = 1268.8651670429497;
  val2.matrix[1][1] = 1037.208615500267;
  val2.matrix[1][2] = 1073.0022749919806;

  exp.matrix[0][0] = 2211420.2150782812;
  exp.matrix[0][1] = 2160319.6346311197;
  exp.matrix[0][2] = 2131035.3553742296;
  exp.matrix[1][0] = 2247658.729191281;
  exp.matrix[1][1] = 2159398.8540630597;
  exp.matrix[1][2] = 2139076.4066680386;
  exp.matrix[2][0] = 2001919.2145315267;
  exp.matrix[2][1] = 1938129.8832840696;
  exp.matrix[2][2] = 1916176.672120199;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_30) {
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

  val1.matrix[0][0] = 835.0967771528489;
  val1.matrix[0][1] = 1001.0760443905938;

  val2.matrix[0][0] = 1087.4121828376924;
  val2.matrix[1][0] = 875.8326168095416;

  exp.matrix[0][0] = 1784869.46090846;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_31) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 960.7671195674296;
  val1.matrix[0][1] = 999.3047804511407;
  val1.matrix[1][0] = 983.4752767869626;
  val1.matrix[1][1] = 1072.7863693279721;

  val2.matrix[0][0] = 828.2001387016355;
  val2.matrix[0][1] = 816.3580796580708;
  val2.matrix[1][0] = 1035.921421297925;
  val2.matrix[1][1] = 936.8576593519191;

  exp.matrix[0][0] = 1830908.6901604726;
  exp.matrix[0][1] = 1720536.338321322;
  exp.matrix[1][0] = 1925836.7411078652;
  exp.matrix[1][1] = 1807916.1153022419;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_32) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1011.1066073581943;
  val1.matrix[0][1] = 984.3370818708025;
  val1.matrix[0][2] = 1253.5185143805634;
  val1.matrix[1][0] = 890.736192582676;
  val1.matrix[1][1] = 1095.736153722479;
  val1.matrix[1][2] = 965.2914380190125;
  val1.matrix[2][0] = 1047.1657837432524;
  val1.matrix[2][1] = 1002.7344521952062;
  val1.matrix[2][2] = 947.5028615191759;

  val2.matrix[0][0] = 997.6058151906328;
  val2.matrix[0][1] = 917.7900482439989;
  val2.matrix[0][2] = 852.3701832334339;
  val2.matrix[1][0] = 1158.4284350314456;
  val2.matrix[1][1] = 1075.5604878638703;
  val2.matrix[1][2] = 1066.0349922560813;
  val2.matrix[2][0] = 904.3536182184049;
  val2.matrix[2][1] = 863.5546938126542;
  val2.matrix[2][2] = 823.8735083725678;

  exp.matrix[0][0] = 3282593.9005570426;
  exp.matrix[0][1] = 3069179.4508209624;
  exp.matrix[0][2] = 2943915.593884638;
  exp.matrix[1][0] = 3030900.327893089;
  exp.matrix[1][1] = 2829621.2774294456;
  exp.matrix[1][2] = 2722608.097475323;
  exp.matrix[2][0] = 3063132.4186266907;
  exp.matrix[2][1] = 2857800.435247977;
  exp.matrix[2][2] = 2742145.4116586917;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_33) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 958.1087869733578;
  val1.matrix[0][1] = 1035.7239074296692;
  val1.matrix[1][0] = 1012.9021111812651;
  val1.matrix[1][1] = 912.2124805428134;
  val1.matrix[2][0] = 809.4810253518639;
  val1.matrix[2][1] = 1277.9005966532184;

  val2.matrix[0][0] = 827.273555495088;
  val2.matrix[0][1] = 948.4714981439475;
  val2.matrix[0][2] = 955.6599218511085;
  val2.matrix[1][0] = 995.1092704916066;
  val2.matrix[1][1] = 1009.567046599914;
  val2.matrix[1][2] = 1003.2580390613117;

  exp.matrix[0][0] = 1823276.52470359;
  exp.matrix[0][1] = 1954371.6028821948;
  exp.matrix[0][2] = 1954724.5048606289;
  exp.matrix[1][0] = 1745698.226931704;
  exp.matrix[1][1] = 1881648.4427184516;
  exp.matrix[1][2] = 1883174.4568509485;
  exp.matrix[2][0] = 1941312.9764450188;
  exp.matrix[2][1] = 2057896.0120460386;
  exp.matrix[2][2] = 2055652.6201413055;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_34) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1020.1744520554911;
  val1.matrix[0][1] = 978.2331386569324;
  val1.matrix[1][0] = 923.877924604809;
  val1.matrix[1][1] = 961.1987540949357;

  val2.matrix[0][0] = 923.5361802630108;
  val2.matrix[0][1] = 1205.943893033827;
  val2.matrix[1][0] = 996.2834745267211;
  val2.matrix[1][1] = 1005.1138970085156;

  exp.matrix[0][0] = 1916765.5269315466;
  exp.matrix[0][1] = 2213508.872463791;
  exp.matrix[1][0] = 1810861.123959301;
  exp.matrix[1][1] = 2080259.1666140265;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_35) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 811.5981845035882;

  val2.matrix[0][0] = 1027.5200751229297;

  exp.matrix[0][0] = 833933.4275107603;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_36) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1240.7620565553634;
  val1.matrix[0][1] = 1078.8757387374535;
  val1.matrix[1][0] = 902.284920123982;
  val1.matrix[1][1] = 1019.3207469773608;

  val2.matrix[0][0] = 1190.985029120795;
  val2.matrix[0][1] = 911.3325321671608;
  val2.matrix[1][0] = 1026.110637253977;
  val2.matrix[1][1] = 878.5440439800761;

  exp.matrix[0][0] = 2584774.905852311;
  exp.matrix[0][1] = 2078586.6812799277;
  exp.matrix[1][0] = 2120543.6931162546;
  exp.matrix[1][1] = 1717799.7721551156;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_37) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 946.9230048212569;

  val2.matrix[0][0] = 912.6590789178696;

  exp.matrix[0][0] = 864217.8773863097;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_38) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 835.6195978726046;
  val1.matrix[0][1] = 1071.8545708493289;
  val1.matrix[1][0] = 921.1652409123052;
  val1.matrix[1][1] = 814.3312868510197;
  val1.matrix[2][0] = 990.161715094874;
  val1.matrix[2][1] = 1018.8608807807657;

  val2.matrix[0][0] = 970.8520331517968;
  val2.matrix[0][1] = 1170.487247143618;
  val2.matrix[0][2] = 1016.77154963908;
  val2.matrix[1][0] = 1076.6112450565142;
  val2.matrix[1][1] = 1110.932385823866;
  val2.matrix[1][2] = 843.4741308643303;

  exp.matrix[0][0] = 1965233.6695777166;
  exp.matrix[0][1] = 2168840.038423023;
  exp.matrix[0][2] = 1753715.8359978104;
  exp.matrix[1][0] = 1771033.367633626;
  exp.matrix[1][1] = 1982879.166352254;
  exp.matrix[1][2] = 1623481.9838883565;
  exp.matrix[2][0] = 2058217.5956456854;
  exp.matrix[2][1] = 2290857.209236784;
  exp.matrix[2][2] = 1866151.0573385267;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_39) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1030.6558024239578;

  val2.matrix[0][0] = 905.7733154290946;

  exp.matrix[0][0] = 933540.5232277821;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_40) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 989.4363906230283;
  val1.matrix[0][1] = 1000.2161011415551;
  val1.matrix[0][2] = 918.4164642642954;

  val2.matrix[0][0] = 881.2497328807735;
  val2.matrix[1][0] = 1091.1102349897285;
  val2.matrix[2][0] = 1082.9963228889305;

  exp.matrix[0][0] = 2957928.2337750173;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_41) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 996.4638656522595;
  val1.matrix[1][0] = 1122.7324260988482;
  val1.matrix[2][0] = 1032.4173487773044;

  val2.matrix[0][0] = 935.8479916344534;
  val2.matrix[0][1] = 973.7050914073523;
  val2.matrix[0][2] = 985.0566215410254;

  exp.matrix[0][0] = 932538.7074069708;
  exp.matrix[0][1] = 970261.939389057;
  exp.matrix[0][2] = 981573.328987125;
  exp.matrix[1][0] = 1050706.8861074843;
  exp.matrix[1][1] = 1093210.2795805773;
  exp.matrix[1][2] = 1105955.0105474903;
  exp.matrix[2][0] = 966185.7023818073;
  exp.matrix[2][1] = 1005270.0289617415;
  exp.matrix[2][2] = 1016989.5456069139;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_42) {
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

  val1.matrix[0][0] = 1018.4841001363086;
  val1.matrix[0][1] = 926.2964688235375;

  val2.matrix[0][0] = 1155.4091488521235;
  val2.matrix[1][0] = 876.5686761418242;

  exp.matrix[0][0] = 1988728.316649408;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_43) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 965.279832318766;
  val1.matrix[0][1] = 986.9639021147789;
  val1.matrix[0][2] = 1044.876001275849;
  val1.matrix[1][0] = 833.5829734265826;
  val1.matrix[1][1] = 1065.8356647513378;
  val1.matrix[1][2] = 1016.6388763598364;

  val2.matrix[0][0] = 1109.5458506769683;
  val2.matrix[0][1] = 1051.2435132202672;
  val2.matrix[1][0] = 929.2464396875207;
  val2.matrix[1][1] = 971.5996545961117;
  val2.matrix[2][0] = 1091.68157394901;
  val2.matrix[2][1] = 1024.1302982476695;

  exp.matrix[0][0] = 3128826.802486074;
  exp.matrix[0][1] = 3043767.1193794673;
  exp.matrix[1][0] = 3025168.454804856;
  exp.matrix[1][1] = 2953034.9329307494;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_44) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1045.8374705253368;
  val1.matrix[0][1] = 1048.9867314127023;
  val1.matrix[0][2] = 969.6994492654845;

  val2.matrix[0][0] = 945.8816896019555;
  val2.matrix[1][0] = 1025.564079623738;
  val2.matrix[2][0] = 1101.1036004593254;

  exp.matrix[0][0] = 3132781.180357972;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_45) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 954.5680752663937;
  val1.matrix[0][1] = 917.8783421758692;
  val1.matrix[1][0] = 1035.2960751488665;
  val1.matrix[1][1] = 935.6291590262676;

  val2.matrix[0][0] = 1008.1694442668812;
  val2.matrix[0][1] = 1080.397794771356;
  val2.matrix[1][0] = 977.7865663046889;
  val2.matrix[1][1] = 1085.2601808885793;

  exp.matrix[0][0] = 1859855.47843781;
  exp.matrix[0][1] = 2027450.0591404426;
  exp.matrix[1][0] = 1958599.4914733542;
  exp.matrix[1][1] = 2133932.6668957523;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_46) {
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

  val1.matrix[0][0] = 1078.173482299966;
  val1.matrix[0][1] = 897.6260153527145;

  val2.matrix[0][0] = 901.9632183816495;
  val2.matrix[1][0] = 1095.9187411541975;

  exp.matrix[0][0] = 1956197.996841633;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_47) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 879.1116515549402;
  val1.matrix[0][1] = 1184.982820646921;
  val1.matrix[0][2] = 1074.9434073569907;
  val1.matrix[1][0] = 986.9093625841863;
  val1.matrix[1][1] = 978.1693003354743;
  val1.matrix[1][2] = 929.3733275066763;

  val2.matrix[0][0] = 1012.7872707482919;
  val2.matrix[0][1] = 905.8297036454182;
  val2.matrix[1][0] = 821.1301995874813;
  val2.matrix[1][1] = 1017.6845072907266;
  val2.matrix[2][0] = 924.2261873268759;
  val2.matrix[2][1] = 1091.0601855058594;

  exp.matrix[0][0] = 2856869.1172606065;
  exp.matrix[0][1] = 3175092.058216502;
  exp.matrix[1][0] = 2661684.7597071766;
  exp.matrix[1][1] = 2903441.793006976;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_48) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 868.7965192380652;

  val2.matrix[0][0] = 964.5533583211006;

  exp.matrix[0][0] = 838000.6003287585;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_49) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1078.3555293012575;
  val1.matrix[0][1] = 763.7670270182896;
  val1.matrix[0][2] = 925.7335787358314;
  val1.matrix[1][0] = 1063.7900066231243;
  val1.matrix[1][1] = 1184.2595909185184;
  val1.matrix[1][2] = 1129.109950366736;

  val2.matrix[0][0] = 832.9029870172952;
  val2.matrix[0][1] = 1093.1278273822768;
  val2.matrix[1][0] = 1041.024574802036;
  val2.matrix[1][1] = 1055.140767334504;
  val2.matrix[2][0] = 1000.6277445907399;
  val2.matrix[2][1] = 864.20613435595;

  exp.matrix[0][0] = 2619580.488953513;
  exp.matrix[0][1] = 2784686.801366412;
  exp.matrix[1][0] = 3248695.954197162;
  exp.matrix[1][1] = 3388202.7776852003;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_50) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1055.7649583601747;
  val1.matrix[0][1] = 1111.2511044290368;
  val1.matrix[1][0] = 874.60791328148;
  val1.matrix[1][1] = 1098.947221178426;
  val1.matrix[2][0] = 1000.2740750308324;
  val1.matrix[2][1] = 1156.6422525828998;

  val2.matrix[0][0] = 846.1492292557894;
  val2.matrix[0][1] = 916.7196133629039;
  val2.matrix[0][2] = 811.742324570686;
  val2.matrix[1][0] = 1002.9982025217323;
  val2.matrix[1][1] = 1203.1138890864463;
  val2.matrix[1][2] = 863.7008896890305;

  exp.matrix[0][0] = 2007917.566084346;
  exp.matrix[0][1] = 2304802.082431269;
  exp.matrix[0][2] = 1816797.6690628384;
  exp.matrix[1][0] = 1842290.8992323524;
  exp.matrix[1][1] = 2123928.8932802537;
  exp.matrix[1][2] = 1659117.9532681198;
  exp.matrix[2][0] = 2006491.2379332224;
  exp.matrix[2][1] = 2308543.2221059212;
  exp.matrix[2][2] = 1810957.7454810955;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_51) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 867.237285481241;
  val1.matrix[1][0] = 905.3579223778004;

  val2.matrix[0][0] = 1176.4810529883907;
  val2.matrix[0][1] = 1014.8778678950952;

  exp.matrix[0][0] = 1020288.234813764;
  exp.matrix[0][1] = 880139.9272483318;
  exp.matrix[1][0] = 1065136.4418504164;
  exp.matrix[1][1] = 918827.7179447152;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_52) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1075.3413373644148;
  val1.matrix[0][1] = 1060.5946887411687;
  val1.matrix[1][0] = 891.5764639386709;
  val1.matrix[1][1] = 976.456895222418;

  val2.matrix[0][0] = 970.2642406525139;
  val2.matrix[0][1] = 1092.381077922168;
  val2.matrix[1][0] = 1054.9723233586587;
  val2.matrix[1][1] = 1033.8194442822191;

  exp.matrix[0][0] = 2162263.289063267;
  exp.matrix[0][1] = 2271145.9409674737;
  exp.matrix[1][0] = 1895199.7601794847;
  exp.matrix[1][1] = 1983421.3835117416;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_53) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1140.8852117263737;

  val2.matrix[0][0] = 935.4698433902836;

  exp.matrix[0][0] = 1067263.7103399613;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_54) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1030.6213233904668;
  val1.matrix[0][1] = 1017.6995852796737;
  val1.matrix[0][2] = 1188.7779483067027;
  val1.matrix[1][0] = 1014.4327416700826;
  val1.matrix[1][1] = 1035.9858514756843;
  val1.matrix[1][2] = 1089.0311073747268;
  val1.matrix[2][0] = 944.8618730936971;
  val1.matrix[2][1] = 1064.556648679668;
  val1.matrix[2][2] = 1003.2448505795467;

  val2.matrix[0][0] = 1178.7719841717014;
  val2.matrix[0][1] = 961.0493639523579;
  val2.matrix[0][2] = 1101.5025790343918;
  val2.matrix[1][0] = 991.3346045807116;
  val2.matrix[1][1] = 1138.4488900107547;
  val2.matrix[1][2] = 977.31091639397;
  val2.matrix[2][0] = 981.4193453000561;
  val2.matrix[2][1] = 957.3514720298228;
  val2.matrix[2][2] = 847.6738601943524;

  exp.matrix[0][0] = 3390438.0339921326;
  exp.matrix[0][1] = 3287155.2492742096;
  exp.matrix[0][2] = 3137536.952380943;
  exp.matrix[1][0] = 3291589.716542141;
  exp.matrix[1][1] = 3196922.4175652815;
  exp.matrix[1][2] = 3053023.765743478;
  exp.matrix[2][0] = 3153712.453718905;
  exp.matrix[2][1] = 3080460.1717111366;
  exp.matrix[2][2] = 2931595.059129264;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_55) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1042.2444037262853;
  val1.matrix[0][1] = 947.2366987352191;
  val1.matrix[0][2] = 976.8176151156287;
  val1.matrix[1][0] = 953.5783011721448;
  val1.matrix[1][1] = 1203.0682934136696;
  val1.matrix[1][2] = 893.3535127488699;

  val2.matrix[0][0] = 981.8970006535475;
  val2.matrix[0][1] = 1127.8807669022224;
  val2.matrix[1][0] = 1158.1001767790506;
  val2.matrix[1][1] = 1027.3716848518302;
  val2.matrix[2][0] = 1089.0787816592306;
  val2.matrix[2][1] = 1106.2309646715953;

  exp.matrix[0][0] = 3184202.98039705;
  exp.matrix[0][1] = 3229277.4731850084;
  exp.matrix[1][0] = 3302521.6323444084;
  exp.matrix[1][1] = 3299776.2434245157;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_56) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 914.7244166943442;
  val1.matrix[1][0] = 1200.5660259003819;
  val1.matrix[2][0] = 964.1679094995459;

  val2.matrix[0][0] = 1086.472485052286;
  val2.matrix[0][1] = 1014.0861068719851;
  val2.matrix[0][2] = 839.1086768799956;

  exp.matrix[0][0] = 993822.9101439068;
  exp.matrix[0][1] = 927609.322586315;
  exp.matrix[0][2] = 767553.195002217;
  exp.matrix[1][0] = 1304381.953629335;
  exp.matrix[1][1] = 1217477.327248089;
  exp.matrix[1][2] = 1007405.369500344;
  exp.matrix[2][0] = 1047541.9046416392;
  exp.matrix[2][1] = 977749.2817152949;
  exp.matrix[2][2] = 809041.6588303153;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_57) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 987.8522045252649;
  val1.matrix[0][1] = 898.4902658357897;
  val1.matrix[0][2] = 1067.1431300192608;

  val2.matrix[0][0] = 890.3191200292924;
  val2.matrix[1][0] = 1077.6839867848012;
  val2.matrix[2][0] = 931.7032729467174;

  exp.matrix[0][0] = 2842053.0241667298;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_58) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1008.6944214306083;
  val1.matrix[1][0] = 923.6805916648386;
  val1.matrix[2][0] = 1168.7159000237004;

  val2.matrix[0][0] = 891.1577106807708;
  val2.matrix[0][1] = 926.4243611620285;
  val2.matrix[0][2] = 960.8551436215786;

  exp.matrix[0][0] = 898905.8113785655;
  exp.matrix[0][1] = 934479.0849815533;
  exp.matrix[0][2] = 969209.2231739922;
  exp.matrix[1][0] = 823145.0814682975;
  exp.matrix[1][1] = 855720.2020508626;
  exp.matrix[1][2] = 887523.2475645832;
  exp.matrix[2][0] = 1041510.1859013375;
  exp.matrix[2][1] = 1082726.8810593619;
  exp.matrix[2][2] = 1122966.6839700951;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_59) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 944.1082168454913;
  val1.matrix[0][1] = 998.6307944999534;
  val1.matrix[0][2] = 931.4515349771083;
  val1.matrix[1][0] = 963.3427988545535;
  val1.matrix[1][1] = 1040.2323184232737;
  val1.matrix[1][2] = 1119.3172685884429;
  val1.matrix[2][0] = 1259.3143373602593;
  val1.matrix[2][1] = 1026.1819079422148;
  val1.matrix[2][2] = 1016.1132915655132;

  val2.matrix[0][0] = 873.6532615228235;
  val2.matrix[0][1] = 1021.2266200160061;
  val2.matrix[0][2] = 1183.5548101830384;
  val2.matrix[1][0] = 942.2929356826729;
  val2.matrix[1][1] = 981.905529431559;
  val2.matrix[1][2] = 974.0107334852431;
  val2.matrix[2][0] = 1067.0978978255218;
  val2.matrix[2][1] = 982.92024528875;
  val2.matrix[2][2] = 1015.4709774566476;

  exp.matrix[0][0] = 2759775.9407904693;
  exp.matrix[0][1] = 2860252.1134328768;
  exp.matrix[0][2] = 3035942.9346893616;
  exp.matrix[1][0] = 3016252.247613398;
  exp.matrix[1][1] = 3105400.7799411034;
  exp.matrix[1][2] = 3290000.6477196165;
  exp.matrix[2][0] = 3151460.3980786903;
  exp.matrix[2][1] = 3292417.3396779355;
  exp.matrix[2][2] = 3521813.291752007;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_60) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1026.0812866827891;
  val1.matrix[1][0] = 794.4616507158262;

  val2.matrix[0][0] = 1038.1338482779154;
  val2.matrix[0][1] = 938.1862953292158;

  exp.matrix[0][0] = 1065209.714789959;
  exp.matrix[0][1] = 962655.401059561;
  exp.matrix[1][0] = 824757.5307668457;
  exp.matrix[1][1] = 745353.0328662144;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_61) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1087.4502105302809;
  val1.matrix[0][1] = 959.8907923300723;
  val1.matrix[0][2] = 1116.9886410679235;

  val2.matrix[0][0] = 984.6566968818296;
  val2.matrix[1][0] = 1023.1488649659786;
  val2.matrix[2][0] = 933.7840985912422;

  exp.matrix[0][0] = 3095902.538324272;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_62) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1019.0596415490335;
  val1.matrix[0][1] = 1206.9948724123444;
  val1.matrix[0][2] = 1040.250290504671;
  val1.matrix[1][0] = 914.6464980751225;
  val1.matrix[1][1] = 996.8791464689172;
  val1.matrix[1][2] = 952.7995005727425;
  val1.matrix[2][0] = 1084.4799338344117;
  val1.matrix[2][1] = 943.6805667715703;
  val1.matrix[2][2] = 1125.6852671874003;

  val2.matrix[0][0] = 919.5629072527221;
  val2.matrix[0][1] = 1036.9519283845023;
  val2.matrix[0][2] = 903.4156220594305;
  val2.matrix[1][0] = 965.7321226559203;
  val2.matrix[1][1] = 1065.812488394408;
  val2.matrix[1][2] = 1116.5638310598606;
  val2.matrix[2][0] = 899.3494216336921;
  val2.matrix[2][1] = 885.3207821788244;
  val2.matrix[2][2] = 990.108714740052;

  exp.matrix[0][0] = 3038271.6639359877;
  exp.matrix[0][1] = 3264101.2697395263;
  exp.matrix[0][2] = 3298282.096935561;
  exp.matrix[1][0] = 2660692.886802297;
  exp.matrix[1][1] = 2854463.892802314;
  exp.matrix[1][2] = 2882760.222825076;
  exp.matrix[2][0] = 2920974.5516580185;
  exp.matrix[2][1] = 3126932.6530376715;
  exp.matrix[2][2] = 3147966.4960639193;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_63) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 895.1757112616398;
  val1.matrix[1][0] = 1233.1276346351133;

  val2.matrix[0][0] = 906.5844591245346;
  val2.matrix[0][1] = 1111.0429137817882;

  exp.matrix[0][0] = 811552.3880155543;
  exp.matrix[0][1] = 994578.630586817;
  exp.matrix[1][0] = 1117934.3496771909;
  exp.matrix[1][1] = 1370057.7202498405;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_64) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 950.3890744074442;

  val2.matrix[0][0] = 1064.3550537278459;

  exp.matrix[0][0] = 1011551.414353293;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_65) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1110.1020255868905;
  val1.matrix[1][0] = 1113.129617471037;
  val1.matrix[2][0] = 731.1117987147509;

  val2.matrix[0][0] = 998.9647305621132;
  val2.matrix[0][1] = 975.6605927542239;
  val2.matrix[0][2] = 915.1128149893054;

  exp.matrix[0][0] = 1108952.7708868643;
  exp.matrix[0][1] = 1083082.8003017702;
  exp.matrix[0][2] = 1015868.5895601494;
  exp.matrix[1][0] = 1111977.2283976625;
  exp.matrix[1][1] = 1086036.7023940743;
  exp.matrix[1][2] = 1018639.1776918893;
  exp.matrix[2][0] = 730354.901013863;
  exp.matrix[2][1] = 713316.9709036406;
  exp.matrix[2][2] = 669049.7761937501;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_66) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 921.4176739569557;
  val1.matrix[1][0] = 1044.9817656496054;

  val2.matrix[0][0] = 971.2279885742558;
  val2.matrix[0][1] = 1076.0348433809736;

  exp.matrix[0][0] = 894906.6341139836;
  exp.matrix[0][1] = 991477.5224847338;
  exp.matrix[1][0] = 1014915.5383486407;
  exp.matrix[1][1] = 1124436.7905367464;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_67) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1050.2353617886845;
  val1.matrix[0][1] = 863.4811875605587;
  val1.matrix[1][0] = 937.2321405664244;
  val1.matrix[1][1] = 928.810116960721;
  val1.matrix[2][0] = 803.8064618645012;
  val1.matrix[2][1] = 841.4630878236019;

  val2.matrix[0][0] = 1095.9412630708262;
  val2.matrix[0][1] = 1210.8174287780093;
  val2.matrix[0][2] = 987.3201023459651;
  val2.matrix[1][0] = 956.8510301019144;
  val2.matrix[1][1] = 856.8037141430814;
  val2.matrix[1][2] = 1054.4308802203407;

  exp.matrix[0][0] = 1977219.1327112818;
  exp.matrix[0][1] = 2011477.1689672829;
  exp.matrix[0][2] = 1947399.7135417406;
  exp.matrix[1][0] = 1915884.2931058868;
  exp.matrix[1][1] = 1930624.9685543634;
  exp.matrix[1][2] = 1904714.2021304206;
  exp.matrix[2][0] = 1686079.4914570244;
  exp.matrix[2][1] = 1694231.5723514925;
  exp.matrix[2][2] = 1680878.9425611738;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_68) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1088.1896358024612;
  val1.matrix[0][1] = 974.342484447886;
  val1.matrix[1][0] = 761.9265976645011;
  val1.matrix[1][1] = 947.3130874065719;

  val2.matrix[0][0] = 1116.534021378478;
  val2.matrix[0][1] = 877.546271809445;
  val2.matrix[1][0] = 921.1789141837821;
  val2.matrix[1][1] = 1128.9687547446035;

  exp.matrix[0][0] = 2112544.5019517355;
  exp.matrix[0][1] = 2054938.9792820208;
  exp.matrix[1][0] = 1723361.8093348392;
  exp.matrix[1][1] = 1738112.721815601;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_69) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1119.7937401102665;
  val1.matrix[0][1] = 963.1062709481312;
  val1.matrix[1][0] = 1148.730927370576;
  val1.matrix[1][1] = 1134.5634870154215;

  val2.matrix[0][0] = 1018.4042867482406;
  val2.matrix[0][1] = 1075.1073983214028;
  val2.matrix[1][0] = 1113.4747352921197;
  val2.matrix[1][1] = 836.0982509333704;

  exp.matrix[0][0] = 2212797.2453042916;
  exp.matrix[0][1] = 2009150.003189235;
  exp.matrix[1][0] = 2433180.279131077;
  exp.matrix[1][1] = 2183615.665763172;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_70) {
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

  val1.matrix[0][0] = 1080.3904287061964;
  val1.matrix[0][1] = 1035.6867618575188;

  val2.matrix[0][0] = 1074.8627749740776;
  val2.matrix[1][0] = 921.3903265911129;

  exp.matrix[0][0] = 2115543.218008567;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_71) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1125.7890324340192;
  val1.matrix[1][0] = 797.9232788767001;
  val1.matrix[2][0] = 1070.9977176082875;

  val2.matrix[0][0] = 1035.4199116603077;
  val2.matrix[0][1] = 942.6632790380522;
  val2.matrix[0][2] = 1012.8906066981423;

  exp.matrix[0][0] = 1165664.3805109754;
  exp.matrix[0][1] = 1061239.9808193287;
  exp.matrix[0][2] = 1140301.1360762082;
  exp.matrix[1][0] = 826185.6509262159;
  exp.matrix[1][1] = 752172.9744867043;
  exp.matrix[1][2] = 808208.9940399918;
  exp.matrix[2][0] = 1108932.3621543641;
  exp.matrix[2][1] = 1009590.2203228982;
  exp.matrix[2][2] = 1084803.527960584;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_72) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1121.0949684865889;
  val1.matrix[1][0] = 836.8349692829984;
  val1.matrix[2][0] = 950.5579453271877;

  val2.matrix[0][0] = 1005.6141343240977;
  val2.matrix[0][1] = 844.6431529259381;
  val2.matrix[0][2] = 878.3276936246451;

  exp.matrix[0][0] = 1127388.9462297426;
  exp.matrix[0][1] = 946925.1889119176;
  exp.matrix[0][2] = 984688.7580050199;
  exp.matrix[1][0] = 841533.0732076552;
  exp.matrix[1][1] = 706826.9269338723;
  exp.matrix[1][2] = 735015.3285147867;
  exp.matrix[2][0] = 955894.5053150927;
  exp.matrix[2][1] = 802882.2599799572;
  exp.matrix[2][2] = 834901.3677758103;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_73) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1071.430973751101;
  val1.matrix[0][1] = 956.5405122048993;
  val1.matrix[1][0] = 903.4405539783082;
  val1.matrix[1][1] = 1079.7406261731321;
  val1.matrix[2][0] = 937.4040004391861;
  val1.matrix[2][1] = 973.6543509532926;

  val2.matrix[0][0] = 955.1517273578794;
  val2.matrix[0][1] = 974.751794474861;
  val2.matrix[0][2] = 720.0012630148717;
  val2.matrix[1][0] = 1136.3533984456867;
  val2.matrix[1][1] = 1035.1062128513715;
  val2.matrix[1][2] = 971.5774338324946;

  exp.matrix[0][0] = 2110347.207118114;
  exp.matrix[0][1] = 2034500.291347158;
  exp.matrix[0][2] = 1700784.8305389027;
  exp.matrix[1][0] = 2089889.735689253;
  exp.matrix[1][1] = 1998276.5316115578;
  exp.matrix[1][2] = 1699529.96670522;
  exp.matrix[2][0] = 2001778.4808688783;
  exp.matrix[2][1] = 1921571.8994175328;
  exp.matrix[2][2] = 1620912.6600104505;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_74) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1119.2022534360967;
  val1.matrix[1][0] = 1115.7930973717907;
  val1.matrix[2][0] = 955.0328925574539;

  val2.matrix[0][0] = 1028.401280997565;
  val2.matrix[0][1] = 1034.3744248887194;
  val2.matrix[0][2] = 1064.455844842144;

  exp.matrix[0][0] = 1150989.0311290433;
  exp.matrix[0][1] = 1157674.1872321214;
  exp.matrix[0][2] = 1191341.3802305516;
  exp.matrix[1][0] = 1147483.0506653904;
  exp.matrix[1][1] = 1154147.843388749;
  exp.matrix[1][2] = 1187712.484131922;
  exp.matrix[2][0] = 982157.0501008955;
  exp.matrix[2][1] = 987861.5989889266;
  exp.matrix[2][2] = 1016590.3444992811;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_75) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1056.681751433194;
  val1.matrix[0][1] = 1080.8577822344246;
  val1.matrix[1][0] = 988.3277339395795;
  val1.matrix[1][1] = 1264.4712200867489;
  val1.matrix[2][0] = 788.3115246957043;
  val1.matrix[2][1] = 1059.135990190081;

  val2.matrix[0][0] = 1109.8307096230283;
  val2.matrix[0][1] = 958.1188222521915;
  val2.matrix[0][2] = 976.0157205849019;
  val2.matrix[1][0] = 959.7958180671753;
  val2.matrix[1][1] = 892.4170219554534;
  val2.matrix[1][2] = 1009.8691509602895;

  exp.matrix[0][0] = 2210140.6373527683;
  exp.matrix[0][1] = 1977002.558357576;
  exp.matrix[0][2] = 2122862.931907885;
  exp.matrix[1][0] = 2310510.6594038433;
  exp.matrix[1][1] = 2075371.0450195624;
  exp.matrix[1][2] = 2241573.8828578084;
  exp.matrix[2][0] = 1891446.6330059213;
  exp.matrix[2][1] = 1700487.0958205499;
  exp.matrix[2][2] = 1838993.203986003;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_76) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 950.3446507128251;
  val1.matrix[0][1] = 977.9215984038005;
  val1.matrix[0][2] = 1141.448102429495;

  val2.matrix[0][0] = 895.0537207553258;
  val2.matrix[1][0] = 1001.4659016122548;
  val2.matrix[2][0] = 1029.5990493454613;

  exp.matrix[0][0] = 3005198.5320105827;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_77) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1030.5418995618645;
  val1.matrix[0][1] = 869.9015480448525;
  val1.matrix[0][2] = 922.2626036185931;
  val1.matrix[1][0] = 1074.6731601660315;
  val1.matrix[1][1] = 1092.400421842209;
  val1.matrix[1][2] = 1190.013619282634;
  val1.matrix[2][0] = 1151.025621070263;
  val1.matrix[2][1] = 1020.2801453679778;
  val1.matrix[2][2] = 1041.5353742439836;

  val2.matrix[0][0] = 1058.5089606770875;
  val2.matrix[0][1] = 954.2303196548169;
  val2.matrix[0][2] = 968.9748296956719;
  val2.matrix[1][0] = 1097.2545309089817;
  val2.matrix[1][1] = 740.8663360379026;
  val2.matrix[1][2] = 1057.4778278404765;
  val2.matrix[2][0] = 975.0507206365896;
  val2.matrix[2][1] = 1042.7493895563678;
  val2.matrix[2][2] = 1009.748244556436;

  exp.matrix[0][0] = 2944594.066350859;
  exp.matrix[0][1] = 2589543.8657842437;
  exp.matrix[0][2] = 2849723.806107673;
  exp.matrix[1][0] = 3496516.119317042;
  exp.matrix[1][1] = 3075694.3862369116;
  exp.matrix[1][2] = 3398134.630641;
  exp.matrix[2][0] = 3353427.7633983674;
  exp.matrix[2][1] = 2940295.1350500304;
  exp.matrix[2][2] = 3245927.0028507006;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_78) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1057.8925216646567;

  val2.matrix[0][0] = 1072.5904201021988;

  exp.matrix[0][0] = 1134685.3842352685;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_79) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1104.9384582382907;
  val1.matrix[1][0] = 1048.6109373704478;
  val1.matrix[2][0] = 942.1034640979775;

  val2.matrix[0][0] = 1145.7257278940224;
  val2.matrix[0][1] = 1082.2694437570954;
  val2.matrix[0][2] = 1062.2629345147002;

  exp.matrix[0][0] = 1265956.4193431644;
  exp.matrix[0][1] = 1195841.1305833773;
  exp.matrix[0][2] = 1173735.1691063552;
  exp.matrix[1][0] = 1201420.5294963894;
  exp.matrix[1][1] = 1134879.575905521;
  exp.matrix[1][2] = 1113900.5314953423;
  exp.matrix[2][0] = 1079392.1771551352;
  exp.matrix[2][1] = 1019609.7920509508;
  exp.matrix[2][2] = 1000761.5903891821;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_80) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 903.7509495801368;
  val1.matrix[1][0] = 967.7895009507017;
  val1.matrix[2][0] = 1089.2699805096584;

  val2.matrix[0][0] = 907.892412104977;
  val2.matrix[0][1] = 1009.4016784206935;
  val2.matrix[0][2] = 1073.182640339146;

  exp.matrix[0][0] = 820508.6295564738;
  exp.matrix[0][1] = 912247.7253804856;
  exp.matrix[0][2] = 969889.8302794216;
  exp.matrix[1][0] = 878648.7444280045;
  exp.matrix[1][1] = 976888.3466175637;
  exp.matrix[1][2] = 1038614.8919227786;
  exp.matrix[2][0] = 988939.950038455;
  exp.matrix[2][1] = 1099510.9465797252;
  exp.matrix[2][2] = 1168985.6337255253;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_81) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1060.6488312848207;
  val1.matrix[1][0] = 947.9514840731389;

  val2.matrix[0][0] = 1162.1968689149874;
  val2.matrix[0][1] = 1096.4528034711166;

  exp.matrix[0][0] = 1232682.7507375593;
  exp.matrix[0][1] = 1162951.384560605;
  exp.matrix[1][0] = 1101706.2466731176;
  exp.matrix[1][1] = 1039384.0622665987;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_82) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1171.7957804174225;
  val1.matrix[0][1] = 986.4424215881381;
  val1.matrix[1][0] = 903.9693067153755;
  val1.matrix[1][1] = 861.9910334146298;
  val1.matrix[2][0] = 899.5705730756666;
  val1.matrix[2][1] = 997.721780897117;

  val2.matrix[0][0] = 1130.7249436439956;
  val2.matrix[0][1] = 1049.6839584128106;
  val2.matrix[0][2] = 971.8472594227404;
  val2.matrix[1][0] = 882.8374542277743;
  val2.matrix[1][1] = 866.48409610005;
  val2.matrix[1][2] = 976.9813814434401;

  exp.matrix[0][0] = 2195847.0339919147;
  exp.matrix[0][1] = 2084751.9032645312;
  exp.matrix[0][2] = 2102542.397559395;
  exp.matrix[1][0] = 1783138.612898585;
  exp.matrix[1][1] = 1695783.601591303;
  exp.matrix[1][2] = 1720669.2839508958;
  exp.matrix[2][0] = 1897993.042619592;
  exp.matrix[2][1] = 1808774.855497717;
  exp.matrix[2][2] = 1849000.7998980053;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_83) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1070.8076927076613;
  val1.matrix[0][1] = 950.762213396798;
  val1.matrix[1][0] = 1029.222190844375;
  val1.matrix[1][1] = 898.6967821092651;
  val1.matrix[2][0] = 1001.4173482471624;
  val1.matrix[2][1] = 985.3593374455204;

  val2.matrix[0][0] = 1033.4572382315778;
  val2.matrix[0][1] = 1123.2030375635577;
  val2.matrix[0][2] = 967.0829403734562;
  val2.matrix[1][0] = 964.3345810245219;
  val2.matrix[1][1] = 1070.5333990442043;
  val2.matrix[1][2] = 1232.6601277744592;

  exp.matrix[0][0] = 2023486.841492736;
  exp.matrix[0][1] = 2220557.157086135;
  exp.matrix[0][2] = 2207526.523487066;
  exp.matrix[1][0] = 1930301.5077201058;
  exp.matrix[1][1] = 2118110.411945742;
  exp.matrix[1][2] = 2103130.912884691;
  exp.matrix[2][0] = 1985138.090870829;
  exp.matrix[2][1] = 2179655.0882155537;
  exp.matrix[2][2] = 2183066.8004832068;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_84) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1022.6063372500114;
  val1.matrix[0][1] = 1117.5094719398876;
  val1.matrix[1][0] = 1096.7847367761633;
  val1.matrix[1][1] = 819.8176473972378;
  val1.matrix[2][0] = 920.9905844851788;
  val1.matrix[2][1] = 931.0467878630133;

  val2.matrix[0][0] = 986.3862353090693;
  val2.matrix[0][1] = 1059.634221202408;
  val2.matrix[0][2] = 1092.2761935250487;
  val2.matrix[1][0] = 968.1765168747852;
  val2.matrix[1][1] = 1032.2634106727542;
  val2.matrix[1][2] = 875.3270264601557;

  exp.matrix[0][0] = 2090631.2433205761;
  exp.matrix[0][1] = 2237152.8087323396;
  exp.matrix[0][2] = 2095154.8006402354;
  exp.matrix[1][0] = 1875581.561782627;
  exp.matrix[1][1] = 2008458.401212484;
  exp.matrix[1][2] = 1915600.4009380247;
  exp.matrix[2][0] = 1809870.0715061042;
  exp.matrix[2][1] = 1936998.6734610894;
  exp.matrix[2][2] = 1820946.5062092918;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_85) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1061.6759437880783;
  val1.matrix[0][1] = 888.4421461345959;
  val1.matrix[0][2] = 976.9969607188156;

  val2.matrix[0][0] = 1143.5861383338772;
  val2.matrix[1][0] = 1108.3734650560255;
  val2.matrix[2][0] = 876.1761182120722;

  exp.matrix[0][0] = 3054864.997279201;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_86) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1111.3729572056652;
  val1.matrix[1][0] = 1093.4519439449934;
  val1.matrix[2][0] = 1013.3646970127402;

  val2.matrix[0][0] = 1058.894622423846;
  val2.matrix[0][1] = 1044.2506907904155;
  val2.matrix[0][2] = 1033.1041137711784;

  exp.matrix[0][0] = 1176826.847892366;
  exp.matrix[0][1] = 1160551.9782878028;
  exp.matrix[0][2] = 1148163.9740232124;
  exp.matrix[1][0] = 1157850.3833222543;
  exp.matrix[1][1] = 1141837.9478106822;
  exp.matrix[1][2] = 1129649.7015006647;
  exp.matrix[2][0] = 1073046.4282209605;
  exp.matrix[2][1] = 1058206.784878174;
  exp.matrix[2][2] = 1046911.2372343456;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_87) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1033.3653929709608;
  val1.matrix[0][1] = 1012.2597379346993;
  val1.matrix[0][2] = 973.876945854717;

  val2.matrix[0][0] = 733.1912072551038;
  val2.matrix[1][0] = 1045.3628783248714;
  val2.matrix[2][0] = 1137.4596344919128;

  exp.matrix[0][0] = 2923578.888139827;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_88) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1119.5445037152635;
  val1.matrix[0][1] = 1019.4742517104414;
  val1.matrix[1][0] = 896.8733460536165;
  val1.matrix[1][1] = 861.3076087712944;
  val1.matrix[2][0] = 1071.4846296654268;
  val1.matrix[2][1] = 1097.0306972819787;

  val2.matrix[0][0] = 877.1493623682381;
  val2.matrix[0][1] = 918.1523460141559;
  val2.matrix[0][2] = 1068.3199898733678;
  val2.matrix[1][0] = 926.5201860367685;
  val2.matrix[1][1] = 777.7027498462571;
  val2.matrix[1][2] = 1075.8284061460977;

  exp.matrix[0][0] = 1926571.2209311626;
  exp.matrix[0][1] = 1820760.3415060886;
  exp.matrix[0][2] = 2292811.1321965046;
  exp.matrix[1][0] = 1584710.7695296619;
  exp.matrix[1][1] = 1493307.6625616339;
  exp.matrix[1][2] = 1884766.9159196215;
  exp.matrix[2][0] = 1956273.1454321416;
  exp.matrix[2][1] = 1836949.9163873724;
  exp.matrix[2][2] = 2324905.2352638515;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_89) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 992.1145147795314;
  val1.matrix[0][1] = 954.7176831759044;
  val1.matrix[0][2] = 1085.62236670184;

  val2.matrix[0][0] = 999.7982568407616;
  val2.matrix[1][0] = 1032.0550560411634;
  val2.matrix[2][0] = 1071.083525591285;

  exp.matrix[0][0] = 3140027.806464353;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_90) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1148.757682232118;
  val1.matrix[1][0] = 1075.4884407468305;
  val1.matrix[2][0] = 962.5730856372579;

  val2.matrix[0][0] = 1157.4893511144678;
  val2.matrix[0][1] = 879.4580951775376;
  val2.matrix[0][2] = 1093.363419762365;

  exp.matrix[0][0] = 1329674.7841946143;
  exp.matrix[0][1] = 1010284.2430364216;
  exp.matrix[0][2] = 1256009.6279235969;
  exp.matrix[1][0] = 1244866.4174111597;
  exp.matrix[1][1] = 945847.0154846676;
  exp.matrix[1][2] = 1175899.7194898485;
  exp.matrix[2][0] = 1114168.0962945207;
  exp.matrix[2][1] = 846542.6923637077;
  exp.matrix[2][2] = 1052442.2006835642;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_91) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1061.8125970954848;

  val2.matrix[0][0] = 1043.390324932597;

  exp.matrix[0][0] = 1107884.9907009825;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_92) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 928.6927825490891;
  val1.matrix[1][0] = 969.5685827559377;

  val2.matrix[0][0] = 1091.8672340293015;
  val2.matrix[0][1] = 871.4351090030386;

  exp.matrix[0][0] = 1014009.2197448495;
  exp.matrix[0][1] = 809295.4961910007;
  exp.matrix[1][0] = 1058640.1666554355;
  exp.matrix[1][1] = 844916.1035998422;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_93) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 737.4032931271191;
  val1.matrix[0][1] = 1017.8774789853921;
  val1.matrix[0][2] = 1098.193445567322;
  val1.matrix[1][0] = 1070.7128430731857;
  val1.matrix[1][1] = 995.4226182922625;
  val1.matrix[1][2] = 933.8396039595937;

  val2.matrix[0][0] = 1038.4308995665385;
  val2.matrix[0][1] = 990.1052219027619;
  val2.matrix[1][0] = 941.3865226747101;
  val2.matrix[1][1] = 1154.0664844936057;
  val2.matrix[2][0] = 1067.3855284481572;
  val2.matrix[2][1] = 953.4956472600388;

  exp.matrix[0][0] = 2896154.2967114593;
  exp.matrix[0][1] = 2951927.805189285;
  exp.matrix[1][0] = 3045705.6171940714;
  exp.matrix[1][1] = 3099314.256377597;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_94) {
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

  val1.matrix[0][0] = 1010.9179769949371;
  val1.matrix[0][1] = 898.0708151153419;

  val2.matrix[0][0] = 1062.0284028133956;
  val2.matrix[1][0] = 1057.5594535488046;

  exp.matrix[0][0] = 2023386.8849647925;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_95) {
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

  val1.matrix[0][0] = 930.4183224397127;
  val1.matrix[0][1] = 1045.77368854657;

  val2.matrix[0][0] = 912.5241765370407;
  val2.matrix[1][0] = 920.4071148813781;

  exp.matrix[0][0] = 1811566.757013279;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_96) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 963.702173470163;
  val1.matrix[0][1] = 912.4159050947956;
  val1.matrix[0][2] = 899.4936077637021;
  val1.matrix[1][0] = 943.9473139970845;
  val1.matrix[1][1] = 971.4510365467881;
  val1.matrix[1][2] = 977.8478415280316;
  val1.matrix[2][0] = 745.4511432158031;
  val1.matrix[2][1] = 1101.452569490333;
  val1.matrix[2][2] = 1005.9860745327277;

  val2.matrix[0][0] = 1089.3486516849116;
  val2.matrix[0][1] = 1091.7914254146358;
  val2.matrix[0][2] = 799.6750209285799;
  val2.matrix[1][0] = 893.068411168652;
  val2.matrix[1][1] = 972.0797544641919;
  val2.matrix[1][2] = 1005.4499455008347;
  val2.matrix[2][0] = 962.3772575228096;
  val2.matrix[2][1] = 892.9766644887856;
  val2.matrix[2][2] = 984.0358376123793;

  exp.matrix[0][0] = 2730309.677382487;
  exp.matrix[0][1] = 2742329.600231759;
  exp.matrix[0][2] = 2573171.023533063;
  exp.matrix[1][0] = 2836918.491505644;
  exp.matrix[1][1] = 2848116.77245084;
  exp.matrix[1][2] = 2693833.7996242866;
  exp.matrix[2][0] = 2763866.8134864154;
  exp.matrix[2][1] = 2782898.9988910696;
  exp.matrix[2][2] = 2693500.433997343;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_97) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1066.0021519552547;
  val1.matrix[0][1] = 919.5351775113777;
  val1.matrix[1][0] = 889.9012297100677;
  val1.matrix[1][1] = 1182.741708381313;

  val2.matrix[0][0] = 817.2875982584255;
  val2.matrix[0][1] = 1027.7064040473485;
  val2.matrix[1][0] = 889.01590110154;
  val2.matrix[1][1] = 984.7364017777055;

  exp.matrix[0][0] = 1688711.7329396652;
  exp.matrix[0][1] = 2001037.000303248;
  exp.matrix[1][0] = 1778781.4243639484;
  exp.matrix[1][1] = 2079246.0068864776;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_98) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 902.2560685819163;
  val1.matrix[1][0] = 966.7037647836004;

  val2.matrix[0][0] = 1127.3100884909104;
  val2.matrix[0][1] = 978.5829892316079;

  exp.matrix[0][0] = 1017122.3685145411;
  exp.matrix[0][1] = 882932.4406452504;
  exp.matrix[1][0] = 1089774.9066226967;
  exp.matrix[1][1] = 945999.8598433848;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_99) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 854.6123297136934;
  val1.matrix[0][1] = 1115.6860308276284;
  val1.matrix[0][2] = 961.4946791572019;
  val1.matrix[1][0] = 981.4963703731396;
  val1.matrix[1][1] = 819.9006601076544;
  val1.matrix[1][2] = 1079.6141070066567;
  val1.matrix[2][0] = 1101.9986884951177;
  val1.matrix[2][1] = 1057.5363098803166;
  val1.matrix[2][2] = 745.8134162720712;

  val2.matrix[0][0] = 837.8453997542966;
  val2.matrix[0][1] = 912.6033465839927;
  val2.matrix[0][2] = 966.3680845069736;
  val2.matrix[1][0] = 975.0702122471332;
  val2.matrix[1][1] = 1038.8797850052104;
  val2.matrix[1][2] = 950.610694944553;
  val2.matrix[2][0] = 968.4534275536428;
  val2.matrix[2][1] = 983.4488168568204;
  val2.matrix[2][2] = 976.3835500000614;

  exp.matrix[0][0] = 2735068.0415085596;
  exp.matrix[0][1] = 2884566.5405994607;
  exp.matrix[0][2] = 2825240.7413081243;
  exp.matrix[1][0] = 2667358.9118312714;
  exp.matrix[1][1] = 2809240.309958468;
  exp.matrix[1][2] = 2782010.558107779;
  exp.matrix[2][0] = 2676762.2451291317;
  exp.matrix[2][1] = 2837810.107124194;
  exp.matrix[2][2] = 2798441.639212048;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_100) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 946.570616821925;

  val2.matrix[0][0] = 1097.1294471924732;

  exp.matrix[0][0] = 1038510.4975624769;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_101) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 916.0269255333142;
  val1.matrix[1][0] = 908.7139382657515;
  val1.matrix[2][0] = 1092.612660551064;

  val2.matrix[0][0] = 899.0293793935995;
  val2.matrix[0][1] = 922.0932854583946;
  val2.matrix[0][2] = 896.6560108094238;

  exp.matrix[0][0] = 823535.1183700424;
  exp.matrix[0][1] = 844662.2773333659;
  exp.matrix[0][2] = 821361.0488427227;
  exp.matrix[1][0] = 816960.5279653722;
  exp.matrix[1][1] = 837919.0208773036;
  exp.matrix[1][2] = 814803.8148522897;
  exp.matrix[2][0] = 982290.8821328126;
  exp.matrix[2][1] = 1007490.7979009682;
  exp.matrix[2][2] = 979697.7095695882;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_102) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 979.327062593902;
  val1.matrix[1][0] = 956.2717022011864;
  val1.matrix[2][0] = 1045.2264695314627;

  val2.matrix[0][0] = 955.5729449277467;
  val2.matrix[0][1] = 991.7845182593636;
  val2.matrix[0][2] = 1100.7428116456315;

  exp.matrix[0][0] = 935818.4452502946;
  exp.matrix[0][1] = 971281.4189930508;
  exp.matrix[0][2] = 1077987.224400269;
  exp.matrix[1][0] = 913787.3666234568;
  exp.matrix[1][1] = 948415.4694926653;
  exp.matrix[1][2] = 1052609.2021780878;
  exp.matrix[2][0] = 998790.1356066115;
  exp.matrix[2][1] = 1036639.4305561972;
  exp.matrix[2][2] = 1150525.5228784992;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_103) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 862.7177796033271;
  val1.matrix[0][1] = 1024.8855823407682;
  val1.matrix[1][0] = 1006.4949087277228;
  val1.matrix[1][1] = 1015.5366972370796;
  val1.matrix[2][0] = 1048.0390135910966;
  val1.matrix[2][1] = 1010.4150428294388;

  val2.matrix[0][0] = 974.9325574813672;
  val2.matrix[0][1] = 1019.2669988896308;
  val2.matrix[0][2] = 1136.9873057081727;
  val2.matrix[1][0] = 757.3340682551058;
  val2.matrix[1][1] = 1029.797816646789;
  val2.matrix[1][2] = 933.0702762821851;

  exp.matrix[0][0] = 1617272.4188234555;
  exp.matrix[0][1] = 1934764.697112305;
  exp.matrix[0][2] = 1937189.4372900529;
  exp.matrix[1][0] = 1750365.193838805;
  exp.matrix[1][1] = 2071684.5185560347;
  exp.matrix[1][2] = 2091939.0411490262;
  exp.matrix[2][0] = 1786989.090872793;
  exp.matrix[2][1] = 2108754.785115074;
  exp.matrix[2][2] = 2134395.297512532;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_104) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1106.0936845995357;
  val1.matrix[0][1] = 1140.0572683541832;
  val1.matrix[0][2] = 1338.1018308245245;
  val1.matrix[1][0] = 1054.2041294981846;
  val1.matrix[1][1] = 884.2833903384128;
  val1.matrix[1][2] = 1141.2564931984418;

  val2.matrix[0][0] = 1154.89201065156;
  val2.matrix[0][1] = 856.9687505991354;
  val2.matrix[1][0] = 1061.8074847761968;
  val2.matrix[1][1] = 985.2182610942813;
  val2.matrix[2][0] = 1009.1537722336922;
  val2.matrix[2][1] = 981.3616528904261;

  exp.matrix[0][0] = 3838290.610197506;
  exp.matrix[0][1] = 3384254.786846324;
  exp.matrix[1][0] = 3308133.9444753365;
  exp.matrix[1][1] = 2894617.498413429;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_105) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 961.970189847269;
  val1.matrix[0][1] = 1134.3203760256338;
  val1.matrix[0][2] = 1035.004139487211;
  val1.matrix[1][0] = 774.6794178724717;
  val1.matrix[1][1] = 1028.9799620003073;
  val1.matrix[1][2] = 965.3995190739553;

  val2.matrix[0][0] = 1171.3580459476616;
  val2.matrix[0][1] = 1106.719494125487;
  val2.matrix[1][0] = 880.2938812969999;
  val2.matrix[1][1] = 908.3255203967199;
  val2.matrix[2][0] = 949.1499935921637;
  val2.matrix[2][1] = 784.1350263259166;

  exp.matrix[0][0] = 3107720.980647425;
  exp.matrix[0][1] = 2906546.305885892;
  exp.matrix[1][0] = 2729540.681023983;
  exp.matrix[1][1] = 2549005.1502230577;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_106) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1053.2332393692195;
  val1.matrix[0][1] = 1065.1449637234175;
  val1.matrix[0][2] = 744.0571211769083;
  val1.matrix[1][0] = 948.6127028068578;
  val1.matrix[1][1] = 1134.0497806277385;
  val1.matrix[1][2] = 980.942172776389;
  val1.matrix[2][0] = 997.7925812493711;
  val1.matrix[2][1] = 829.9249417712674;
  val1.matrix[2][2] = 1161.381425670936;

  val2.matrix[0][0] = 1163.623213451111;
  val2.matrix[0][1] = 1057.636520226938;
  val2.matrix[0][2] = 1024.875006876772;
  val2.matrix[1][0] = 1094.2738158365064;
  val2.matrix[1][1] = 1023.646565799173;
  val2.matrix[1][2] = 1098.3387524804775;
  val2.matrix[2][0] = 1072.1835012859065;
  val2.matrix[2][1] = 1117.000381416087;
  val2.matrix[2][2] = 1054.7343120678543;

  exp.matrix[0][0] = 3188892.6597211654;
  exp.matrix[0][1] = 3035382.01061753;
  exp.matrix[0][2] = 3034104.98995193;
  exp.matrix[1][0] = 3396538.755723121;
  exp.matrix[1][1] = 3259866.3825629572;
  exp.matrix[1][2] = 3252413.639399652;
  exp.matrix[2][0] = 3314433.7459452893;
  exp.matrix[2][1] = 3202115.1855000705;
  exp.matrix[2][2] = 3159100.242820447;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_107) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 900.9497387773645;

  val2.matrix[0][0] = 986.2140163702339;

  exp.matrix[0][0] = 888529.2604273377;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_108) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1021.5730944596618;
  val1.matrix[1][0] = 999.6314587895099;

  val2.matrix[0][0] = 953.4590772766383;
  val2.matrix[0][1] = 959.2364395596073;

  exp.matrix[0][0] = 974028.1400141491;
  exp.matrix[0][1] = 979930.1378793764;
  exp.matrix[1][0] = 953107.6883141459;
  exp.matrix[1][1] = 958882.9214010258;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_109) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(cols, rows, &val2);
  cmatrix_create(rows, rows, &exp);

  val1.matrix[0][0] = 1169.0213316475817;
  val1.matrix[0][1] = 808.0104068302089;
  val1.matrix[1][0] = 1142.3755897857777;
  val1.matrix[1][1] = 1116.7526665208134;
  val1.matrix[2][0] = 1027.0051005310715;
  val1.matrix[2][1] = 1074.1886316276987;

  val2.matrix[0][0] = 967.4449942480285;
  val2.matrix[0][1] = 1105.669563470706;
  val2.matrix[0][2] = 1163.0839715945647;
  val2.matrix[1][0] = 1186.2337658446777;
  val2.matrix[1][1] = 1121.3533319618946;
  val2.matrix[1][2] = 1104.6267155246103;

  exp.matrix[0][0] = 2089453.0632075062;
  exp.matrix[0][1] = 2198616.4674096657;
  exp.matrix[0][2] = 2252219.855097994;
  exp.matrix[1][0] = 2429915.26701346;
  exp.matrix[1][1] = 2515364.243258476;
  exp.matrix[1][2] = 2562273.5680929623;
  exp.matrix[2][0] = 2267809.7692992445;
  exp.matrix[2][1] = 2340073.282417686;
  exp.matrix[2][2] = 2381070.6311823344;

  status = cmatrix_mult(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_110) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 976.0678171217661;
  val1.matrix[0][1] = 1028.080529666405;
  val1.matrix[1][0] = 998.9519348338487;
  val1.matrix[1][1] = 954.5836251129917;
  val1.matrix[2][0] = 1039.7798115443109;
  val1.matrix[2][1] = 1111.4955334370652;

  val2 = -4.6991243430836676;

  exp.matrix[0][0] = -4586.664039937428;
  exp.matrix[0][1] = -4831.078243605754;
  exp.matrix[1][0] = -4694.199354548267;
  exp.matrix[1][1] = -4485.707150277513;
  exp.matrix[2][0] = -4886.054623874819;
  exp.matrix[2][1] = -5223.055718402879;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_111) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1072.6621984585859;
  val1.matrix[0][1] = 1070.6656732277306;
  val1.matrix[0][2] = 1012.4029032835193;
  val1.matrix[1][0] = 948.0365575367961;
  val1.matrix[1][1] = 995.4319033652753;
  val1.matrix[1][2] = 848.210685311631;

  val2 = 146.3910415803855;

  exp.matrix[0][0] = 157028.13649625855;
  exp.matrix[0][1] = 156735.86308817213;
  exp.matrix[0][2] = 148206.71551068066;
  exp.matrix[1][0] = 138784.05911409462;
  exp.matrix[1][1] = 145722.3131559883;
  exp.matrix[1][2] = 124170.44570238225;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_112) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1066.8023363694454;
  val1.matrix[0][1] = 1039.8960504103595;
  val1.matrix[0][2] = 1015.9466073145527;

  val2 = -859.3874245558661;

  exp.matrix[0][0] = -916796.5123627185;
  exp.matrix[0][1] = -893673.588567976;
  exp.matrix[0][2] = -873091.7383463233;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_113) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 860.1549190353076;
  val1.matrix[0][1] = 986.5705374031934;
  val1.matrix[0][2] = 923.0223327512994;
  val1.matrix[1][0] = 964.2603552780809;
  val1.matrix[1][1] = 831.1042531658636;
  val1.matrix[1][2] = 859.2264471269636;
  val1.matrix[2][0] = 945.4362653419977;
  val1.matrix[2][1] = 1008.5389717767246;
  val1.matrix[2][2] = 935.3427109713917;

  val2 = 175.47815655843783;

  exp.matrix[0][0] = 150938.3995469881;
  exp.matrix[0][1] = 173121.57921837972;
  exp.matrix[0][2] = 161970.257413467;
  exp.matrix[1][0] = 169206.62958658196;
  exp.matrix[1][1] = 145840.64225342296;
  exp.matrix[1][2] = 150775.47300809564;
  exp.matrix[2][0] = 165903.41298570784;
  exp.matrix[2][1] = 176976.55958472198;
  exp.matrix[2][2] = 164132.21467163155;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_114) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 829.7834863298413;
  val1.matrix[0][1] = 927.0553166283697;
  val1.matrix[0][2] = 831.0886839848731;

  val2 = -597.3160861266547;

  exp.matrix[0][0] = -495643.02438707126;
  exp.matrix[0][1] = -553745.0533513644;
  exp.matrix[0][2] = -496422.63994199655;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_115) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1102.3067016394261;
  val1.matrix[0][1] = 1150.6236826312613;
  val1.matrix[1][0] = 979.5949144154432;
  val1.matrix[1][1] = 989.8449805389924;
  val1.matrix[2][0] = 955.2123432213838;
  val1.matrix[2][1] = 894.1424621529438;

  val2 = 759.6497395284296;

  exp.matrix[0][0] = 837366.9987808324;
  exp.matrix[0][1] = 874070.98080608;
  exp.matrix[1][0] = 744149.0215790657;
  exp.matrix[1][1] = 751935.481639969;
  exp.matrix[2][0] = 725626.807722465;
  exp.matrix[2][1] = 679235.0884757924;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_116) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1126.8210543060286;
  val1.matrix[0][1] = 1014.9197457954756;

  val2 = -143.40726684794538;

  exp.matrix[0][0] = -161594.3276247478;
  exp.matrix[0][1] = -145546.86681454067;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_117) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1044.017706101211;

  val2 = 272.8871991912906;

  exp.matrix[0][0] = 284899.06772407546;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_118) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 998.2770981632144;
  val1.matrix[0][1] = 1148.6165127023078;
  val1.matrix[1][0] = 1011.194271617598;
  val1.matrix[1][1] = 1076.9697193325587;

  val2 = -786.5926443088563;

  exp.matrix[0][0] = -785237.4223971745;
  exp.matrix[0][1] = -903493.3000233253;
  exp.matrix[1][0] = -795397.9760216543;
  exp.matrix[1][1] = -847136.4593703641;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_119) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1200.925512328005;
  val1.matrix[0][1] = 1088.5230004573637;

  val2 = 710.9099110621403;

  exp.matrix[0][0] = 853749.8491613573;
  exp.matrix[0][1] = 773841.7894442385;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_120) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 898.9451853401816;
  val1.matrix[0][1] = 1081.4128083393643;
  val1.matrix[1][0] = 959.0061328892007;
  val1.matrix[1][1] = 1054.146527263836;
  val1.matrix[2][0] = 969.7761487941186;
  val1.matrix[2][1] = 1043.5264807942349;

  val2 = 325.21229567739897;

  exp.matrix[0][0] = 292348.0274126254;
  exp.matrix[0][1] = 351688.74197498773;
  exp.matrix[1][0] = 311880.5860456017;
  exp.matrix[1][1] = 342821.41211182997;
  exp.matrix[2][0] = 315383.12764252216;
  exp.matrix[2][1] = 339367.64241925033;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_121) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 864.6755643148095;
  val1.matrix[0][1] = 876.1828117642588;
  val1.matrix[1][0] = 1170.5143095580006;
  val1.matrix[1][1] = 1019.2031550164811;

  val2 = -654.0971649310293;

  exp.matrix[0][0] = -565581.8352034548;
  exp.matrix[0][1] = -573108.6931362994;
  exp.matrix[1][0] = -765630.0913930894;
  exp.matrix[1][1] = -666657.8941850406;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_122) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 979.3453042486934;
  val1.matrix[1][0] = 1039.5481377742312;
  val1.matrix[2][0] = 968.5546178737881;

  val2 = 379.966934759394;

  exp.matrix[0][0] = 372118.83332638216;
  exp.matrix[1][0] = 394993.91944491083;
  exp.matrix[2][0] = 368018.72930055944;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_123) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1020.9869155782357;
  val1.matrix[0][1] = 936.2328951642464;
  val1.matrix[1][0] = 1086.6223494079807;
  val1.matrix[1][1] = 1044.1756075913122;

  val2 = 912.3065626962298;

  exp.matrix[0][0] = 931453.0635090059;
  exp.matrix[0][1] = 854131.4144704333;
  exp.matrix[1][0] = 991332.7005372964;
  exp.matrix[1][1] = 952608.2594128773;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_124) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1024.2349243917645;
  val1.matrix[0][1] = 1120.8856784808866;
  val1.matrix[1][0] = 938.6159273576983;
  val1.matrix[1][1] = 1084.974152623868;
  val1.matrix[2][0] = 1128.3796218052103;
  val1.matrix[2][1] = 931.3737792674967;

  val2 = 216.73496283760278;

  exp.matrix[0][0] = 221987.51827502396;
  exp.matrix[0][1] = 242935.11587075613;
  exp.matrix[1][0] = 203430.8881346528;
  exp.matrix[1][1] = 235151.83264869358;
  exp.matrix[2][0] = 244559.31539866052;
  exp.matrix[2][1] = 201861.26143745857;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_125) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1093.3573215289412;

  val2 = 490.46869093840064;

  exp.matrix[0][0] = 536257.5342182157;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_126) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 878.173235856091;
  val1.matrix[0][1] = 998.0898225880095;

  val2 = -545.0820048157614;

  exp.matrix[0][0] = -478676.42797598254;
  exp.matrix[0][1] = -544040.8014824798;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_127) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 853.6982482232227;
  val1.matrix[0][1] = 779.0126796815418;

  val2 = -321.6422486259703;

  exp.matrix[0][0] = -274585.4242065691;
  exp.matrix[0][1] = -250563.39000091385;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_128) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1060.997437893811;
  val1.matrix[0][1] = 1017.4195045712542;
  val1.matrix[0][2] = 1107.7521356739094;

  val2 = -807.5869524463282;

  exp.matrix[0][0] = -856847.6874220251;
  exp.matrix[0][1] = -821654.7170561522;
  exp.matrix[0][2] = -894606.1713148039;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_129) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 963.5208942107066;
  val1.matrix[0][1] = 1138.2818347699113;
  val1.matrix[0][2] = 883.1578566870438;
  val1.matrix[1][0] = 1001.1930148090375;
  val1.matrix[1][1] = 986.1810174481901;
  val1.matrix[1][2] = 929.8145175672421;

  val2 = -576.8983211282676;

  exp.matrix[0][0] = -555853.5862421638;
  exp.matrix[0][1] = -656672.8794495659;
  exp.matrix[0][2] = -509492.2848139948;
  exp.matrix[1][0] = -577586.5693686826;
  exp.matrix[1][1] = -568926.1732944277;
  exp.matrix[1][2] = -536408.4341452321;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_130) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1244.116734241532;
  val1.matrix[0][1] = 1025.6314762804718;
  val1.matrix[1][0] = 968.7337272909696;
  val1.matrix[1][1] = 1013.9685550924493;

  val2 = -156.82022327638606;

  exp.matrix[0][0] = -195102.6640456453;
  exp.matrix[0][1] = -160839.75710959305;
  exp.matrix[1][0] = -151917.03940913553;
  exp.matrix[1][1] = -159010.77520483246;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_131) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1086.6433274851415;
  val1.matrix[0][1] = 885.1613005613781;
  val1.matrix[0][2] = 1024.4751066011765;
  val1.matrix[1][0] = 1064.441438921784;
  val1.matrix[1][1] = 977.4532494513331;
  val1.matrix[1][2] = 1026.0007554336846;

  val2 = 493.05489198310215;

  exp.matrix[0][0] = 535774.8084573451;
  exp.matrix[0][1] = 436433.1094359125;
  exp.matrix[0][2] = 505122.46302462014;
  exp.matrix[1][0] = 524828.0586899181;
  exp.matrix[1][1] = 481938.10632675927;
  exp.matrix[1][2] = 505874.69164493657;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_132) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 785.6935080524593;
  val1.matrix[1][0] = 998.3087072837524;

  val2 = -292.14881705689777;

  exp.matrix[0][0] = -229539.42894681016;
  exp.matrix[1][0] = -291654.7078905491;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_133) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 855.8748715360473;
  val1.matrix[0][1] = 1152.4694492972408;
  val1.matrix[1][0] = 1069.6319497210886;
  val1.matrix[1][1] = 1097.21644791903;
  val1.matrix[2][0] = 862.1322629647269;
  val1.matrix[2][1] = 1008.558004952688;

  val2 = 995.2959825390883;

  exp.matrix[0][0] = 851848.8211959861;
  exp.matrix[0][1] = 1147048.2128845793;
  exp.matrix[1][0] = 1064600.3823528516;
  exp.matrix[1][1] = 1092055.1225896194;
  exp.matrix[2][0] = 858076.7777461255;
  exp.matrix[2][1] = 1003813.7304870483;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_134) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 927.3136076811945;
  val1.matrix[0][1] = 755.4508738939072;
  val1.matrix[0][2] = 1049.778904774079;

  val2 = 321.35736235307945;

  exp.matrix[0][0] = 297999.05503854697;
  exp.matrix[0][1] = 242769.70022187487;
  exp.matrix[0][2] = 337354.17989210255;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_135) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 999.5140068137712;
  val1.matrix[0][1] = 969.822197427145;
  val1.matrix[0][2] = 1179.1267005322902;

  val2 = 394.3502188006946;

  exp.matrix[0][0] = 394158.56728136964;
  exp.matrix[0][1] = 382449.59575316514;
  exp.matrix[0][2] = 464988.8723486498;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_136) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1104.3516176680237;
  val1.matrix[1][0] = 977.8188928981804;
  val1.matrix[2][0] = 932.93583325824;

  val2 = 655.0725307680104;

  exp.matrix[0][0] = 723430.4090435385;
  exp.matrix[1][0] = 640542.2968035851;
  exp.matrix[2][0] = 611140.6373366378;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_137) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1011.5101499264621;
  val1.matrix[0][1] = 1090.7870360844408;
  val1.matrix[0][2] = 1163.6296923056323;

  val2 = 569.5161003867424;

  exp.matrix[0][0] = 576071.3160877279;
  exp.matrix[0][1] = 621220.7791432237;
  exp.matrix[0][2] = 662705.8446561287;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_138) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1181.0653281458049;
  val1.matrix[0][1] = 1006.5042124886049;
  val1.matrix[0][2] = 1053.0813783583344;
  val1.matrix[1][0] = 1064.235466885742;
  val1.matrix[1][1] = 1182.090746175339;
  val1.matrix[1][2] = 1077.923504785379;

  val2 = -355.1713258304994;

  exp.matrix[0][0] = -419480.5384899794;
  exp.matrix[0][1] = -357481.43560356053;
  exp.matrix[0][2] = -374024.3093589394;
  exp.matrix[1][0] = -377985.92176964955;
  exp.matrix[1][1] = -419844.73757105955;
  exp.matrix[1][2] = -382847.52033848176;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_139) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1093.7792269678205;
  val1.matrix[0][1] = 1105.6611828495127;

  val2 = -610.4366919669924;

  exp.matrix[0][0] = -667682.9730524505;
  exp.matrix[0][1] = -674936.1548949684;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_140) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 869.6161418538802;
  val1.matrix[0][1] = 1094.2234310044291;
  val1.matrix[1][0] = 877.8472485866389;
  val1.matrix[1][1] = 1066.679636669966;

  val2 = -517.2465932595012;

  exp.matrix[0][0] = -449805.98681739066;
  exp.matrix[0][1] = -565983.3419517638;
  exp.matrix[1][0] = -454063.49873366544;
  exp.matrix[1][1] = -551736.4081668224;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_141) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 948.3093509456958;
  val1.matrix[0][1] = 944.7002498380249;
  val1.matrix[0][2] = 1189.044567178213;
  val1.matrix[1][0] = 925.9580377400532;
  val1.matrix[1][1] = 1148.8269456636099;
  val1.matrix[1][2] = 802.4609021610271;

  val2 = 514.7301136244664;

  exp.matrix[0][0] = 488123.37996342196;
  exp.matrix[0][1] = 486265.6669401884;
  exp.matrix[0][2] = 612037.045168196;
  exp.matrix[1][0] = 476618.48597742553;
  exp.matrix[1][1] = 591335.8242762786;
  exp.matrix[1][2] = 413050.7913485373;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_142) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1128.9636894547436;
  val1.matrix[0][1] = 851.712186915018;
  val1.matrix[1][0] = 806.6542725297232;
  val1.matrix[1][1] = 1082.9791606251038;

  val2 = -31.20566424447111;

  exp.matrix[0][0] = -35230.06183732408;
  exp.matrix[0][1] = -26578.24453779427;
  exp.matrix[1][0] = -25172.182389930636;
  exp.matrix[1][1] = -33795.084070226134;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_143) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 865.1128480520275;
  val1.matrix[0][1] = 1031.9411861044641;
  val1.matrix[0][2] = 865.6247372346718;

  val2 = -5.4940967063470225;

  exp.matrix[0][0] = -4753.013649101136;
  exp.matrix[0][1] = -5669.584671720376;
  exp.matrix[0][2] = -4755.826017773517;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_144) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1044.5209011747486;
  val1.matrix[1][0] = 1092.0015678586653;
  val1.matrix[2][0] = 1034.4892222587393;

  val2 = -728.4009315601832;

  exp.matrix[0][0] = -760829.9974497688;
  exp.matrix[1][0] = -795414.9592934324;
  exp.matrix[2][0] = -753522.9131822351;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_145) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 970.2230430964462;
  val1.matrix[0][1] = 868.6032939430974;
  val1.matrix[0][2] = 1093.844705697048;
  val1.matrix[1][0] = 995.9010109828914;
  val1.matrix[1][1] = 842.6588497312199;
  val1.matrix[1][2] = 1073.836479287192;
  val1.matrix[2][0] = 857.4559801790691;
  val1.matrix[2][1] = 861.2105575847768;
  val1.matrix[2][2] = 1037.0392403330902;

  val2 = -571.0447713047142;

  exp.matrix[0][0] = -554040.795759574;
  exp.matrix[0][1] = -496011.3693442575;
  exp.matrix[0][2] = -624634.2998076433;
  exp.matrix[1][0] = -568704.065058859;
  exp.matrix[1][1] = -481195.93013265805;
  exp.matrix[1][2] = -613208.7067332141;
  exp.matrix[2][0] = -489645.7541052161;
  exp.matrix[2][1] = -491789.7859012043;
  exp.matrix[2][2] = -592195.8358300241;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_146) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 834.1651045845329;
  val1.matrix[0][1] = 876.6477358456569;
  val1.matrix[0][2] = 951.559207607333;

  val2 = -132.41992191574604;

  exp.matrix[0][0] = -110460.07801392398;
  exp.matrix[0][1] = -116085.62472829745;
  exp.matrix[0][2] = -126005.39596957222;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_147) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 984.5549632543037;
  val1.matrix[0][1] = 1116.7121164599364;
  val1.matrix[0][2] = 1054.4155115365993;

  val2 = 121.08029131942249;

  exp.matrix[0][0] = 119210.2017708144;
  exp.matrix[0][1] = 135211.82838089796;
  exp.matrix[0][2] = 127668.93730856932;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_148) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1152.4126907251161;
  val1.matrix[0][1] = 910.2072793910725;
  val1.matrix[0][2] = 951.9589249556736;
  val1.matrix[1][0] = 1117.1839487982184;
  val1.matrix[1][1] = 1014.9468355719615;
  val1.matrix[1][2] = 1108.9909927503284;
  val1.matrix[2][0] = 1090.5597797734563;
  val1.matrix[2][1] = 987.3288560979282;
  val1.matrix[2][2] = 1018.3053704322585;

  val2 = 705.3650101242415;

  exp.matrix[0][0] = 812871.5892606259;
  exp.matrix[0][1] = 642028.3668428422;
  exp.matrix[0][2] = 671478.5167392208;
  exp.matrix[1][0] = 788022.4673546954;
  exp.matrix[1][1] = 715907.9849487835;
  exp.matrix[1][2] = 782243.442829028;
  exp.matrix[2][0] = 769242.7101009946;
  exp.matrix[2][1] = 696427.2285774709;
  exp.matrix[2][2] = 718276.9779245196;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_149) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 975.5332492659114;
  val1.matrix[1][0] = 1159.4818314926092;
  val1.matrix[2][0] = 990.8241412592033;

  val2 = 551.4670874261519;

  exp.matrix[0][0] = 537974.4796600424;
  exp.matrix[1][0] = 639416.0685367695;
  exp.matrix[2][0] = 546406.903331731;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_150) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 984.5294144537343;
  val1.matrix[0][1] = 979.7890917566349;
  val1.matrix[1][0] = 814.9018366382579;
  val1.matrix[1][1] = 1073.10471395331;

  val2 = -77.31494480246477;

  exp.matrix[0][0] = -76118.83733489343;
  exp.matrix[0][1] = -75752.33954722132;
  exp.matrix[1][0] = -63004.09051911407;
  exp.matrix[1][1] = -82967.0317265649;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_151) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 991.8174239034038;
  val1.matrix[0][1] = 1128.1282881349534;
  val1.matrix[0][2] = 1014.5331122255825;

  val2 = 347.7367747600765;

  exp.matrix[0][0] = 344891.39213901723;
  exp.matrix[0][1] = 392291.692431655;
  exp.matrix[0][2] = 352790.4723326268;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_152) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1043.6922859322465;
  val1.matrix[0][1] = 1132.37352632288;
  val1.matrix[1][0] = 911.8312843266834;
  val1.matrix[1][1] = 1062.0102090343366;
  val1.matrix[2][0] = 1028.133186839359;
  val1.matrix[2][1] = 967.2927864538404;

  val2 = -173.6395345828397;

  exp.matrix[0][0] = -181226.24277697533;
  exp.matrix[0][1] = -196624.81208463386;
  exp.matrix[1][0] = -158329.9598285583;
  exp.matrix[1][1] = -184406.9584189465;
  exp.matrix[2][0] = -178524.56805195808;
  exp.matrix[2][1] = -167960.269245183;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_153) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1006.7824650273586;

  val2 = -4.4132629142899304;

  exp.matrix[0][0] = -4443.19571566264;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_154) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 868.0395013078787;
  val1.matrix[0][1] = 1057.9869948841056;
  val1.matrix[0][2] = 1281.4953874235866;
  val1.matrix[1][0] = 930.9515717138121;
  val1.matrix[1][1] = 1050.9147040568216;
  val1.matrix[1][2] = 976.6107302111975;

  val2 = 510.25079875129336;

  exp.matrix[0][0] = 442917.84889001946;
  exp.matrix[0][1] = 539838.7092080954;
  exp.matrix[0][2] = 653884.0450289833;
  exp.matrix[1][0] = 475018.78306574456;
  exp.matrix[1][1] = 536230.0671644723;
  exp.matrix[1][2] = 498316.4051593474;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_155) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 936.5748819030033;
  val1.matrix[0][1] = 963.9741062787158;

  val2 = -665.2085816992635;

  exp.matrix[0][0] = -623017.648845852;
  exp.matrix[0][1] = -641243.8480324796;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_156) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 859.8831708181993;
  val1.matrix[0][1] = 1014.4001694208534;
  val1.matrix[0][2] = 843.2606474760285;

  val2 = -991.3781661090277;

  exp.matrix[0][0] = -852469.4009537622;
  exp.matrix[0][1] = -1005654.1796611326;
  exp.matrix[0][2] = -835990.1942466964;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_157) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1060.53988363979;
  val1.matrix[0][1] = 1087.2061444152055;

  val2 = -352.97896704025834;

  exp.matrix[0][0] = -374348.2726321689;
  exp.matrix[0][1] = -383760.90181550116;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_158) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 949.4552517314629;
  val1.matrix[0][1] = 1011.9160954647035;
  val1.matrix[0][2] = 966.0317242512123;
  val1.matrix[1][0] = 1015.5980860922994;
  val1.matrix[1][1] = 1016.4949529612462;
  val1.matrix[1][2] = 932.8929591125561;
  val1.matrix[2][0] = 915.713212536973;
  val1.matrix[2][1] = 734.1052122147241;
  val1.matrix[2][2] = 852.1045658387156;

  val2 = -63.05535228741667;

  exp.matrix[0][0] = -59868.23537906527;
  exp.matrix[0][1] = -63806.725884834035;
  exp.matrix[0][2] = -60913.47069348075;
  exp.matrix[1][0] = -64038.89510097606;
  exp.matrix[1][1] = -64095.447357352416;
  exp.matrix[1][2] = -58823.89418329282;
  exp.matrix[2][0] = -57740.61921076088;
  exp.matrix[2][1] = -46289.262772228205;
  exp.matrix[2][2] = -53729.753584676444;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_159) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 986.4849167673416;
  val1.matrix[0][1] = 1185.4436551805338;
  val1.matrix[0][2] = 993.5799380673775;
  val1.matrix[1][0] = 1039.3351849814196;
  val1.matrix[1][1] = 1024.7904396315462;
  val1.matrix[1][2] = 976.0983687521734;

  val2 = -226.49369949645973;

  exp.matrix[0][0] = -223432.61829609235;
  exp.matrix[0][1] = -268495.51900644467;
  exp.matrix[0][2] = -225039.59591834366;
  exp.matrix[1][0] = -235402.87106327905;
  exp.matrix[1][1] = -232108.57788075227;
  exp.matrix[1][2] = -221080.1306111393;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_160) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 983.6625769521767;
  val1.matrix[0][1] = 1052.1804472111753;
  val1.matrix[0][2] = 888.4637280201076;
  val1.matrix[1][0] = 1120.636641431502;
  val1.matrix[1][1] = 1095.6054855540547;
  val1.matrix[1][2] = 1071.6279190546493;

  val2 = 683.7801058549924;

  exp.matrix[0][0] = 672608.9009939539;
  exp.matrix[0][1] = 719460.0575726107;
  exp.matrix[0][2] = 607513.8219939104;
  exp.matrix[1][0] = 766269.0413030157;
  exp.matrix[1][1] = 749153.2348874618;
  exp.matrix[1][2] = 732757.8519283533;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_161) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1038.0535383609301;
  val1.matrix[0][1] = 994.1461200750116;
  val1.matrix[0][2] = 1072.1444490674892;
  val1.matrix[1][0] = 979.987543491632;
  val1.matrix[1][1] = 967.7022987589764;
  val1.matrix[1][2] = 1153.2319021150997;
  val1.matrix[2][0] = 954.6551953504012;
  val1.matrix[2][1] = 939.6704520969947;
  val1.matrix[2][2] = 804.8349268665602;

  val2 = 760.9315876723831;

  exp.matrix[0][0] = 789887.7270339176;
  exp.matrix[0][1] = 756477.1855270182;
  exp.matrix[0][2] = 815828.577843057;
  exp.matrix[1][0] = 745703.4773682461;
  exp.matrix[1][1] = 736355.2465888828;
  exp.matrix[1][2] = 877530.5822308852;
  exp.matrix[2][0] = 726427.2934776698;
  exp.matrix[2][1] = 715024.9290029922;
  exp.matrix[2][2] = 612424.318714758;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_162) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1070.3929086338615;

  val2 = -24.121361881720645;

  exp.matrix[0][0] = -25819.334704784917;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_163) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1029.089927319637;
  val1.matrix[1][0] = 881.7967515827448;

  val2 = 359.46527773335606;

  exp.matrix[0][0] = 369922.0965365525;
  exp.matrix[1][0] = 316975.31421206257;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_164) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1085.1295854618159;

  val2 = -590.6830175690266;

  exp.matrix[0][0] = -640967.6179940123;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_165) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 906.2945793820126;

  val2 = -434.7579020366654;

  exp.matrix[0][0] = -394018.7299593259;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_166) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 888.5943837371026;
  val1.matrix[1][0] = 941.785309403128;
  val1.matrix[2][0] = 1024.9345253007143;

  val2 = -87.6718245353569;

  exp.matrix[0][0] = -77904.69089410285;
  exp.matrix[1][0] = -82568.03639596785;
  exp.matrix[2][0] = -89857.87986239354;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_167) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1149.304717908351;
  val1.matrix[1][0] = 1078.1070822587585;

  val2 = 173.64083473330993;

  exp.matrix[0][0] = 199566.23058053738;
  exp.matrix[1][0] = 187203.41369530407;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_168) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1130.8730955430362;
  val1.matrix[1][0] = 1146.4167718331214;
  val1.matrix[2][0] = 1200.7199878903573;

  val2 = 586.1054504208425;

  exp.matrix[0][0] = 662810.8850320638;
  exp.matrix[1][0] = 671921.11842526;
  exp.matrix[2][0] = 703748.5293317864;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_169) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1149.7527812994517;
  val1.matrix[0][1] = 1002.2075748759504;
  val1.matrix[1][0] = 836.2479384596761;
  val1.matrix[1][1] = 994.684871760526;
  val1.matrix[2][0] = 1047.292807507021;
  val1.matrix[2][1] = 906.444513918756;

  val2 = -761.7600343607609;

  exp.matrix[0][0] = -875835.7181890507;
  exp.matrix[0][1] = -763441.6766741188;
  exp.matrix[1][0] = -637020.2583351583;
  exp.matrix[1][1] = -757711.1820904273;
  exp.matrix[2][0] = -797785.805032326;
  exp.matrix[2][1] = -690493.2040688747;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_170) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 947.9364476979764;
  val1.matrix[0][1] = 1184.3458747603202;
  val1.matrix[0][2] = 959.0568330608779;
  val1.matrix[1][0] = 815.1800423865756;
  val1.matrix[1][1] = 1082.643284790113;
  val1.matrix[1][2] = 889.1353228861497;
  val1.matrix[2][0] = 920.4191829027978;
  val1.matrix[2][1] = 923.1070169093358;
  val1.matrix[2][2] = 994.3441467744422;

  val2 = 704.6650874226086;

  exp.matrix[0][0] = 667977.7197881716;
  exp.matrix[0][1] = 834567.1893765869;
  exp.matrix[0][2] = 675813.8671120937;
  exp.matrix[1][0] = 574428.9158335021;
  exp.matrix[1][1] = 762900.9249241252;
  exp.matrix[1][2] = 626542.620032098;
  exp.matrix[2][0] = 648587.2639856461;
  exp.matrix[2][1] = 650481.2867708405;
  exp.matrix[2][2] = 700679.6051149714;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_171) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1080.2079893899545;
  val1.matrix[0][1] = 1016.5835388999766;
  val1.matrix[0][2] = 1010.9295060068141;
  val1.matrix[1][0] = 1097.1665074149048;
  val1.matrix[1][1] = 1002.3434091355957;
  val1.matrix[1][2] = 905.0538774655358;

  val2 = 948.7508683346884;

  exp.matrix[0][0] = 1024848.2679157873;
  exp.matrix[0][1] = 964484.5152661033;
  exp.matrix[0][2] = 959120.2466491226;
  exp.matrix[1][0] = 1040937.6766176283;
  exp.matrix[1][1] = 950974.1797869484;
  exp.matrix[1][2] = 858670.6521351038;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_172) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1002.3930355192962;
  val1.matrix[0][1] = 974.7655897010466;
  val1.matrix[0][2] = 1026.2654614858964;
  val1.matrix[1][0] = 872.9357640523787;
  val1.matrix[1][1] = 956.2754655512015;
  val1.matrix[1][2] = 946.9916499587462;
  val1.matrix[2][0] = 1057.448835165209;
  val1.matrix[2][1] = 1076.7541082486237;
  val1.matrix[2][2] = 1050.9504309874833;

  val2 = -497.7489755674067;

  exp.matrix[0][0] = -498940.1065456328;
  exp.matrix[0][1] = -485188.573692055;
  exp.matrix[0][2] = -510822.5821148168;
  exp.matrix[1][0] = -434502.88229322294;
  exp.matrix[1][1] = -475985.13333835546;
  exp.matrix[1][2] = -471364.1236378541;
  exp.matrix[2][0] = -526344.0744184303;
  exp.matrix[2][1] = -535953.254318749;
  exp.matrix[2][2] = -523109.5003961444;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_173) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 962.2677364621987;
  val1.matrix[1][0] = 928.3287735975122;

  val2 = 8.418411901092327;

  exp.matrix[0][0] = 8100.766164670548;
  exp.matrix[1][0] = 7815.053995779741;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_174) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 966.7558362651345;
  val1.matrix[1][0] = 1042.6570522991424;
  val1.matrix[2][0] = 968.7871434578009;

  val2 = -963.0804217384332;

  exp.matrix[0][0] = -931063.6185083174;
  exp.matrix[1][0] = -1004162.5936568097;
  exp.matrix[2][0] = -933019.9306961108;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_175) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 970.0774983657885;
  val1.matrix[0][1] = 981.4378198684279;

  val2 = -991.9346212838427;

  exp.matrix[0][0] = -962253.455957446;
  exp.matrix[0][1] = -973522.1521648293;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_176) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1109.826368031913;
  val1.matrix[0][1] = 1233.2605095542708;
  val1.matrix[0][2] = 1145.6609309777177;
  val1.matrix[1][0] = 1008.9863037947433;
  val1.matrix[1][1] = 1125.141037849789;
  val1.matrix[1][2] = 1154.076324669051;
  val1.matrix[2][0] = 961.3616835729629;
  val1.matrix[2][1] = 946.4731637105515;
  val1.matrix[2][2] = 973.6173240614743;

  val2 = 519.025622675927;

  exp.matrix[0][0] = 576028.3217299262;
  exp.matrix[0][1] = 640093.8038930364;
  exp.matrix[0][2] = 594627.3780761922;
  exp.matrix[1][0] = 523689.74459854874;
  exp.matrix[1][1] = 583977.0277682255;
  exp.matrix[1][2] = 598995.1830268996;
  exp.matrix[2][0] = 498971.3464332346;
  exp.matrix[2][1] = 491243.82314092363;
  exp.matrix[2][2] = 505332.3378690765;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_177) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1138.039243529876;
  val1.matrix[0][1] = 993.312132964377;
  val1.matrix[1][0] = 1021.3792815913503;
  val1.matrix[1][1] = 903.2266442159054;
  val1.matrix[2][0] = 1071.4118951106962;
  val1.matrix[2][1] = 1098.187018558626;

  val2 = -439.07031535995156;

  exp.matrix[0][0] = -499679.24954866344;
  exp.matrix[0][1] = -436133.8714715352;
  exp.matrix[1][0] = -448457.3232704349;
  exp.matrix[1][1] = -396580.0075173883;
  exp.matrix[2][0] = -470425.1586666567;
  exp.matrix[2][1] = -482181.3205627409;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_178) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 864.2747039127406;
  val1.matrix[0][1] = 895.7946313642498;
  val1.matrix[1][0] = 1168.2821086398105;
  val1.matrix[1][1] = 973.795425597671;
  val1.matrix[2][0] = 1061.9513300043561;
  val1.matrix[2][1] = 994.0113619883455;

  val2 = 182.37757036705466;

  exp.matrix[0][0] = 157624.32062931117;
  exp.matrix[0][1] = 163372.84841606324;
  exp.matrix[1][0] = 213068.45247702804;
  exp.matrix[1][1] = 177598.4437550552;
  exp.matrix[2][0] = 193676.10341425674;
  exp.matrix[2][1] = 181285.3771166813;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_179) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 951.1681442415545;
  val1.matrix[0][1] = 837.5618740257949;
  val1.matrix[0][2] = 1170.9766295978109;
  val1.matrix[1][0] = 952.9695100416959;
  val1.matrix[1][1] = 1023.02251674214;
  val1.matrix[1][2] = 927.7390811955656;

  val2 = 113.96502736545631;

  exp.matrix[0][0] = 108399.90358763906;
  exp.matrix[0][1] = 95452.76189361258;
  exp.matrix[0][2] = 133450.38363642432;
  exp.matrix[1][0] = 108605.19629034736;
  exp.matrix[1][1] = 116588.78911599597;
  exp.matrix[1][2] = 105729.80977645594;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_180) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 974.8434095911986;
  val1.matrix[0][1] = 1009.7103861928978;
  val1.matrix[1][0] = 968.8696452132065;
  val1.matrix[1][1] = 886.5019624869179;
  val1.matrix[2][0] = 1063.5252869343615;
  val1.matrix[2][1] = 886.051044190386;

  val2 = 278.9158084831213;

  exp.matrix[0][0] = 271899.2377305717;
  exp.matrix[0][1] = 281624.18869879673;
  exp.matrix[1][0] = 270233.06040939636;
  exp.matrix[1][1] = 247259.41158891236;
  exp.matrix[2][0] = 296634.01524754096;
  exp.matrix[2][1] = 247133.64334767536;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_181) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1030.9320514185115;
  val1.matrix[0][1] = 1099.7983955188263;
  val1.matrix[0][2] = 1124.595948794712;
  val1.matrix[1][0] = 1001.1026929988949;
  val1.matrix[1][1] = 981.9117124712906;
  val1.matrix[1][2] = 913.9777813187773;

  val2 = 46.437592026241646;

  exp.matrix[0][0] = 47874.002010549215;
  exp.matrix[0][1] = 51071.98920221841;
  exp.matrix[0][2] = 52223.52786449298;
  exp.matrix[1][0] = 46488.79843385452;
  exp.matrix[1][1] = 45597.615509530086;
  exp.matrix[1][2] = 42442.927329930884;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_182) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1117.2298819028704;
  val1.matrix[0][1] = 1176.9773014860275;
  val1.matrix[0][2] = 1045.0333543276797;

  val2 = -988.0798015983489;

  exp.matrix[0][0] = -1103912.280050335;
  exp.matrix[0][1] = -1162947.498538074;
  exp.matrix[0][2] = -1032576.3494077509;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_183) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1236.9461973796992;
  val1.matrix[0][1] = 1001.13986532163;
  val1.matrix[1][0] = 971.6683948077327;
  val1.matrix[1][1] = 1092.4876877840313;

  val2 = -997.1641478691278;

  exp.matrix[0][0] = -1233438.4008700857;
  exp.matrix[0][1] = -998300.7807012566;
  exp.matrix[1][0] = -968912.886919816;
  exp.matrix[1][1] = -1089389.5542466773;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_184) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1116.5131932950133;
  val1.matrix[1][0] = 1057.969608480361;
  val1.matrix[2][0] = 1094.521630034948;

  val2 = -421.55234929058395;

  exp.matrix[0][0] = -470668.7596474447;
  exp.matrix[1][0] = -445989.57393293554;
  exp.matrix[2][0] = -461398.1644905917;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_185) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 819.1616708761168;
  val1.matrix[0][1] = 953.4640598957282;

  val2 = 580.0777063302096;

  exp.matrix[0][0] = 475177.42315543984;
  exp.matrix[0][1] = 553083.2449326036;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_186) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 843.690292692513;
  val1.matrix[0][1] = 1009.9089624431236;
  val1.matrix[1][0] = 855.5606367768146;
  val1.matrix[1][1] = 973.1553650535454;

  val2 = 416.5583193493078;

  exp.matrix[0][0] = 351446.2103753188;
  exp.matrix[0][1] = 420685.9800911108;
  exp.matrix[1][0] = 356390.90095717344;
  exp.matrix[1][1] = 405375.963332467;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_187) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1005.3733457438861;
  val1.matrix[1][0] = 962.541202277858;
  val1.matrix[2][0] = 1134.1436961268869;

  val2 = -349.9818947028008;

  exp.matrix[0][0] = -351862.4684271393;
  exp.matrix[1][0] = -336871.9937027166;
  exp.matrix[2][0] = -396929.7596357254;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_188) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1075.598608161224;

  val2 = 73.28419568782124;

  exp.matrix[0][0] = 78824.37888203531;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_189) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1173.6385543701958;
  val1.matrix[0][1] = 1071.4664648095197;

  val2 = 709.3254049299949;

  exp.matrix[0][0] = 832491.642820093;
  exp.matrix[0][1] = 760018.3840199227;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_190) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1128.797398958109;

  val2 = -285.7818915974783;

  exp.matrix[0][0] = -322589.85590456176;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_191) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 956.1375363203501;
  val1.matrix[1][0] = 1072.5660735496995;

  val2 = 761.8746651557312;

  exp.matrix[0][0] = 728456.9653268926;
  exp.matrix[1][0] = 817160.9181430747;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_192) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 938.6461884510918;

  val2 = -504.2929695240408;

  exp.matrix[0][0] = -473352.6737064235;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_193) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 914.5264479397348;

  val2 = 943.5006278483615;

  exp.matrix[0][0] = 862856.2778150717;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_194) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1054.8730206696707;
  val1.matrix[0][1] = 1037.3917804315;
  val1.matrix[0][2] = 931.8264772446183;

  val2 = 645.7981046714578;

  exp.matrix[0][0] = 681234.9974175289;
  exp.matrix[0][1] = 669945.6456044118;
  exp.matrix[0][2] = 601771.7728872559;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_195) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1046.333578284405;

  val2 = -487.2003507263995;

  exp.matrix[0][0] = -509774.08631697064;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_196) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 934.2089816776842;
  val1.matrix[0][1] = 1019.7925444523618;
  val1.matrix[0][2] = 1087.2834658892675;
  val1.matrix[1][0] = 1156.1587979351584;
  val1.matrix[1][1] = 1092.738097012437;
  val1.matrix[1][2] = 974.8821043764545;

  val2 = 597.5173364503892;

  exp.matrix[0][0] = 558206.0624200803;
  exp.matrix[0][1] = 609343.7248931403;
  exp.matrix[0][2] = 649670.7205047027;
  exp.matrix[1][0] = 690824.9254558996;
  exp.matrix[1][1] = 652929.9571647383;
  exp.matrix[1][2] = 582508.9583601694;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_197) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1210.0447128962792;
  val1.matrix[1][0] = 966.9814873385606;
  val1.matrix[2][0] = 870.1286948954041;

  val2 = 982.3029867846508;

  exp.matrix[0][0] = 1188630.5356209902;
  exp.matrix[1][0] = 949868.803178132;
  exp.matrix[2][0] = 854730.0158827855;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_198) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1073.7926633368995;

  val2 = -412.1687823663458;

  exp.matrix[0][0] = -442583.8145614854;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_199) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 929.3847061948372;
  val1.matrix[0][1] = 1085.5375276908535;
  val1.matrix[0][2] = 1081.3339956734708;

  val2 = -676.4885219302101;

  exp.matrix[0][0] = -628718.086198288;
  exp.matrix[0][1] = -734353.6776073601;
  exp.matrix[0][2] = -731510.0364460344;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_200) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 913.0138259781429;
  val1.matrix[1][0] = 976.5644312332442;

  val2 = -141.9504751195975;

  exp.matrix[0][0] = -129602.74638835891;
  exp.matrix[1][0] = -138623.78499845855;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_201) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1105.226078513859;
  val1.matrix[0][1] = 793.917763546986;
  val1.matrix[0][2] = 1003.6736572140632;

  val2 = 224.88891654827717;

  exp.matrix[0][0] = 248553.09533788284;
  exp.matrix[0][1] = 178543.30567251297;
  exp.matrix[0][2] = 225715.0813389176;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_202) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 965.2253788966028;
  val1.matrix[0][1] = 891.5697823254059;
  val1.matrix[1][0] = 1020.3747672617877;
  val1.matrix[1][1] = 968.2331226511648;

  val2 = -418.33601477728394;

  exp.matrix[0][0] = -403788.53836949874;
  exp.matrix[0][1] = -372975.74963386083;
  exp.matrix[1][0] = -426859.5137155949;
  exp.matrix[1][1] = -405046.78590525343;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_203) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1001.2104569534563;
  val1.matrix[0][1] = 947.8842343726379;

  val2 = -184.29486465352477;

  exp.matrix[0][0] = -184517.94565393092;
  exp.matrix[0][1] = -174690.19668091525;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_204) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 859.9374564267703;
  val1.matrix[0][1] = 1090.787708086523;

  val2 = -505.9143067464058;

  exp.matrix[0][0] = -435054.66211341706;
  exp.matrix[0][1] = -551845.1071440942;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_205) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 932.2076672246868;
  val1.matrix[1][0] = 925.0697201345417;

  val2 = -315.77472589332217;

  exp.matrix[0][0] = -294367.6205935288;
  exp.matrix[1][0] = -292113.63730769715;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_206) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 963.626518113306;

  val2 = 719.2590070113288;

  exp.matrix[0][0] = 693097.0525479607;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_207) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 885.6712682815391;
  val1.matrix[0][1] = 1037.0495890546638;
  val1.matrix[1][0] = 992.3673788959842;
  val1.matrix[1][1] = 917.078533808599;

  val2 = 507.12839903459144;

  exp.matrix[0][0] = 449149.0523545531;
  exp.matrix[0][1] = 525917.2978167726;
  exp.matrix[1][0] = 503257.68011367426;
  exp.matrix[1][1] = 465076.56863934523;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_208) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1042.5038470723887;
  val1.matrix[1][0] = 1117.5722622384048;

  val2 = 957.5284293153302;

  exp.matrix[0][0] = 998227.0712424135;
  exp.matrix[1][0] = 1070107.2129075201;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_209) {
  cmatrix val1;
  double val2 = 0;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 917.1870523917132;
  val1.matrix[0][1] = 952.5916442563396;
  val1.matrix[1][0] = 1011.9446858279797;
  val1.matrix[1][1] = 894.1799097859079;
  val1.matrix[2][0] = 885.3240801061132;
  val1.matrix[2][1] = 972.5522183916229;

  val2 = -902.3877626039745;

  exp.matrix[0][0] = -827658.3720970924;
  exp.matrix[0][1] = -859607.0425357195;
  exp.matrix[1][0] = -913166.5009232925;
  exp.matrix[1][1] = -806897.0081571292;
  exp.matrix[2][0] = -798905.6158263774;
  exp.matrix[2][1] = -877619.2203699485;

  status = cmatrix_mult_number(&val1, val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_210) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 858.7746755169161;
  val1.matrix[0][1] = 1023.5437815298615;
  val1.matrix[0][2] = 1078.2596821700854;
  val1.matrix[1][0] = 1062.6893445678982;
  val1.matrix[1][1] = 1034.2661086056778;
  val1.matrix[1][2] = 1014.9084447911672;
  val1.matrix[2][0] = 1082.5164532049741;
  val1.matrix[2][1] = 974.9760770159348;
  val1.matrix[2][2] = 895.9587779531283;

  val2.matrix[0][0] = 933.0568233058143;
  val2.matrix[0][1] = 964.4806669691748;
  val2.matrix[0][2] = 877.3230515604266;
  val2.matrix[1][0] = 1021.3481482936754;
  val2.matrix[1][1] = 868.7663091042705;
  val2.matrix[1][2] = 1021.7010315099244;
  val2.matrix[2][0] = 992.0364933179392;
  val2.matrix[2][1] = 1088.285473299211;
  val2.matrix[2][2] = 941.1246755119223;

  exp.matrix[0][0] = 1791.8314988227303;
  exp.matrix[0][1] = 1988.0244484990362;
  exp.matrix[0][2] = 1955.582733730512;
  exp.matrix[1][0] = 2084.037492861574;
  exp.matrix[1][1] = 1903.0324177099483;
  exp.matrix[1][2] = 2036.6094763010915;
  exp.matrix[2][0] = 2074.5529465229133;
  exp.matrix[2][1] = 2063.2615503151455;
  exp.matrix[2][2] = 1837.0834534650508;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_211) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 963.4135366616312;
  val1.matrix[0][1] = 899.2860913826714;

  val2.matrix[0][0] = 1114.760861807206;
  val2.matrix[0][1] = 782.0561544162933;

  exp.matrix[0][0] = 2078.1743984688374;
  exp.matrix[0][1] = 1681.3422457989648;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_212) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 844.8954077821619;
  val1.matrix[0][1] = 959.7437934563454;
  val1.matrix[1][0] = 1054.9316965416613;
  val1.matrix[1][1] = 883.2896381118504;

  val2.matrix[0][0] = 979.595359420343;
  val2.matrix[0][1] = 925.4400392899586;
  val2.matrix[1][0] = 914.6530984668901;
  val2.matrix[1][1] = 985.4257991102323;

  exp.matrix[0][0] = 1824.490767202505;
  exp.matrix[0][1] = 1885.183832746304;
  exp.matrix[1][0] = 1969.5847950085513;
  exp.matrix[1][1] = 1868.7154372220828;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_213) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 948.7906326125337;
  val1.matrix[0][1] = 1040.1784273118851;
  val1.matrix[1][0] = 1073.8655638990583;
  val1.matrix[1][1] = 843.8919956275179;

  val2.matrix[0][0] = 946.7925542489317;
  val2.matrix[0][1] = 942.2399334340616;
  val2.matrix[1][0] = 915.4072420858207;
  val2.matrix[1][1] = 907.5038020448451;

  exp.matrix[0][0] = 1895.5831868614655;
  exp.matrix[0][1] = 1982.4183607459468;
  exp.matrix[1][0] = 1989.2728059848791;
  exp.matrix[1][1] = 1751.395797672363;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_214) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1011.0962062929399;
  val1.matrix[0][1] = 990.7586626285366;
  val1.matrix[0][2] = 1009.1217020189729;
  val1.matrix[1][0] = 1075.4554909114402;
  val1.matrix[1][1] = 1219.3168602146357;
  val1.matrix[1][2] = 1168.163936968618;
  val1.matrix[2][0] = 940.0186844323777;
  val1.matrix[2][1] = 1191.2701059809215;
  val1.matrix[2][2] = 1218.8121335056978;

  val2.matrix[0][0] = 737.7959175493726;
  val2.matrix[0][1] = 1084.1084726141828;
  val2.matrix[0][2] = 1113.6825984151515;
  val2.matrix[1][0] = 959.921606852093;
  val2.matrix[1][1] = 1070.0563170279531;
  val2.matrix[1][2] = 924.3388655844647;
  val2.matrix[2][0] = 991.3135588740963;
  val2.matrix[2][1] = 1081.8115771930263;
  val2.matrix[2][2] = 1056.558601015901;

  exp.matrix[0][0] = 1748.8921238423125;
  exp.matrix[0][1] = 2074.8671352427195;
  exp.matrix[0][2] = 2122.8043004341243;
  exp.matrix[1][0] = 2035.3770977635331;
  exp.matrix[1][1] = 2289.373177242589;
  exp.matrix[1][2] = 2092.502802553083;
  exp.matrix[2][0] = 1931.332243306474;
  exp.matrix[2][1] = 2273.0816831739476;
  exp.matrix[2][2] = 2275.370734521599;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_215) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 949.678877826916;

  val2.matrix[0][0] = 977.6637802054704;

  exp.matrix[0][0] = 1927.3426580323865;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_216) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 921.7751023230775;
  val1.matrix[0][1] = 942.8601887887401;
  val1.matrix[0][2] = 1132.028826569252;

  val2.matrix[0][0] = 933.4788421665847;
  val2.matrix[0][1] = 976.6892891536157;
  val2.matrix[0][2] = 1060.3603994224425;

  exp.matrix[0][0] = 1855.2539444896622;
  exp.matrix[0][1] = 1919.5494779423557;
  exp.matrix[0][2] = 2192.3892259916947;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_217) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 946.4888755180348;
  val1.matrix[0][1] = 988.5527874275901;

  val2.matrix[0][0] = 1067.0716410348657;
  val2.matrix[0][1] = 886.774722305148;

  exp.matrix[0][0] = 2013.5605165529005;
  exp.matrix[0][1] = 1875.3275097327382;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_218) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1063.7094775434061;
  val1.matrix[0][1] = 1032.5727548474943;
  val1.matrix[1][0] = 1134.9300916101017;
  val1.matrix[1][1] = 896.6245589850671;
  val1.matrix[2][0] = 1093.8528585317642;
  val1.matrix[2][1] = 823.8276641459;

  val2.matrix[0][0] = 851.0891016923018;
  val2.matrix[0][1] = 972.4772601789298;
  val2.matrix[1][0] = 946.4454535324307;
  val2.matrix[1][1] = 1051.250023583894;
  val2.matrix[2][0] = 1062.923928139106;
  val2.matrix[2][1] = 1164.0605908883574;

  exp.matrix[0][0] = 1914.798579235708;
  exp.matrix[0][1] = 2005.050015026424;
  exp.matrix[1][0] = 2081.3755451425322;
  exp.matrix[1][1] = 1947.8745825689612;
  exp.matrix[2][0] = 2156.77678667087;
  exp.matrix[2][1] = 1987.8882550342573;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_219) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 976.0935021500048;
  val1.matrix[0][1] = 829.5278465131154;
  val1.matrix[0][2] = 955.7238442697585;
  val1.matrix[1][0] = 1088.2977453214983;
  val1.matrix[1][1] = 1187.2296423386742;
  val1.matrix[1][2] = 897.0818720314303;
  val1.matrix[2][0] = 847.2721549772864;
  val1.matrix[2][1] = 1197.3827211462317;
  val1.matrix[2][2] = 1074.2815944906401;

  val2.matrix[0][0] = 1074.9720673087375;
  val2.matrix[0][1] = 950.2600179819497;
  val2.matrix[0][2] = 963.468826894941;
  val2.matrix[1][0] = 920.3700412096599;
  val2.matrix[1][1] = 1095.0816020716966;
  val2.matrix[1][2] = 945.6148410297718;
  val2.matrix[2][0] = 988.3325429153746;
  val2.matrix[2][1] = 1013.9872437296594;
  val2.matrix[2][2] = 994.998637460384;

  exp.matrix[0][0] = 2051.065569458742;
  exp.matrix[0][1] = 1779.7878644950652;
  exp.matrix[0][2] = 1919.1926711646995;
  exp.matrix[1][0] = 2008.667786531158;
  exp.matrix[1][1] = 2282.311244410371;
  exp.matrix[1][2] = 1842.696713061202;
  exp.matrix[2][0] = 1835.604697892661;
  exp.matrix[2][1] = 2211.369964875891;
  exp.matrix[2][2] = 2069.2802319510242;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_220) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1164.3006819803793;
  val1.matrix[0][1] = 941.6729219529813;
  val1.matrix[0][2] = 1067.2420210128316;
  val1.matrix[1][0] = 1002.0728849341996;
  val1.matrix[1][1] = 986.6135790454869;
  val1.matrix[1][2] = 926.3413403451939;

  val2.matrix[0][0] = 1125.4628268126303;
  val2.matrix[0][1] = 1087.3790419070901;
  val2.matrix[0][2] = 861.6947253066473;
  val2.matrix[1][0] = 866.1547465183232;
  val2.matrix[1][1] = 930.5992072365051;
  val2.matrix[1][2] = 1072.0121967541954;

  exp.matrix[0][0] = 2289.7635087930094;
  exp.matrix[0][1] = 2029.0519638600713;
  exp.matrix[0][2] = 1928.936746319479;
  exp.matrix[1][0] = 1868.227631452523;
  exp.matrix[1][1] = 1917.212786281992;
  exp.matrix[1][2] = 1998.3535370993893;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_221) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 989.6792698546402;

  val2.matrix[0][0] = 1110.142059966182;

  exp.matrix[0][0] = 2099.821329820822;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_222) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1039.1827264533067;
  val1.matrix[1][0] = 995.1902316069892;

  val2.matrix[0][0] = 978.9806503802861;
  val2.matrix[1][0] = 787.885377694534;

  exp.matrix[0][0] = 2018.1633768335928;
  exp.matrix[1][0] = 1783.0756093015232;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_223) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1038.3285786527724;
  val1.matrix[0][1] = 1003.8310549023572;
  val1.matrix[1][0] = 907.0978173459996;
  val1.matrix[1][1] = 1117.431891441904;

  val2.matrix[0][0] = 1144.0394201836166;
  val2.matrix[0][1] = 953.4596145767955;
  val2.matrix[1][0] = 940.2237305912669;
  val2.matrix[1][1] = 834.1113948620741;

  exp.matrix[0][0] = 2182.3679988363892;
  exp.matrix[0][1] = 1957.2906694791527;
  exp.matrix[1][0] = 1847.3215479372666;
  exp.matrix[1][1] = 1951.5432863039782;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_224) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1083.426894896171;
  val1.matrix[0][1] = 1020.6564733401674;

  val2.matrix[0][0] = 796.932665446731;
  val2.matrix[0][1] = 965.8221732406794;

  exp.matrix[0][0] = 1880.3595603429021;
  exp.matrix[0][1] = 1986.4786465808468;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_225) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 970.2712286362017;

  val2.matrix[0][0] = 858.5620043950751;

  exp.matrix[0][0] = 1828.833233031277;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_226) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1075.2240265371618;
  val1.matrix[1][0] = 1054.677609675467;

  val2.matrix[0][0] = 1048.8448060463186;
  val2.matrix[1][0] = 982.5878572043566;

  exp.matrix[0][0] = 2124.0688325834803;
  exp.matrix[1][0] = 2037.2654668798236;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_227) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1008.5984262273091;
  val1.matrix[0][1] = 1024.343070424744;
  val1.matrix[0][2] = 1080.2920208838277;
  val1.matrix[1][0] = 1159.0719503289877;
  val1.matrix[1][1] = 901.7386920034928;
  val1.matrix[1][2] = 1094.4000859145738;

  val2.matrix[0][0] = 1012.3452017470496;
  val2.matrix[0][1] = 1025.125617456586;
  val2.matrix[0][2] = 918.7933412767134;
  val2.matrix[1][0] = 867.1908967927516;
  val2.matrix[1][1] = 989.9086203802979;
  val2.matrix[1][2] = 955.3447189395231;

  exp.matrix[0][0] = 2020.9436279743586;
  exp.matrix[0][1] = 2049.46868788133;
  exp.matrix[0][2] = 1999.085362160541;
  exp.matrix[1][0] = 2026.2628471217392;
  exp.matrix[1][1] = 1891.6473123837907;
  exp.matrix[1][2] = 2049.744804854097;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_228) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 936.7099039399158;
  val1.matrix[0][1] = 873.9582325866608;
  val1.matrix[0][2] = 982.4971247357252;
  val1.matrix[1][0] = 974.793648824898;
  val1.matrix[1][1] = 1047.4632125237717;
  val1.matrix[1][2] = 880.7217380934392;
  val1.matrix[2][0] = 578.2068993544867;
  val1.matrix[2][1] = 1016.1893563067904;
  val1.matrix[2][2] = 1129.0418270981597;

  val2.matrix[0][0] = 1256.9444953564946;
  val2.matrix[0][1] = 905.1333068635847;
  val2.matrix[0][2] = 1046.745636941028;
  val2.matrix[1][0] = 979.4207173651475;
  val2.matrix[1][1] = 917.8076321176752;
  val2.matrix[1][2] = 1082.6406046721781;
  val2.matrix[2][0] = 912.9926878075759;
  val2.matrix[2][1] = 1015.9090209360111;
  val2.matrix[2][2] = 928.357948751014;

  exp.matrix[0][0] = 2193.6543992964102;
  exp.matrix[0][1] = 1779.0915394502454;
  exp.matrix[0][2] = 2029.2427616767532;
  exp.matrix[1][0] = 1954.2143661900454;
  exp.matrix[1][1] = 1965.270844641447;
  exp.matrix[1][2] = 1963.3623427656173;
  exp.matrix[2][0] = 1491.1995871620625;
  exp.matrix[2][1] = 2032.0983772428015;
  exp.matrix[2][2] = 2057.3997758491737;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_229) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 972.3777836970102;
  val1.matrix[0][1] = 981.4661819428893;

  val2.matrix[0][0] = 999.7934080941822;
  val2.matrix[0][1] = 1023.0098608033435;

  exp.matrix[0][0] = 1972.1711917911923;
  exp.matrix[0][1] = 2004.476042746233;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_230) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 865.4767364995299;

  val2.matrix[0][0] = 1089.471628399098;

  exp.matrix[0][0] = 1954.948364898628;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_231) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1115.2283947340784;
  val1.matrix[1][0] = 984.0767267544098;

  val2.matrix[0][0] = 1096.685947015004;
  val2.matrix[1][0] = 944.1360771226247;

  exp.matrix[0][0] = 2211.9143417490823;
  exp.matrix[1][0] = 1928.2128038770345;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_232) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1047.9060062968235;
  val1.matrix[1][0] = 1068.584364713691;
  val1.matrix[2][0] = 981.3912705524375;

  val2.matrix[0][0] = 965.8461423885157;
  val2.matrix[1][0] = 1041.770936583114;
  val2.matrix[2][0] = 848.9362466629993;

  exp.matrix[0][0] = 2013.7521486853393;
  exp.matrix[1][0] = 2110.355301296805;
  exp.matrix[2][0] = 1830.3275172154367;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_233) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 965.5901652766281;

  val2.matrix[0][0] = 978.9616226558943;

  exp.matrix[0][0] = 1944.5517879325225;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_234) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1026.4367426527724;

  val2.matrix[0][0] = 941.7284626189909;

  exp.matrix[0][0] = 1968.1652052717632;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_235) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1036.8731839242178;
  val1.matrix[0][1] = 889.6373872529774;
  val1.matrix[0][2] = 837.7763928095045;
  val1.matrix[1][0] = 894.9594963270355;
  val1.matrix[1][1] = 941.5384370892367;
  val1.matrix[1][2] = 1072.707960434511;
  val1.matrix[2][0] = 913.9360893735159;
  val1.matrix[2][1] = 853.6700347904409;
  val1.matrix[2][2] = 930.3539357870729;

  val2.matrix[0][0] = 929.8283099179844;
  val2.matrix[0][1] = 1180.424880470336;
  val2.matrix[0][2] = 999.8220225278637;
  val2.matrix[1][0] = 971.0051695950092;
  val2.matrix[1][1] = 1055.11141048481;
  val2.matrix[1][2] = 914.4422800985171;
  val2.matrix[2][0] = 1037.73370438214;
  val2.matrix[2][1] = 852.1335386562707;
  val2.matrix[2][2] = 843.0082583306319;

  exp.matrix[0][0] = 1966.7014938422021;
  exp.matrix[0][1] = 2070.062267723313;
  exp.matrix[0][2] = 1837.5984153373684;
  exp.matrix[1][0] = 1865.9646659220448;
  exp.matrix[1][1] = 1996.6498475740468;
  exp.matrix[1][2] = 1987.1502405330282;
  exp.matrix[2][0] = 1951.669793755656;
  exp.matrix[2][1] = 1705.8035734467117;
  exp.matrix[2][2] = 1773.3621941177048;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_236) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1014.3200965369449;
  val1.matrix[1][0] = 999.4109666604272;

  val2.matrix[0][0] = 964.0592079800135;
  val2.matrix[1][0] = 1057.142180909727;

  exp.matrix[0][0] = 1978.3793045169584;
  exp.matrix[1][0] = 2056.553147570154;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_237) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 868.558137183176;
  val1.matrix[1][0] = 711.3226833473038;
  val1.matrix[2][0] = 969.7074675060138;

  val2.matrix[0][0] = 973.8247375770904;
  val2.matrix[1][0] = 1029.4438373765188;
  val2.matrix[2][0] = 1036.5343758818406;

  exp.matrix[0][0] = 1842.3828747602665;
  exp.matrix[1][0] = 1740.7665207238226;
  exp.matrix[2][0] = 2006.2418433878543;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_238) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 872.0923403600572;

  val2.matrix[0][0] = 815.0614351496658;

  exp.matrix[0][0] = 1687.153775509723;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_239) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 843.5546167171968;
  val1.matrix[0][1] = 993.8155151480311;
  val1.matrix[1][0] = 990.9259825235013;
  val1.matrix[1][1] = 971.2458421037612;

  val2.matrix[0][0] = 865.5623777096391;
  val2.matrix[0][1] = 914.0989877635691;
  val2.matrix[1][0] = 1129.874935055534;
  val2.matrix[1][1] = 1001.7893218129605;

  exp.matrix[0][0] = 1709.1169944268358;
  exp.matrix[0][1] = 1907.9145029116003;
  exp.matrix[1][0] = 2120.8009175790353;
  exp.matrix[1][1] = 1973.0351639167216;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_240) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 995.0042108720739;
  val1.matrix[0][1] = 1071.6090763625716;
  val1.matrix[1][0] = 938.9499212025057;
  val1.matrix[1][1] = 888.4990642756259;
  val1.matrix[2][0] = 746.6100921380779;
  val1.matrix[2][1] = 919.0736119275621;

  val2.matrix[0][0] = 1054.1260921967219;
  val2.matrix[0][1] = 1075.8243693012664;
  val2.matrix[1][0] = 904.8538939783623;
  val2.matrix[1][1] = 912.2963811737574;
  val2.matrix[2][0] = 1156.1921467273519;
  val2.matrix[2][1] = 991.5958946608232;

  exp.matrix[0][0] = 2049.130303068796;
  exp.matrix[0][1] = 2147.433445663838;
  exp.matrix[1][0] = 1843.803815180868;
  exp.matrix[1][1] = 1800.7954454493834;
  exp.matrix[2][0] = 1902.80223886543;
  exp.matrix[2][1] = 1910.6695065883853;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_241) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 901.25260192822;

  val2.matrix[0][0] = 881.5108268433671;

  exp.matrix[0][0] = 1782.763428771587;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_242) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 817.9711153667938;
  val1.matrix[0][1] = 1054.1432216508797;
  val1.matrix[0][2] = 932.3082115673158;

  val2.matrix[0][0] = 1018.6307219115108;
  val2.matrix[0][1] = 939.1190030829863;
  val2.matrix[0][2] = 1084.8568748293756;

  exp.matrix[0][0] = 1836.6018372783046;
  exp.matrix[0][1] = 1993.2622247338659;
  exp.matrix[0][2] = 2017.1650863966913;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_243) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 986.6425181431612;
  val1.matrix[1][0] = 1132.9904684872267;
  val1.matrix[2][0] = 1128.1846557256001;

  val2.matrix[0][0] = 934.7974505941637;
  val2.matrix[1][0] = 902.0608305790947;
  val2.matrix[2][0] = 1058.1410386948992;

  exp.matrix[0][0] = 1921.4399687373248;
  exp.matrix[1][0] = 2035.0512990663215;
  exp.matrix[2][0] = 2186.3256944204995;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_244) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1011.3384859216374;
  val1.matrix[0][1] = 952.6184722408326;
  val1.matrix[0][2] = 1013.1630346493926;

  val2.matrix[0][0] = 937.0092759860917;
  val2.matrix[0][1] = 1054.2072712908744;
  val2.matrix[0][2] = 938.6099791403242;

  exp.matrix[0][0] = 1948.347761907729;
  exp.matrix[0][1] = 2006.8257435317068;
  exp.matrix[0][2] = 1951.7730137897167;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_245) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 923.0753764554111;
  val1.matrix[0][1] = 1076.2205264236118;
  val1.matrix[1][0] = 966.9099994978874;
  val1.matrix[1][1] = 1196.28534350076;

  val2.matrix[0][0] = 870.7763902713428;
  val2.matrix[0][1] = 796.0307338120945;
  val2.matrix[1][0] = 1060.2141465434765;
  val2.matrix[1][1] = 930.0205848673207;

  exp.matrix[0][0] = 1793.8517667267538;
  exp.matrix[0][1] = 1872.2512602357062;
  exp.matrix[1][0] = 2027.124146041364;
  exp.matrix[1][1] = 2126.305928368081;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_246) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1139.0007438583011;
  val1.matrix[1][0] = 1075.764132816805;

  val2.matrix[0][0] = 1071.2167158436657;
  val2.matrix[1][0] = 1086.7754458341058;

  exp.matrix[0][0] = 2210.2174597019666;
  exp.matrix[1][0] = 2162.5395786509107;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_247) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 885.9144922088385;
  val1.matrix[0][1] = 948.6630846798637;

  val2.matrix[0][0] = 991.2510488014616;
  val2.matrix[0][1] = 1115.6210423820237;

  exp.matrix[0][0] = 1877.1655410103;
  exp.matrix[0][1] = 2064.2841270618874;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_248) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1008.2382416274611;
  val1.matrix[0][1] = 1066.5392107130162;
  val1.matrix[0][2] = 933.0322003548805;

  val2.matrix[0][0] = 901.0320475832958;
  val2.matrix[0][1] = 1140.9026935951795;
  val2.matrix[0][2] = 1181.8478892255623;

  exp.matrix[0][0] = 1909.2702892107568;
  exp.matrix[0][1] = 2207.4419043081957;
  exp.matrix[0][2] = 2114.880089580443;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_249) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 849.4684231524333;
  val1.matrix[0][1] = 896.3307026288963;
  val1.matrix[0][2] = 1134.981758834355;
  val1.matrix[1][0] = 1116.5443147153517;
  val1.matrix[1][1] = 919.4437297066419;
  val1.matrix[1][2] = 1007.1549842524566;
  val1.matrix[2][0] = 1100.433201668129;
  val1.matrix[2][1] = 1037.864540377081;
  val1.matrix[2][2] = 1037.9528759206687;

  val2.matrix[0][0] = 970.8689548236829;
  val2.matrix[0][1] = 878.7680946121309;
  val2.matrix[0][2] = 981.2474002921447;
  val2.matrix[1][0] = 927.982749860342;
  val2.matrix[1][1] = 943.2877870732852;
  val2.matrix[1][2] = 883.3022871446769;
  val2.matrix[2][0] = 908.5295650062471;
  val2.matrix[2][1] = 899.1375314499272;
  val2.matrix[2][2] = 1101.9464659245284;

  exp.matrix[0][0] = 1820.3373779761162;
  exp.matrix[0][1] = 1775.0987972410271;
  exp.matrix[0][2] = 2116.2291591265;
  exp.matrix[1][0] = 2044.5270645756937;
  exp.matrix[1][1] = 1862.731516779927;
  exp.matrix[1][2] = 1890.4572713971336;
  exp.matrix[2][0] = 2008.962766674376;
  exp.matrix[2][1] = 1937.0020718270084;
  exp.matrix[2][2] = 2139.8993418451973;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_250) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 969.214026299846;
  val1.matrix[0][1] = 1241.048645866693;

  val2.matrix[0][0] = 959.4579971925513;
  val2.matrix[0][1] = 741.3457015363176;

  exp.matrix[0][0] = 1928.6720234923973;
  exp.matrix[0][1] = 1982.3943474030107;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_251) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1147.9366401213017;
  val1.matrix[0][1] = 1103.410790080987;
  val1.matrix[1][0] = 911.9576314873632;
  val1.matrix[1][1] = 1084.5459359382603;

  val2.matrix[0][0] = 1177.9596362429643;
  val2.matrix[0][1] = 1126.6106321084455;
  val2.matrix[1][0] = 1113.664850303964;
  val2.matrix[1][1] = 1029.2502144855441;

  exp.matrix[0][0] = 2325.8962763642658;
  exp.matrix[0][1] = 2230.0214221894325;
  exp.matrix[1][0] = 2025.6224817913271;
  exp.matrix[1][1] = 2113.7961504238046;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_252) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1134.6406924567864;
  val1.matrix[1][0] = 1125.1350429325043;

  val2.matrix[0][0] = 979.8616700326638;
  val2.matrix[1][0] = 778.3264586546666;

  exp.matrix[0][0] = 2114.50236248945;
  exp.matrix[1][0] = 1903.461501587171;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_253) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1009.0309684978865;
  val1.matrix[0][1] = 956.5549718050024;
  val1.matrix[1][0] = 1056.03678554315;
  val1.matrix[1][1] = 880.8810599201253;
  val1.matrix[2][0] = 994.6401649231318;
  val1.matrix[2][1] = 1013.2824355219396;

  val2.matrix[0][0] = 1070.2249032308325;
  val2.matrix[0][1] = 1113.044576993453;
  val2.matrix[1][0] = 909.0517816888778;
  val2.matrix[1][1] = 915.8809880905948;
  val2.matrix[2][0] = 1069.384195745728;
  val2.matrix[2][1] = 890.5349688722579;

  exp.matrix[0][0] = 2079.2558717287193;
  exp.matrix[0][1] = 2069.5995487984555;
  exp.matrix[1][0] = 1965.0885672320278;
  exp.matrix[1][1] = 1796.76204801072;
  exp.matrix[2][0] = 2064.02436066886;
  exp.matrix[2][1] = 1903.8174043941976;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_254) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 964.0036670640412;
  val1.matrix[0][1] = 877.0538789152054;
  val1.matrix[0][2] = 900.4303545882041;
  val1.matrix[1][0] = 1031.8593413124856;
  val1.matrix[1][1] = 848.3534866660794;
  val1.matrix[1][2] = 1023.6556525100463;
  val1.matrix[2][0] = 846.268548559829;
  val1.matrix[2][1] = 845.9800063027733;
  val1.matrix[2][2] = 889.0243309978956;

  val2.matrix[0][0] = 893.087000866734;
  val2.matrix[0][1] = 1003.3206753196059;
  val2.matrix[0][2] = 927.5094513116478;
  val2.matrix[1][0] = 969.1927152309761;
  val2.matrix[1][1] = 999.3232240786249;
  val2.matrix[1][2] = 1133.5082295782381;
  val2.matrix[2][0] = 984.8965050837554;
  val2.matrix[2][1] = 1002.063163812113;
  val2.matrix[2][2] = 1087.576943153097;

  exp.matrix[0][0] = 1857.0906679307752;
  exp.matrix[0][1] = 1880.3745542348113;
  exp.matrix[0][2] = 1827.9398058998518;
  exp.matrix[1][0] = 2001.0520565434617;
  exp.matrix[1][1] = 1847.6767107447045;
  exp.matrix[1][2] = 2157.1638820882845;
  exp.matrix[2][0] = 1831.1650536435845;
  exp.matrix[2][1] = 1848.0431701148864;
  exp.matrix[2][2] = 1976.6012741509926;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_255) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1037.4266575725424;
  val1.matrix[0][1] = 696.309060899195;
  val1.matrix[0][2] = 959.967781407149;
  val1.matrix[1][0] = 953.2152981319038;
  val1.matrix[1][1] = 933.2335918000758;
  val1.matrix[1][2] = 1074.9994077366127;
  val1.matrix[2][0] = 1003.102483405471;
  val1.matrix[2][1] = 1060.383296569678;
  val1.matrix[2][2] = 1059.7573237149732;

  val2.matrix[0][0] = 1108.2821101639659;
  val2.matrix[0][1] = 1016.5445848951035;
  val2.matrix[0][2] = 861.1031554010967;
  val2.matrix[1][0] = 892.8106497693925;
  val2.matrix[1][1] = 1060.4522733077397;
  val2.matrix[1][2] = 986.3798793704906;
  val2.matrix[2][0] = 1030.7873120350744;
  val2.matrix[2][1] = 834.2431128357628;
  val2.matrix[2][2] = 919.3505211390177;

  exp.matrix[0][0] = 2145.708767736508;
  exp.matrix[0][1] = 1712.8536457942985;
  exp.matrix[0][2] = 1821.0709368082457;
  exp.matrix[1][0] = 1846.0259479012961;
  exp.matrix[1][1] = 1993.6858651078155;
  exp.matrix[1][2] = 2061.379287107103;
  exp.matrix[2][0] = 2033.8897954405454;
  exp.matrix[2][1] = 1894.6264094054407;
  exp.matrix[2][2] = 1979.1078448539909;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_256) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1036.4358514871512;
  val1.matrix[1][0] = 1017.4419746023725;
  val1.matrix[2][0] = 968.7500219309582;

  val2.matrix[0][0] = 1023.3920057362676;
  val2.matrix[1][0] = 861.4482909457728;
  val2.matrix[2][0] = 1065.7871764855192;

  exp.matrix[0][0] = 2059.827857223419;
  exp.matrix[1][0] = 1878.8902655481452;
  exp.matrix[2][0] = 2034.5371984164774;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_257) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1172.8334528149485;
  val1.matrix[0][1] = 1003.8875818364613;
  val1.matrix[0][2] = 1030.7765769921975;
  val1.matrix[1][0] = 946.3409047646801;
  val1.matrix[1][1] = 967.4489142699243;
  val1.matrix[1][2] = 1067.8214236303475;
  val1.matrix[2][0] = 1131.6561351412374;
  val1.matrix[2][1] = 844.9046160121674;
  val1.matrix[2][2] = 940.5181472703126;

  val2.matrix[0][0] = 941.8563232524609;
  val2.matrix[0][1] = 728.9812410515078;
  val2.matrix[0][2] = 1063.779282884251;
  val2.matrix[1][0] = 1191.8753906934335;
  val2.matrix[1][1] = 1051.9557033242534;
  val2.matrix[1][2] = 859.4885505773218;
  val2.matrix[2][0] = 1026.854535770016;
  val2.matrix[2][1] = 860.5747738101145;
  val2.matrix[2][2] = 910.599896933878;

  exp.matrix[0][0] = 2114.689776067409;
  exp.matrix[0][1] = 1732.8688228879691;
  exp.matrix[0][2] = 2094.5558598764483;
  exp.matrix[1][0] = 2138.2162954581136;
  exp.matrix[1][1] = 2019.4046175941776;
  exp.matrix[1][2] = 1927.3099742076693;
  exp.matrix[2][0] = 2158.5106709112533;
  exp.matrix[2][1] = 1705.479389822282;
  exp.matrix[2][2] = 1851.1180442041905;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_258) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1063.595355033049;
  val1.matrix[1][0] = 910.9873848012612;

  val2.matrix[0][0] = 1019.6351856985906;
  val2.matrix[1][0] = 917.7272965610939;

  exp.matrix[0][0] = 2083.2305407316394;
  exp.matrix[1][0] = 1828.7146813623551;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_259) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 924.1416529952573;
  val1.matrix[0][1] = 996.0495381777432;
  val1.matrix[1][0] = 959.9389548947812;
  val1.matrix[1][1] = 1005.0726308728878;

  val2.matrix[0][0] = 951.9404720060711;
  val2.matrix[0][1] = 1026.4387224293914;
  val2.matrix[1][0] = 827.5872844905053;
  val2.matrix[1][1] = 1122.3433148862441;

  exp.matrix[0][0] = 1876.0821250013284;
  exp.matrix[0][1] = 2022.4882606071346;
  exp.matrix[1][0] = 1787.5262393852865;
  exp.matrix[1][1] = 2127.415945759132;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_260) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 901.520575960264;
  val1.matrix[0][1] = 1013.8313859520903;
  val1.matrix[0][2] = 1037.1707051158994;

  val2.matrix[0][0] = 930.2873417657521;
  val2.matrix[0][1] = 1079.9004006219327;
  val2.matrix[0][2] = 1100.5531579769465;

  exp.matrix[0][0] = 1831.807917726016;
  exp.matrix[0][1] = 2093.731786574023;
  exp.matrix[0][2] = 2137.723863092846;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_261) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1127.140084086914;
  val1.matrix[1][0] = 946.2863457753758;
  val1.matrix[2][0] = 1075.5700638618073;

  val2.matrix[0][0] = 970.3052600157005;
  val2.matrix[1][0] = 1048.2074246807351;
  val2.matrix[2][0] = 945.5360582048577;

  exp.matrix[0][0] = 2097.4453441026144;
  exp.matrix[1][0] = 1994.493770456111;
  exp.matrix[2][0] = 2021.106122066665;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_262) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 988.1904521300088;
  val1.matrix[0][1] = 1112.3834807613748;
  val1.matrix[0][2] = 896.9138143632306;

  val2.matrix[0][0] = 1005.3888937270123;
  val2.matrix[0][1] = 1040.0072291894478;
  val2.matrix[0][2] = 1024.499489888847;

  exp.matrix[0][0] = 1993.579345857021;
  exp.matrix[0][1] = 2152.3907099508224;
  exp.matrix[0][2] = 1921.4133042520775;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_263) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1201.8790642626127;
  val1.matrix[0][1] = 949.0311785418317;
  val1.matrix[1][0] = 1104.7677921581546;
  val1.matrix[1][1] = 1055.4240833484932;

  val2.matrix[0][0] = 1087.6041817862667;
  val2.matrix[0][1] = 1020.5889591386662;
  val2.matrix[1][0] = 887.5218089413565;
  val2.matrix[1][1] = 1059.8253305200353;

  exp.matrix[0][0] = 2289.4832460488797;
  exp.matrix[0][1] = 1969.620137680498;
  exp.matrix[1][0] = 1992.2896010995112;
  exp.matrix[1][1] = 2115.249413868529;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_264) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1094.454215353716;
  val1.matrix[0][1] = 976.1194483828504;
  val1.matrix[1][0] = 857.8016990307693;
  val1.matrix[1][1] = 1058.6056527206483;
  val1.matrix[2][0] = 979.587603528571;
  val1.matrix[2][1] = 1013.2731958621383;

  val2.matrix[0][0] = 1052.8369970289177;
  val2.matrix[0][1] = 814.636089748761;
  val2.matrix[1][0] = 1188.0389415939603;
  val2.matrix[1][1] = 997.1471407818108;
  val2.matrix[2][0] = 1138.7245984220012;
  val2.matrix[2][1] = 1104.9031805378963;

  exp.matrix[0][0] = 2147.2912123826336;
  exp.matrix[0][1] = 1790.7555381316115;
  exp.matrix[1][0] = 2045.8406406247295;
  exp.matrix[1][1] = 2055.752793502459;
  exp.matrix[2][0] = 2118.312201950572;
  exp.matrix[2][1] = 2118.1763764000348;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_265) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 981.9508425400927;
  val1.matrix[0][1] = 928.1093148710044;
  val1.matrix[0][2] = 927.3730145193825;
  val1.matrix[1][0] = 1137.542124789615;
  val1.matrix[1][1] = 1000.3039709830914;
  val1.matrix[1][2] = 964.2853147720496;
  val1.matrix[2][0] = 1072.7842478690457;
  val1.matrix[2][1] = 1090.0141790249281;
  val1.matrix[2][2] = 924.4567985738869;

  val2.matrix[0][0] = 1137.5722650933187;
  val2.matrix[0][1] = 1002.4217120505266;
  val2.matrix[0][2] = 1128.425482127437;
  val2.matrix[1][0] = 1029.7071578659632;
  val2.matrix[1][1] = 940.5276388682564;
  val2.matrix[1][2] = 964.0921283594543;
  val2.matrix[2][0] = 887.4793952663772;
  val2.matrix[2][1] = 1202.6768677630203;
  val2.matrix[2][2] = 981.2248719165981;

  exp.matrix[0][0] = 2119.523107633411;
  exp.matrix[0][1] = 1930.531026921531;
  exp.matrix[0][2] = 2055.7984966468193;
  exp.matrix[1][0] = 2167.249282655578;
  exp.matrix[1][1] = 1940.8316098513478;
  exp.matrix[1][2] = 1928.3774431315037;
  exp.matrix[2][0] = 1960.2636431354229;
  exp.matrix[2][1] = 2292.6910467879484;
  exp.matrix[2][2] = 1905.681670490485;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_266) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 901.5251235732451;
  val1.matrix[0][1] = 952.5098055468532;
  val1.matrix[1][0] = 943.8091680841342;
  val1.matrix[1][1] = 1069.7953946677644;
  val1.matrix[2][0] = 1083.4810276253081;
  val1.matrix[2][1] = 1317.26576034019;

  val2.matrix[0][0] = 973.7311838799196;
  val2.matrix[0][1] = 1003.7719917457322;
  val2.matrix[1][0] = 962.9861300663858;
  val2.matrix[1][1] = 1069.9939046905852;
  val2.matrix[2][0] = 1027.031095248096;
  val2.matrix[2][1] = 1070.4971029962144;

  exp.matrix[0][0] = 1875.2563074531647;
  exp.matrix[0][1] = 1956.2817972925855;
  exp.matrix[1][0] = 1906.79529815052;
  exp.matrix[1][1] = 2139.7892993583496;
  exp.matrix[2][0] = 2110.512122873404;
  exp.matrix[2][1] = 2387.7628633364043;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_267) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1169.0339034371427;
  val1.matrix[0][1] = 1015.9553770181965;

  val2.matrix[0][0] = 995.5051586402376;
  val2.matrix[0][1] = 1011.2918116461024;

  exp.matrix[0][0] = 2164.5390620773805;
  exp.matrix[0][1] = 2027.2471886642988;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_268) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 848.2216223005994;
  val1.matrix[0][1] = 1095.8238249307396;
  val1.matrix[1][0] = 1114.6905491829648;
  val1.matrix[1][1] = 1028.1693639829552;
  val1.matrix[2][0] = 961.2867844788923;
  val1.matrix[2][1] = 1083.803149694201;

  val2.matrix[0][0] = 1032.750499141644;
  val2.matrix[0][1] = 1010.4302728034837;
  val2.matrix[1][0] = 1036.4093712357733;
  val2.matrix[1][1] = 1042.524687301791;
  val2.matrix[2][0] = 1092.2818768745906;
  val2.matrix[2][1] = 944.1679278198696;

  exp.matrix[0][0] = 1880.9721214422434;
  exp.matrix[0][1] = 2106.2540977342233;
  exp.matrix[1][0] = 2151.0999204187383;
  exp.matrix[1][1] = 2070.694051284746;
  exp.matrix[2][0] = 2053.5686613534826;
  exp.matrix[2][1] = 2027.9710775140707;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_269) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 904.8967106469307;
  val1.matrix[0][1] = 716.8109568605348;
  val1.matrix[1][0] = 1091.972577565381;
  val1.matrix[1][1] = 793.3887059968631;

  val2.matrix[0][0] = 1158.2889575462423;
  val2.matrix[0][1] = 1024.9491548997582;
  val2.matrix[1][0] = 903.5203867643302;
  val2.matrix[1][1] = 898.1593554372563;

  exp.matrix[0][0] = 2063.185668193173;
  exp.matrix[0][1] = 1741.760111760293;
  exp.matrix[1][0] = 1995.4929643297112;
  exp.matrix[1][1] = 1691.5480614341195;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_270) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1066.6808260523487;
  val1.matrix[0][1] = 1068.6259962865574;
  val1.matrix[0][2] = 975.0838588796554;
  val1.matrix[1][0] = 1029.088809376408;
  val1.matrix[1][1] = 1092.5021672187386;
  val1.matrix[1][2] = 1007.9541636137694;
  val1.matrix[2][0] = 946.1809751555631;
  val1.matrix[2][1] = 823.6417530488604;
  val1.matrix[2][2] = 961.5345861220452;

  val2.matrix[0][0] = 1122.419199421984;
  val2.matrix[0][1] = 872.5298036304554;
  val2.matrix[0][2] = 1112.4643786714698;
  val2.matrix[1][0] = 1185.5573064652249;
  val2.matrix[1][1] = 1021.9310819549515;
  val2.matrix[1][2] = 1165.9251125251499;
  val2.matrix[2][0] = 871.5208651817426;
  val2.matrix[2][1] = 1017.9202246188077;
  val2.matrix[2][2] = 1065.3885546485344;

  exp.matrix[0][0] = 2189.100025474333;
  exp.matrix[0][1] = 1941.1557999170127;
  exp.matrix[0][2] = 2087.548237551125;
  exp.matrix[1][0] = 2214.646115841633;
  exp.matrix[1][1] = 2114.43324917369;
  exp.matrix[1][2] = 2173.8792761389195;
  exp.matrix[2][0] = 1817.7018403373058;
  exp.matrix[2][1] = 1841.561977667668;
  exp.matrix[2][2] = 2026.9231407705797;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_271) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 968.1036705056974;

  val2.matrix[0][0] = 1042.1131588846022;

  exp.matrix[0][0] = 2010.2168293902996;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_272) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1037.218704046007;
  val1.matrix[1][0] = 1034.263674238167;
  val1.matrix[2][0] = 951.8259401747044;

  val2.matrix[0][0] = 1077.6238873144655;
  val2.matrix[1][0] = 1024.0136116587612;
  val2.matrix[2][0] = 1047.3960513380296;

  exp.matrix[0][0] = 2114.8425913604724;
  exp.matrix[1][0] = 2058.2772858969283;
  exp.matrix[2][0] = 1999.221991512734;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_273) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 849.2733010226651;
  val1.matrix[1][0] = 863.5783527930664;
  val1.matrix[2][0] = 855.2804180661169;

  val2.matrix[0][0] = 946.9273755110328;
  val2.matrix[1][0] = 925.1551025439355;
  val2.matrix[2][0] = 1031.917043838522;

  exp.matrix[0][0] = 1796.2006765336978;
  exp.matrix[1][0] = 1788.733455337002;
  exp.matrix[2][0] = 1887.1974619046389;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_274) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1006.0493139572978;

  val2.matrix[0][0] = 1011.8454576910714;

  exp.matrix[0][0] = 2017.8947716483692;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_275) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1030.404419363026;
  val1.matrix[0][1] = 1212.004223302063;
  val1.matrix[1][0] = 1114.353437032261;
  val1.matrix[1][1] = 1167.8072352893264;
  val1.matrix[2][0] = 882.0214933817196;
  val1.matrix[2][1] = 924.679661189432;

  val2.matrix[0][0] = 1051.3525066982754;
  val2.matrix[0][1] = 895.8926520755135;
  val2.matrix[1][0] = 1002.6766215901945;
  val2.matrix[1][1] = 935.4777125755912;
  val2.matrix[2][0] = 1124.8482105083585;
  val2.matrix[2][1] = 935.8363771150489;

  exp.matrix[0][0] = 2081.7569260613013;
  exp.matrix[0][1] = 2107.8968753775766;
  exp.matrix[1][0] = 2117.0300586224553;
  exp.matrix[1][1] = 2103.2849478649177;
  exp.matrix[2][0] = 2006.8697038900782;
  exp.matrix[2][1] = 1860.5160383044808;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_276) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1055.273873008268;
  val1.matrix[0][1] = 1250.513005100556;
  val1.matrix[0][2] = 1117.8380730067593;
  val1.matrix[1][0] = 1123.4350304579743;
  val1.matrix[1][1] = 945.6741639815832;
  val1.matrix[1][2] = 997.4106023577569;
  val1.matrix[2][0] = 993.1164856512203;
  val1.matrix[2][1] = 1046.092206999793;
  val1.matrix[2][2] = 1170.0847521988887;

  val2.matrix[0][0] = 1062.8525053185;
  val2.matrix[0][1] = 1001.0956915748752;
  val2.matrix[0][2] = 1091.4659189969639;
  val2.matrix[1][0] = 950.1988459845329;
  val2.matrix[1][1] = 858.5128802135921;
  val2.matrix[1][2] = 1021.3491035097919;
  val2.matrix[2][0] = 908.8759141375708;
  val2.matrix[2][1] = 947.9080300763638;
  val2.matrix[2][2] = 1239.4459188730657;

  exp.matrix[0][0] = 2118.126378326768;
  exp.matrix[0][1] = 2251.608696675431;
  exp.matrix[0][2] = 2209.303992003723;
  exp.matrix[1][0] = 2073.6338764425072;
  exp.matrix[1][1] = 1804.1870441951753;
  exp.matrix[1][2] = 2018.7597058675487;
  exp.matrix[2][0] = 1901.992399788791;
  exp.matrix[2][1] = 1994.0002370761567;
  exp.matrix[2][2] = 2409.530671071954;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_277) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1050.7468697580705;
  val1.matrix[0][1] = 1136.0770746034223;
  val1.matrix[0][2] = 1142.6866569360225;
  val1.matrix[1][0] = 1062.652242417145;
  val1.matrix[1][1] = 957.6080223400742;
  val1.matrix[1][2] = 1043.0558269675432;
  val1.matrix[2][0] = 888.24294947851;
  val1.matrix[2][1] = 1102.464758143802;
  val1.matrix[2][2] = 1087.699692362466;

  val2.matrix[0][0] = 880.1500239831622;
  val2.matrix[0][1] = 1120.2079791501062;
  val2.matrix[0][2] = 929.5212707783962;
  val2.matrix[1][0] = 1035.7070335926448;
  val2.matrix[1][1] = 1066.5852666121766;
  val2.matrix[1][2] = 950.3175500497746;
  val2.matrix[2][0] = 972.9745622531536;
  val2.matrix[2][1] = 1056.6444698844361;
  val2.matrix[2][2] = 942.1640403938545;

  exp.matrix[0][0] = 1930.8968937412328;
  exp.matrix[0][1] = 2256.2850537535287;
  exp.matrix[0][2] = 2072.2079277144185;
  exp.matrix[1][0] = 2098.35927600979;
  exp.matrix[1][1] = 2024.193288952251;
  exp.matrix[1][2] = 1993.3733770173178;
  exp.matrix[2][0] = 1861.2175117316638;
  exp.matrix[2][1] = 2159.1092280282382;
  exp.matrix[2][2] = 2029.8637327563206;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_278) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 996.9108657893205;
  val1.matrix[1][0] = 1139.1522007755102;
  val1.matrix[2][0] = 943.5841570177362;

  val2.matrix[0][0] = 1146.8512928627656;
  val2.matrix[1][0] = 1164.370373965062;
  val2.matrix[2][0] = 970.0735998620951;

  exp.matrix[0][0] = 2143.7621586520863;
  exp.matrix[1][0] = 2303.522574740572;
  exp.matrix[2][0] = 1913.6577568798311;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_279) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 878.5266405012404;
  val1.matrix[0][1] = 1092.8309980068234;
  val1.matrix[0][2] = 1106.337163866917;
  val1.matrix[1][0] = 994.9514621449639;
  val1.matrix[1][1] = 883.4851557117236;
  val1.matrix[1][2] = 1122.2777349349597;
  val1.matrix[2][0] = 1100.0014148121998;
  val1.matrix[2][1] = 859.1880468853287;
  val1.matrix[2][2] = 957.5853546017802;

  val2.matrix[0][0] = 1051.8065624651963;
  val2.matrix[0][1] = 992.8310863718123;
  val2.matrix[0][2] = 1009.5773542319621;
  val2.matrix[1][0] = 940.3353634854255;
  val2.matrix[1][1] = 1020.9567395029635;
  val2.matrix[1][2] = 1155.893615093393;
  val2.matrix[2][0] = 980.3682976274349;
  val2.matrix[2][1] = 1163.0852087957703;
  val2.matrix[2][2] = 974.730636974616;

  exp.matrix[0][0] = 1930.3332029664366;
  exp.matrix[0][1] = 2085.662084378636;
  exp.matrix[0][2] = 2115.914518098879;
  exp.matrix[1][0] = 1935.2868256303896;
  exp.matrix[1][1] = 1904.441895214687;
  exp.matrix[1][2] = 2278.1713500283527;
  exp.matrix[2][0] = 2080.369712439635;
  exp.matrix[2][1] = 2022.273255681099;
  exp.matrix[2][2] = 1932.3159915763963;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_280) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 929.4820228665702;
  val1.matrix[1][0] = 957.2312853504013;
  val1.matrix[2][0] = 805.9787440035811;

  val2.matrix[0][0] = 990.1998248004934;
  val2.matrix[1][0] = 1095.5860096215138;
  val2.matrix[2][0] = 1046.639593513128;

  exp.matrix[0][0] = 1919.6818476670637;
  exp.matrix[1][0] = 2052.817294971915;
  exp.matrix[2][0] = 1852.618337516709;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_281) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1076.3376230345552;
  val1.matrix[0][1] = 1012.8776449035928;
  val1.matrix[1][0] = 1017.6206418340031;
  val1.matrix[1][1] = 1176.8183051930305;

  val2.matrix[0][0] = 896.5064003364129;
  val2.matrix[0][1] = 849.8789633330174;
  val2.matrix[1][0] = 1042.6638513849537;
  val2.matrix[1][1] = 821.6436975165504;

  exp.matrix[0][0] = 1972.844023370968;
  exp.matrix[0][1] = 1862.7566082366102;
  exp.matrix[1][0] = 2060.284493218957;
  exp.matrix[1][1] = 1998.462002709581;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_282) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1005.4158535051104;
  val1.matrix[0][1] = 1150.911143834558;
  val1.matrix[1][0] = 989.2010346497666;
  val1.matrix[1][1] = 1131.3950276414607;

  val2.matrix[0][0] = 973.3393029122091;
  val2.matrix[0][1] = 873.9803675982137;
  val2.matrix[1][0] = 985.9357385843955;
  val2.matrix[1][1] = 856.0346653536542;

  exp.matrix[0][0] = 1978.7551564173195;
  exp.matrix[0][1] = 2024.8915114327717;
  exp.matrix[1][0] = 1975.136773234162;
  exp.matrix[1][1] = 1987.429692995115;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_283) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1041.9451610022418;
  val1.matrix[0][1] = 1026.064010926664;
  val1.matrix[0][2] = 1018.1153441009665;
  val1.matrix[1][0] = 940.0333294765246;
  val1.matrix[1][1] = 1009.2714951930304;
  val1.matrix[1][2] = 870.193841987805;
  val1.matrix[2][0] = 957.4686979919934;
  val1.matrix[2][1] = 830.2875146642933;
  val1.matrix[2][2] = 913.8773554396246;

  val2.matrix[0][0] = 978.7826751895208;
  val2.matrix[0][1] = 1100.7763254505862;
  val2.matrix[0][2] = 1031.1052991498755;
  val2.matrix[1][0] = 842.2529319641878;
  val2.matrix[1][1] = 1015.1841197370217;
  val2.matrix[1][2] = 933.414861495128;
  val2.matrix[2][0] = 943.461911648946;
  val2.matrix[2][1] = 982.4349015033343;
  val2.matrix[2][2] = 967.0497911536165;

  exp.matrix[0][0] = 2020.7278361917624;
  exp.matrix[0][1] = 2126.8403363772504;
  exp.matrix[0][2] = 2049.220643250842;
  exp.matrix[1][0] = 1782.2862614407125;
  exp.matrix[1][1] = 2024.455614930052;
  exp.matrix[1][2] = 1803.608703482933;
  exp.matrix[2][0] = 1900.9306096409396;
  exp.matrix[2][1] = 1812.7224161676277;
  exp.matrix[2][2] = 1880.927146593241;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_284) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 955.7312579288553;

  val2.matrix[0][0] = 1138.8098845526213;

  exp.matrix[0][0] = 2094.5411424814765;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_285) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1096.7015245016557;
  val1.matrix[0][1] = 1040.5412333290665;
  val1.matrix[1][0] = 1114.848475375968;
  val1.matrix[1][1] = 912.196202987211;
  val1.matrix[2][0] = 1014.2915989353803;
  val1.matrix[2][1] = 908.2580144294864;

  val2.matrix[0][0] = 951.0111596311866;
  val2.matrix[0][1] = 1247.037691757328;
  val2.matrix[1][0] = 797.313978925654;
  val2.matrix[1][1] = 928.5438143385254;
  val2.matrix[2][0] = 1088.658870449575;
  val2.matrix[2][1] = 932.9484515377305;

  exp.matrix[0][0] = 2047.7126841328422;
  exp.matrix[0][1] = 2287.5789250863945;
  exp.matrix[1][0] = 1912.1624543016221;
  exp.matrix[1][1] = 1840.7400173257365;
  exp.matrix[2][0] = 2102.9504693849553;
  exp.matrix[2][1] = 1841.206465967217;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_286) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 801.5709860695513;

  val2.matrix[0][0] = 956.9011740710689;

  exp.matrix[0][0] = 1758.4721601406202;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_287) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 857.2672631463257;
  val1.matrix[0][1] = 1006.845085592522;
  val1.matrix[0][2] = 1092.2810787037563;
  val1.matrix[1][0] = 914.9873063668678;
  val1.matrix[1][1] = 913.3091519642439;
  val1.matrix[1][2] = 1002.8974107728282;

  val2.matrix[0][0] = 994.1806609566529;
  val2.matrix[0][1] = 1092.9518115517183;
  val2.matrix[0][2] = 1206.8521059617456;
  val2.matrix[1][0] = 1177.0889080399738;
  val2.matrix[1][1] = 1033.051242015699;
  val2.matrix[1][2] = 1015.0863333543514;

  exp.matrix[0][0] = 1851.4479241029785;
  exp.matrix[0][1] = 2099.79689714424;
  exp.matrix[0][2] = 2299.133184665502;
  exp.matrix[1][0] = 2092.0762144068417;
  exp.matrix[1][1] = 1946.360393979943;
  exp.matrix[1][2] = 2017.9837441271795;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_288) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 885.0085534348461;
  val1.matrix[0][1] = 1060.5808915091675;

  val2.matrix[0][0] = 1085.3248078543118;
  val2.matrix[0][1] = 965.0109990006825;

  exp.matrix[0][0] = 1970.333361289158;
  exp.matrix[0][1] = 2025.5918905098501;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_289) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 901.8544815195338;
  val1.matrix[0][1] = 938.8996812834051;
  val1.matrix[0][2] = 1115.7444089272074;
  val1.matrix[1][0] = 1039.2528997148074;
  val1.matrix[1][1] = 1112.5244436738074;
  val1.matrix[1][2] = 931.7142882531372;

  val2.matrix[0][0] = 1144.521872763354;
  val2.matrix[0][1] = 1026.040640056642;
  val2.matrix[0][2] = 1070.4722726559878;
  val2.matrix[1][0] = 930.0974267185716;
  val2.matrix[1][1] = 943.6485006447928;
  val2.matrix[1][2] = 932.9661394398152;

  exp.matrix[0][0] = 2046.3763542828879;
  exp.matrix[0][1] = 1964.940321340047;
  exp.matrix[0][2] = 2186.216681583195;
  exp.matrix[1][0] = 1969.350326433379;
  exp.matrix[1][1] = 2056.1729443186;
  exp.matrix[1][2] = 1864.6804276929524;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_290) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1075.891753467423;
  val1.matrix[0][1] = 1004.4658858358919;
  val1.matrix[1][0] = 1061.5315459722278;
  val1.matrix[1][1] = 921.1627178709837;

  val2.matrix[0][0] = 983.22022484729;
  val2.matrix[0][1] = 1154.6446725928931;
  val2.matrix[1][0] = 963.0639371120303;
  val2.matrix[1][1] = 1221.15127962293;

  exp.matrix[0][0] = 2059.1119783147133;
  exp.matrix[0][1] = 2159.110558428785;
  exp.matrix[1][0] = 2024.5954830842581;
  exp.matrix[1][1] = 2142.3139974939136;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_291) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1039.381434907878;
  val1.matrix[1][0] = 870.9927845598327;

  val2.matrix[0][0] = 808.2491297893089;
  val2.matrix[1][0] = 877.4621451303057;

  exp.matrix[0][0] = 1847.6305646971869;
  exp.matrix[1][0] = 1748.4549296901382;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_292) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 800.7898997088112;
  val1.matrix[1][0] = 1050.817908637872;
  val1.matrix[2][0] = 1001.8388457670218;

  val2.matrix[0][0] = 1184.8310923942622;
  val2.matrix[1][0] = 1025.4925175155422;
  val2.matrix[2][0] = 1092.6902494784727;

  exp.matrix[0][0] = 1985.6209921030734;
  exp.matrix[1][0] = 2076.3104261534145;
  exp.matrix[2][0] = 2094.5290952454943;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_293) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 968.5494643632471;
  val1.matrix[0][1] = 861.2439719816524;
  val1.matrix[0][2] = 899.7054374901159;
  val1.matrix[1][0] = 907.2219455061509;
  val1.matrix[1][1] = 1201.0442874729047;
  val1.matrix[1][2] = 956.5130007898962;
  val1.matrix[2][0] = 1016.7664549099125;
  val1.matrix[2][1] = 1139.3743641779474;
  val1.matrix[2][2] = 959.2935645704748;

  val2.matrix[0][0] = 892.0650344285839;
  val2.matrix[0][1] = 1246.1049243492782;
  val2.matrix[0][2] = 1091.5388863475368;
  val2.matrix[1][0] = 936.042581708847;
  val2.matrix[1][1] = 859.3823870096555;
  val2.matrix[1][2] = 1022.0406072834809;
  val2.matrix[2][0] = 988.8530593018123;
  val2.matrix[2][1] = 927.0835362182058;
  val2.matrix[2][2] = 982.9107398360836;

  exp.matrix[0][0] = 1860.614498791831;
  exp.matrix[0][1] = 2107.3488963309305;
  exp.matrix[0][2] = 1991.2443238376527;
  exp.matrix[1][0] = 1843.264527214998;
  exp.matrix[1][1] = 2060.42667448256;
  exp.matrix[1][2] = 1978.553608073377;
  exp.matrix[2][0] = 2005.619514211725;
  exp.matrix[2][1] = 2066.4579003961535;
  exp.matrix[2][2] = 1942.2043044065585;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_294) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 857.2802711199668;
  val1.matrix[0][1] = 1172.0894578899465;
  val1.matrix[1][0] = 1097.8298622897232;
  val1.matrix[1][1] = 812.7533783274747;

  val2.matrix[0][0] = 880.261730396258;
  val2.matrix[0][1] = 921.8719689494599;
  val2.matrix[1][0] = 1001.7206846462384;
  val2.matrix[1][1] = 950.4285309552819;

  exp.matrix[0][0] = 1737.542001516225;
  exp.matrix[0][1] = 2093.961426839406;
  exp.matrix[1][0] = 2099.5505469359614;
  exp.matrix[1][1] = 1763.1819092827566;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_295) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1037.195826509387;
  val1.matrix[0][1] = 773.4156942634196;
  val1.matrix[0][2] = 913.9267521791326;
  val1.matrix[1][0] = 1058.001733890638;
  val1.matrix[1][1] = 1047.7733803311519;
  val1.matrix[1][2] = 890.1499204681237;
  val1.matrix[2][0] = 915.314981821225;
  val1.matrix[2][1] = 843.4444284579869;
  val1.matrix[2][2] = 977.1163001831636;

  val2.matrix[0][0] = 865.0547600780196;
  val2.matrix[0][1] = 1081.7885982915013;
  val2.matrix[0][2] = 1072.1095637272913;
  val2.matrix[1][0] = 1020.7709835313736;
  val2.matrix[1][1] = 812.290933894674;
  val2.matrix[1][2] = 963.1961815284701;
  val2.matrix[2][0] = 1021.3100472343855;
  val2.matrix[2][1] = 963.9636468233998;
  val2.matrix[2][2] = 1089.4566319611074;

  exp.matrix[0][0] = 1902.2505865874066;
  exp.matrix[0][1] = 1855.2042925549208;
  exp.matrix[0][2] = 1986.0363159064239;
  exp.matrix[1][0] = 2078.7727174220117;
  exp.matrix[1][1] = 1860.064314225826;
  exp.matrix[1][2] = 1853.346101996594;
  exp.matrix[2][0] = 1936.6250290556104;
  exp.matrix[2][1] = 1807.4080752813866;
  exp.matrix[2][2] = 2066.572932144271;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_296) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 853.5621001106516;
  val1.matrix[0][1] = 1002.8679145828592;
  val1.matrix[1][0] = 1090.7033326982053;
  val1.matrix[1][1] = 1114.6562235508213;

  val2.matrix[0][0] = 913.4745016225647;
  val2.matrix[0][1] = 1024.5941071956431;
  val2.matrix[1][0] = 1197.6907234805642;
  val2.matrix[1][1] = 1116.2070447413266;

  exp.matrix[0][0] = 1767.0366017332162;
  exp.matrix[0][1] = 2027.4620217785023;
  exp.matrix[1][0] = 2288.3940561787695;
  exp.matrix[1][1] = 2230.863268292148;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_297) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 940.0389293648676;

  val2.matrix[0][0] = 931.2514160102988;

  exp.matrix[0][0] = 1871.2903453751665;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_298) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1040.0797392089187;
  val1.matrix[0][1] = 944.9255951400069;
  val1.matrix[1][0] = 1044.201870210449;
  val1.matrix[1][1] = 960.4875267867479;
  val1.matrix[2][0] = 910.2639500200545;
  val1.matrix[2][1] = 966.2273136645632;

  val2.matrix[0][0] = 932.8551502999724;
  val2.matrix[0][1] = 1027.8735834626393;
  val2.matrix[1][0] = 853.6604893239236;
  val2.matrix[1][1] = 728.5191846151607;
  val2.matrix[2][0] = 1091.0765357311093;
  val2.matrix[2][1] = 930.3791681813124;

  exp.matrix[0][0] = 1972.934889508891;
  exp.matrix[0][1] = 1972.7991786026462;
  exp.matrix[1][0] = 1897.8623595343724;
  exp.matrix[1][1] = 1689.0067114019087;
  exp.matrix[2][0] = 2001.3404857511637;
  exp.matrix[2][1] = 1896.6064818458756;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_299) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1002.1722320783233;
  val1.matrix[0][1] = 984.1557983411302;

  val2.matrix[0][0] = 886.17922901531;
  val2.matrix[0][1] = 1093.489611262832;

  exp.matrix[0][0] = 1888.3514610936334;
  exp.matrix[0][1] = 2077.6454096039624;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_300) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 883.7996755800639;
  val1.matrix[1][0] = 1203.884323235668;

  val2.matrix[0][0] = 1259.1556951072107;
  val2.matrix[1][0] = 1068.4001274975017;

  exp.matrix[0][0] = 2142.955370687275;
  exp.matrix[1][0] = 2272.2844507331697;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_301) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1019.7112199442812;
  val1.matrix[0][1] = 881.4987485903051;
  val1.matrix[1][0] = 1020.8560059738026;
  val1.matrix[1][1] = 1139.4919302218257;

  val2.matrix[0][0] = 1118.2273666126741;
  val2.matrix[0][1] = 910.2900802181166;
  val2.matrix[1][0] = 823.1294387458312;
  val2.matrix[1][1] = 1021.3738475123532;

  exp.matrix[0][0] = 2137.938586556955;
  exp.matrix[0][1] = 1791.7888288084218;
  exp.matrix[1][0] = 1843.9854447196337;
  exp.matrix[1][1] = 2160.8657777341787;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_302) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1053.415005052613;
  val1.matrix[0][1] = 1134.338478862623;
  val1.matrix[1][0] = 1044.8784627532352;
  val1.matrix[1][1] = 849.0539694005447;

  val2.matrix[0][0] = 1068.8671639741199;
  val2.matrix[0][1] = 965.4627947330233;
  val2.matrix[1][0] = 941.4106725928873;
  val2.matrix[1][1] = 1077.706965009523;

  exp.matrix[0][0] = 2122.282169026733;
  exp.matrix[0][1] = 2099.8012735956463;
  exp.matrix[1][0] = 1986.2891353461225;
  exp.matrix[1][1] = 1926.7609344100676;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_303) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 953.072777879507;
  val1.matrix[0][1] = 1065.8490961417474;
  val1.matrix[0][2] = 883.2746847213941;

  val2.matrix[0][0] = 1045.7042058333543;
  val2.matrix[0][1] = 1013.8625414843492;
  val2.matrix[0][2] = 1062.7519360877377;

  exp.matrix[0][0] = 1998.7769837128612;
  exp.matrix[0][1] = 2079.7116376260965;
  exp.matrix[0][2] = 1946.0266208091318;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_304) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1065.1461606764963;
  val1.matrix[1][0] = 1331.214809043611;
  val1.matrix[2][0] = 981.7806847496391;

  val2.matrix[0][0] = 1134.911038415663;
  val2.matrix[1][0] = 857.3904017031302;
  val2.matrix[2][0] = 1013.0756691717436;

  exp.matrix[0][0] = 2200.057199092159;
  exp.matrix[1][0] = 2188.6052107467412;
  exp.matrix[2][0] = 1994.8563539213828;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_305) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 996.9623754776748;
  val1.matrix[1][0] = 1018.2825531321539;

  val2.matrix[0][0] = 1041.160530041576;
  val2.matrix[1][0] = 940.8905401182699;

  exp.matrix[0][0] = 2038.1229055192507;
  exp.matrix[1][0] = 1959.1730932504238;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_306) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1023.4948231359183;

  val2.matrix[0][0] = 773.8844777247667;

  exp.matrix[0][0] = 1797.379300860685;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_307) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1101.0322383945793;
  val1.matrix[0][1] = 942.186241112987;
  val1.matrix[0][2] = 1167.7152012599468;
  val1.matrix[1][0] = 793.0073752426871;
  val1.matrix[1][1] = 1103.7063745296023;
  val1.matrix[1][2] = 837.0072092922721;

  val2.matrix[0][0] = 1144.1327707116054;
  val2.matrix[0][1] = 1169.728742973039;
  val2.matrix[0][2] = 1112.321302575293;
  val2.matrix[1][0] = 841.3749293280375;
  val2.matrix[1][1] = 984.4226333570455;
  val2.matrix[1][2] = 959.896572204828;

  exp.matrix[0][0] = 2245.1650091061847;
  exp.matrix[0][1] = 2111.914984086026;
  exp.matrix[0][2] = 2280.0365038352397;
  exp.matrix[1][0] = 1634.3823045707245;
  exp.matrix[1][1] = 2088.1290078866477;
  exp.matrix[1][2] = 1796.9037814971002;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_308) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1065.5531976634804;
  val1.matrix[1][0] = 1157.5354149862717;

  val2.matrix[0][0] = 960.2481418726745;
  val2.matrix[1][0] = 1009.5309892490291;

  exp.matrix[0][0] = 2025.801339536155;
  exp.matrix[1][0] = 2167.066404235301;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_309) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 944.1384828626392;
  val1.matrix[1][0] = 853.4109194581772;
  val1.matrix[2][0] = 1024.437504722204;

  val2.matrix[0][0] = 1270.18812743221;
  val2.matrix[1][0] = 815.7288262227225;
  val2.matrix[2][0] = 1062.4609564582481;

  exp.matrix[0][0] = 2214.326610294849;
  exp.matrix[1][0] = 1669.1397456808998;
  exp.matrix[2][0] = 2086.898461180452;

  status = cmatrix_sum(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_310) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1012.7266538013531;
  val1.matrix[0][1] = 988.9178048462798;
  val1.matrix[0][2] = 947.0416533628019;

  val2.matrix[0][0] = 952.4447311958371;
  val2.matrix[0][1] = 1201.2674646777916;
  val2.matrix[0][2] = 1203.209716986901;

  exp.matrix[0][0] = 60.281922605516;
  exp.matrix[0][1] = -212.34965983151187;
  exp.matrix[0][2] = -256.1680636240991;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_311) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1000.366258539965;
  val1.matrix[1][0] = 977.9884581755634;

  val2.matrix[0][0] = 1051.1058556155565;
  val2.matrix[1][0] = 1240.1109371805715;

  exp.matrix[0][0] = -50.73959707559152;
  exp.matrix[1][0] = -262.122479005008;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_312) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1061.1836426860773;
  val1.matrix[0][1] = 1034.4577771330464;

  val2.matrix[0][0] = 970.5763632084105;
  val2.matrix[0][1] = 987.566231050032;

  exp.matrix[0][0] = 90.6072794776668;
  exp.matrix[0][1] = 46.89154608301442;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_313) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 969.8613435448943;

  val2.matrix[0][0] = 1005.1342990684539;

  exp.matrix[0][0] = -35.27295552355952;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_314) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1080.1192561740856;
  val1.matrix[1][0] = 845.8668372277426;

  val2.matrix[0][0] = 912.1045465543034;
  val2.matrix[1][0] = 1071.7259277330988;

  exp.matrix[0][0] = 168.01470961978225;
  exp.matrix[1][0] = -225.85909050535622;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_315) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 811.165464602447;
  val1.matrix[0][1] = 905.4132372396499;
  val1.matrix[0][2] = 1022.9758436174787;

  val2.matrix[0][0] = 1117.9171293230136;
  val2.matrix[0][1] = 1045.140276163139;
  val2.matrix[0][2] = 1070.7884679963602;

  exp.matrix[0][0] = -306.7516647205666;
  exp.matrix[0][1] = -139.7270389234892;
  exp.matrix[0][2] = -47.812624378881424;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_316) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 979.1364996536007;
  val1.matrix[0][1] = 936.0103221425909;
  val1.matrix[0][2] = 1021.3730184069029;
  val1.matrix[1][0] = 934.8187637274351;
  val1.matrix[1][1] = 1082.9119661480615;
  val1.matrix[1][2] = 1023.5316919671861;

  val2.matrix[0][0] = 1008.7338154311676;
  val2.matrix[0][1] = 911.9671427010444;
  val2.matrix[0][2] = 899.3223060331694;
  val2.matrix[1][0] = 1106.2026369352327;
  val2.matrix[1][1] = 1042.4004162843776;
  val2.matrix[1][2] = 920.3830122615058;

  exp.matrix[0][0] = -29.597315777566905;
  exp.matrix[0][1] = 24.0431794415465;
  exp.matrix[0][2] = 122.05071237373352;
  exp.matrix[1][0] = -171.3838732077976;
  exp.matrix[1][1] = 40.51154986368397;
  exp.matrix[1][2] = 103.14867970568037;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_317) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1299.3761357918997;

  val2.matrix[0][0] = 842.1797952496069;

  exp.matrix[0][0] = 457.1963405422929;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_318) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1034.562690564327;

  val2.matrix[0][0] = 888.1250000499804;

  exp.matrix[0][0] = 146.43769051434674;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_319) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1019.7370659282133;
  val1.matrix[0][1] = 1060.7502420189412;
  val1.matrix[0][2] = 1194.9471428211573;
  val1.matrix[1][0] = 991.0401177009776;
  val1.matrix[1][1] = 1108.2089006154706;
  val1.matrix[1][2] = 920.6750973462949;
  val1.matrix[2][0] = 1161.4974129093816;
  val1.matrix[2][1] = 1101.41238330937;
  val1.matrix[2][2] = 1074.783368354279;

  val2.matrix[0][0] = 1020.8271675702076;
  val2.matrix[0][1] = 948.0311752548026;
  val2.matrix[0][2] = 904.5522784832023;
  val2.matrix[1][0] = 1130.1142055402333;
  val2.matrix[1][1] = 944.5076736058687;
  val2.matrix[1][2] = 1048.3906172368065;
  val2.matrix[2][0] = 1045.7149789692544;
  val2.matrix[2][1] = 877.0623696602181;
  val2.matrix[2][2] = 947.7257620574508;

  exp.matrix[0][0] = -1.0901016419943517;
  exp.matrix[0][1] = 112.71906676413857;
  exp.matrix[0][2] = 290.394864337955;
  exp.matrix[1][0] = -139.07408783925575;
  exp.matrix[1][1] = 163.7012270096019;
  exp.matrix[1][2] = -127.71551989051159;
  exp.matrix[2][0] = 115.78243394012725;
  exp.matrix[2][1] = 224.35001364915183;
  exp.matrix[2][2] = 127.05760629682823;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_320) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1022.5342111852077;
  val1.matrix[0][1] = 775.8653622180815;

  val2.matrix[0][0] = 942.2049799907779;
  val2.matrix[0][1] = 922.0540108922552;

  exp.matrix[0][0] = 80.32923119442978;
  exp.matrix[0][1] = -146.1886486741737;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_321) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 993.6852774911453;
  val1.matrix[1][0] = 960.627924633213;
  val1.matrix[2][0] = 996.2861111007588;

  val2.matrix[0][0] = 1158.9941422401123;
  val2.matrix[1][0] = 957.401645462174;
  val2.matrix[2][0] = 1288.8376938495016;

  exp.matrix[0][0] = -165.30886474896704;
  exp.matrix[1][0] = 3.226279171038982;
  exp.matrix[2][0] = -292.5515827487428;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_322) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1003.8204979956556;
  val1.matrix[0][1] = 907.6470575329078;
  val1.matrix[1][0] = 965.051908776958;
  val1.matrix[1][1] = 923.6541503229889;
  val1.matrix[2][0] = 1003.8596625751286;
  val1.matrix[2][1] = 1005.591703650305;

  val2.matrix[0][0] = 1044.7000825936;
  val2.matrix[0][1] = 868.6453312381008;
  val2.matrix[1][0] = 958.9879696806287;
  val2.matrix[1][1] = 975.715816936505;
  val2.matrix[2][0] = 902.4666048975408;
  val2.matrix[2][1] = 1020.8378099051575;

  exp.matrix[0][0] = -40.87958459794436;
  exp.matrix[0][1] = 39.001726294806986;
  exp.matrix[1][0] = 6.063939096329364;
  exp.matrix[1][1] = -52.06166661351608;
  exp.matrix[2][0] = 101.39305767758776;
  exp.matrix[2][1] = -15.24610625485252;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_323) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1032.1831731438604;
  val1.matrix[1][0] = 1105.2040640288785;
  val1.matrix[2][0] = 708.7454494350584;

  val2.matrix[0][0] = 924.9954858162508;
  val2.matrix[1][0] = 1187.1894873498034;
  val2.matrix[2][0] = 1154.241547431271;

  exp.matrix[0][0] = 107.18768732760952;
  exp.matrix[1][0] = -81.98542332092484;
  exp.matrix[2][0] = -445.4960979962127;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_324) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 747.0956164974107;
  val1.matrix[0][1] = 1139.4261227499537;
  val1.matrix[1][0] = 969.4089858416373;
  val1.matrix[1][1] = 1053.1863172902283;
  val1.matrix[2][0] = 1021.9373891148161;
  val1.matrix[2][1] = 1043.54494579219;

  val2.matrix[0][0] = 1049.857991948017;
  val2.matrix[0][1] = 1039.2889452748238;
  val2.matrix[1][0] = 1032.962916447501;
  val2.matrix[1][1] = 1068.4161181070178;
  val2.matrix[2][0] = 1120.1914524459557;
  val2.matrix[2][1] = 927.9974268716713;

  exp.matrix[0][0] = -302.7623754506062;
  exp.matrix[0][1] = 100.13717747512987;
  exp.matrix[1][0] = -63.55393060586357;
  exp.matrix[1][1] = -15.22980081678952;
  exp.matrix[2][0] = -98.2540633311396;
  exp.matrix[2][1] = 115.54751892051866;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_325) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 905.9920725840702;
  val1.matrix[0][1] = 1166.4677744468866;

  val2.matrix[0][0] = 918.5297443824096;
  val2.matrix[0][1] = 912.0423082427657;

  exp.matrix[0][0] = -12.537671798339375;
  exp.matrix[0][1] = 254.42546620412088;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_326) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1021.3171786769889;

  val2.matrix[0][0] = 891.7672783097861;

  exp.matrix[0][0] = 129.54990036720278;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_327) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1120.0612273148306;
  val1.matrix[1][0] = 881.7672301007249;
  val1.matrix[2][0] = 1035.3728674748484;

  val2.matrix[0][0] = 1068.0156292960378;
  val2.matrix[1][0] = 1038.8015588062387;
  val2.matrix[2][0] = 962.2171459363834;

  exp.matrix[0][0] = 52.045598018792816;
  exp.matrix[1][0] = -157.03432870551387;
  exp.matrix[2][0] = 73.15572153846495;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_328) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 932.8320314884394;
  val1.matrix[0][1] = 1170.1621347020562;

  val2.matrix[0][0] = 1049.1072160838157;
  val2.matrix[0][1] = 1027.160628736659;

  exp.matrix[0][0] = -116.27518459537634;
  exp.matrix[0][1] = 143.0015059653972;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_329) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1154.2077278110762;
  val1.matrix[0][1] = 1029.0132376469255;
  val1.matrix[0][2] = 1062.3522812098158;

  val2.matrix[0][0] = 1110.807745902854;
  val2.matrix[0][1] = 823.9568780910042;
  val2.matrix[0][2] = 963.690451236561;

  exp.matrix[0][0] = 43.39998190822212;
  exp.matrix[0][1] = 205.0563595559213;
  exp.matrix[0][2] = 98.66182997325484;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_330) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1026.3647760258125;
  val1.matrix[0][1] = 1018.9664155059917;
  val1.matrix[1][0] = 1052.6270713420438;
  val1.matrix[1][1] = 1015.6899288488643;
  val1.matrix[2][0] = 933.7637509528927;
  val1.matrix[2][1] = 1006.683059849201;

  val2.matrix[0][0] = 987.0697811846929;
  val2.matrix[0][1] = 957.640046180693;
  val2.matrix[1][0] = 1021.6635390497075;
  val2.matrix[1][1] = 1145.1750497641274;
  val2.matrix[2][0] = 1071.8459250644773;
  val2.matrix[2][1] = 941.2621738388974;

  exp.matrix[0][0] = 39.294994841119546;
  exp.matrix[0][1] = 61.32636932529863;
  exp.matrix[1][0] = 30.963532292336254;
  exp.matrix[1][1] = -129.4851209152631;
  exp.matrix[2][0] = -138.08217411158466;
  exp.matrix[2][1] = 65.42088601030355;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_331) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 671.7072205702459;

  val2.matrix[0][0] = 1123.953661113862;

  exp.matrix[0][0] = -452.246440543616;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_332) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1036.1458496081464;
  val1.matrix[0][1] = 1103.344353100487;
  val1.matrix[1][0] = 998.7301999962772;
  val1.matrix[1][1] = 899.9542121129568;
  val1.matrix[2][0] = 943.5012889704561;
  val1.matrix[2][1] = 953.6023765478329;

  val2.matrix[0][0] = 957.3313952120897;
  val2.matrix[0][1] = 895.310039045828;
  val2.matrix[1][0] = 851.6269736540806;
  val2.matrix[1][1] = 1145.133093787607;
  val2.matrix[2][0] = 1031.1600924280235;
  val2.matrix[2][1] = 1236.9575757475925;

  exp.matrix[0][0] = 78.8144543960567;
  exp.matrix[0][1] = 208.03431405465903;
  exp.matrix[1][0] = 147.10322634219654;
  exp.matrix[1][1] = -245.17888167465026;
  exp.matrix[2][0] = -87.65880345756739;
  exp.matrix[2][1] = -283.35519919975957;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_333) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 882.7379661320185;
  val1.matrix[1][0] = 1028.5405426628956;
  val1.matrix[2][0] = 1014.8883130833298;

  val2.matrix[0][0] = 1203.1036023014817;
  val2.matrix[1][0] = 1025.089843271749;
  val2.matrix[2][0] = 998.3825690702838;

  exp.matrix[0][0] = -320.3656361694632;
  exp.matrix[1][0] = 3.4506993911465997;
  exp.matrix[2][0] = 16.505744013045955;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_334) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1034.5244043874186;

  val2.matrix[0][0] = 1031.2290777545861;

  exp.matrix[0][0] = 3.2953266328324844;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_335) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1055.6283956733514;
  val1.matrix[0][1] = 1038.718404535942;
  val1.matrix[0][2] = 1032.199438362051;
  val1.matrix[1][0] = 1045.1936262495622;
  val1.matrix[1][1] = 896.1700004046028;
  val1.matrix[1][2] = 996.7285329236788;
  val1.matrix[2][0] = 942.0135320420723;
  val1.matrix[2][1] = 1153.304565041305;
  val1.matrix[2][2] = 1118.918558393805;

  val2.matrix[0][0] = 975.2570712940694;
  val2.matrix[0][1] = 1078.2847361836093;
  val2.matrix[0][2] = 1092.1954900441715;
  val2.matrix[1][0] = 1125.7621185806975;
  val2.matrix[1][1] = 1092.765481050359;
  val2.matrix[1][2] = 1212.7563650292263;
  val2.matrix[2][0] = 986.0196626903245;
  val2.matrix[2][1] = 848.0388980399422;
  val2.matrix[2][2] = 970.7834613889188;

  exp.matrix[0][0] = 80.37132437928199;
  exp.matrix[0][1] = -39.56633164766731;
  exp.matrix[0][2] = -59.996051682120424;
  exp.matrix[1][0] = -80.5684923311353;
  exp.matrix[1][1] = -196.5954806457563;
  exp.matrix[1][2] = -216.02783210554753;
  exp.matrix[2][0] = -44.006130648252224;
  exp.matrix[2][1] = 305.2656670013629;
  exp.matrix[2][2] = 148.13509700488612;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_336) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 953.5357593142637;
  val1.matrix[0][1] = 914.9923274906482;
  val1.matrix[0][2] = 811.1257786001197;
  val1.matrix[1][0] = 951.4824967105366;
  val1.matrix[1][1] = 989.5839557554363;
  val1.matrix[1][2] = 1098.7670372100654;

  val2.matrix[0][0] = 1136.7408165788986;
  val2.matrix[0][1] = 1088.768346901081;
  val2.matrix[0][2] = 972.2147558696987;
  val2.matrix[1][0] = 862.0949326629632;
  val2.matrix[1][1] = 965.5382577904364;
  val2.matrix[1][2] = 952.8599139856387;

  exp.matrix[0][0] = -183.2050572646349;
  exp.matrix[0][1] = -173.7760194104328;
  exp.matrix[0][2] = -161.088977269579;
  exp.matrix[1][0] = 89.38756404757339;
  exp.matrix[1][1] = 24.045697964999817;
  exp.matrix[1][2] = 145.90712322442664;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_337) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 956.7215049581284;
  val1.matrix[1][0] = 1113.3442288589888;
  val1.matrix[2][0] = 958.2634498026537;

  val2.matrix[0][0] = 998.8423095490672;
  val2.matrix[1][0] = 841.2057082694654;
  val2.matrix[2][0] = 1052.228811727855;

  exp.matrix[0][0] = -42.12080459093875;
  exp.matrix[1][0] = 272.1385205895234;
  exp.matrix[2][0] = -93.96536192520125;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_338) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 965.4229212725327;
  val1.matrix[0][1] = 896.532632883762;
  val1.matrix[0][2] = 982.8817573955141;

  val2.matrix[0][0] = 1067.62303571965;
  val2.matrix[0][1] = 1048.6260077943214;
  val2.matrix[0][2] = 1069.3303015526008;

  exp.matrix[0][0] = -102.20011444711736;
  exp.matrix[0][1] = -152.09337491055942;
  exp.matrix[0][2] = -86.44854415708664;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_339) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 926.1410555793466;

  val2.matrix[0][0] = 1190.648356728146;

  exp.matrix[0][0] = -264.50730114879934;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_340) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 989.3532563365834;
  val1.matrix[0][1] = 801.0520783092687;
  val1.matrix[0][2] = 1040.7636031855811;
  val1.matrix[1][0] = 875.1493007957633;
  val1.matrix[1][1] = 970.4528429253245;
  val1.matrix[1][2] = 894.3726662428339;
  val1.matrix[2][0] = 1017.747566037959;
  val1.matrix[2][1] = 1037.1161034617087;
  val1.matrix[2][2] = 1128.38781462346;

  val2.matrix[0][0] = 1059.0035037674568;
  val2.matrix[0][1] = 1008.3376030010899;
  val2.matrix[0][2] = 1170.2336559988748;
  val2.matrix[1][0] = 1108.9886814962576;
  val2.matrix[1][1] = 1173.1096705399113;
  val2.matrix[1][2] = 1040.8515553468192;
  val2.matrix[2][0] = 1083.5232683669753;
  val2.matrix[2][1] = 1021.2681883393043;
  val2.matrix[2][2] = 1115.640124723984;

  exp.matrix[0][0] = -69.65024743087338;
  exp.matrix[0][1] = -207.28552469182114;
  exp.matrix[0][2] = -129.4700528132937;
  exp.matrix[1][0] = -233.8393807004943;
  exp.matrix[1][1] = -202.65682761458686;
  exp.matrix[1][2] = -146.47888910398524;
  exp.matrix[2][0] = -65.77570232901633;
  exp.matrix[2][1] = 15.847915122404402;
  exp.matrix[2][2] = 12.747689899475972;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_341) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 853.3278412289808;
  val1.matrix[0][1] = 1114.4334049140905;
  val1.matrix[0][2] = 1036.1217565705795;

  val2.matrix[0][0] = 1118.768466656952;
  val2.matrix[0][1] = 996.2786726760833;
  val2.matrix[0][2] = 1116.451190764923;

  exp.matrix[0][0] = -265.4406254279711;
  exp.matrix[0][1] = 118.15473223800723;
  exp.matrix[0][2] = -80.32943419434355;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_342) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1057.04304688438;

  val2.matrix[0][0] = 921.3495530546835;

  exp.matrix[0][0] = 135.69349382969642;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_343) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1200.3446550129179;
  val1.matrix[0][1] = 1068.88404909128;
  val1.matrix[1][0] = 984.9395352218359;
  val1.matrix[1][1] = 963.3898639115409;

  val2.matrix[0][0] = 1085.3065299503983;
  val2.matrix[0][1] = 1063.5649776096845;
  val2.matrix[1][0] = 875.9517917117273;
  val2.matrix[1][1] = 876.8157393071757;

  exp.matrix[0][0] = 115.03812506251961;
  exp.matrix[0][1] = 5.319071481595529;
  exp.matrix[1][0] = 108.98774351010854;
  exp.matrix[1][1] = 86.57412460436524;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_344) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 999.7502832058572;
  val1.matrix[0][1] = 938.408786532896;
  val1.matrix[0][2] = 1047.837121219099;
  val1.matrix[1][0] = 1285.0455917707936;
  val1.matrix[1][1] = 987.7349547607935;
  val1.matrix[1][2] = 992.8510290279283;

  val2.matrix[0][0] = 1071.0474843143725;
  val2.matrix[0][1] = 1032.249815140166;
  val2.matrix[0][2] = 947.4873073554598;
  val2.matrix[1][0] = 1046.6912422259124;
  val2.matrix[1][1] = 903.7012291315773;
  val2.matrix[1][2] = 1046.4026771080157;

  exp.matrix[0][0] = -71.29720110851531;
  exp.matrix[0][1] = -93.84102860727;
  exp.matrix[0][2] = 100.34981386363904;
  exp.matrix[1][0] = 238.3543495448812;
  exp.matrix[1][1] = 84.03372562921618;
  exp.matrix[1][2] = -53.551648080087375;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_345) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1000.1926643622455;
  val1.matrix[1][0] = 1220.2075270115042;
  val1.matrix[2][0] = 869.5691675325684;

  val2.matrix[0][0] = 938.2200933755457;
  val2.matrix[1][0] = 1033.7387427724414;
  val2.matrix[2][0] = 1055.984046613857;

  exp.matrix[0][0] = 61.97257098669979;
  exp.matrix[1][0] = 186.46878423906287;
  exp.matrix[2][0] = -186.41487908128852;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_346) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 959.1974647452603;
  val1.matrix[0][1] = 858.0673688637589;
  val1.matrix[1][0] = 1051.5693601296457;
  val1.matrix[1][1] = 1015.330669682726;

  val2.matrix[0][0] = 1209.0151583044164;
  val2.matrix[0][1] = 863.31407676553;
  val2.matrix[1][0] = 1053.9494160820964;
  val2.matrix[1][1] = 929.4601664869184;

  exp.matrix[0][0] = -249.81769355915617;
  exp.matrix[0][1] = -5.24670790177106;
  exp.matrix[1][0] = -2.3800559524506752;
  exp.matrix[1][1] = 85.8705031958076;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_347) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1115.565953497487;
  val1.matrix[0][1] = 1072.022825958089;

  val2.matrix[0][0] = 1009.3860502383662;
  val2.matrix[0][1] = 937.8429792678315;

  exp.matrix[0][0] = 106.1799032591208;
  exp.matrix[0][1] = 134.17984669025748;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_348) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1118.6619000203668;

  val2.matrix[0][0] = 970.7362245725701;

  exp.matrix[0][0] = 147.92567544779672;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_349) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 986.629207189554;
  val1.matrix[0][1] = 882.2526946456105;
  val1.matrix[0][2] = 1049.0284637726174;

  val2.matrix[0][0] = 1003.9202749010578;
  val2.matrix[0][1] = 960.1205362834795;
  val2.matrix[0][2] = 1016.321695663172;

  exp.matrix[0][0] = -17.291067711503842;
  exp.matrix[0][1] = -77.86784163786899;
  exp.matrix[0][2] = 32.70676810944542;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_350) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1035.954896144775;

  val2.matrix[0][0] = 929.8333265982646;

  exp.matrix[0][0] = 106.12156954651027;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_351) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1150.3196292428743;
  val1.matrix[1][0] = 1091.147458918639;

  val2.matrix[0][0] = 816.9496259781959;
  val2.matrix[1][0] = 1025.6596094224612;

  exp.matrix[0][0] = 333.3700032646784;
  exp.matrix[1][0] = 65.48784949617766;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_352) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 979.1243350041548;
  val1.matrix[0][1] = 928.868730621148;

  val2.matrix[0][0] = 1000.3229092206992;
  val2.matrix[0][1] = 703.6348775564204;

  exp.matrix[0][0] = -21.198574216544444;
  exp.matrix[0][1] = 225.23385306472755;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_353) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1012.0409104836359;
  val1.matrix[0][1] = 744.4404394021317;
  val1.matrix[0][2] = 998.5229429582834;
  val1.matrix[1][0] = 1075.3155667075669;
  val1.matrix[1][1] = 1160.3398051638565;
  val1.matrix[1][2] = 1013.6594751852272;
  val1.matrix[2][0] = 893.8904718750539;
  val1.matrix[2][1] = 1101.1146363012301;
  val1.matrix[2][2] = 1052.5055970763335;

  val2.matrix[0][0] = 1245.0408151450383;
  val2.matrix[0][1] = 925.7414250254907;
  val2.matrix[0][2] = 913.3273240400648;
  val2.matrix[1][0] = 839.0069689920326;
  val2.matrix[1][1] = 909.1717778796126;
  val2.matrix[1][2] = 1150.8764975555707;
  val2.matrix[2][0] = 946.8449775148057;
  val2.matrix[2][1] = 1114.5392793739327;
  val2.matrix[2][2] = 938.8340256390719;

  exp.matrix[0][0] = -232.9999046614024;
  exp.matrix[0][1] = -181.300985623359;
  exp.matrix[0][2] = 85.19561891821854;
  exp.matrix[1][0] = 236.30859771553423;
  exp.matrix[1][1] = 251.16802728424386;
  exp.matrix[1][2] = -137.21702237034356;
  exp.matrix[2][0] = -52.9545056397518;
  exp.matrix[2][1] = -13.424643072702565;
  exp.matrix[2][2] = 113.6715714372616;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_354) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 996.7543687382594;
  val1.matrix[0][1] = 864.898627137352;
  val1.matrix[0][2] = 851.6673828530043;
  val1.matrix[1][0] = 1068.1073568356107;
  val1.matrix[1][1] = 968.5735927106543;
  val1.matrix[1][2] = 1044.1107959741441;

  val2.matrix[0][0] = 1126.9736591585813;
  val2.matrix[0][1] = 1008.1480860708266;
  val2.matrix[0][2] = 1076.7665510848335;
  val2.matrix[1][0] = 983.524464160147;
  val2.matrix[1][1] = 968.1816120595415;
  val2.matrix[1][2] = 919.5349547799889;

  exp.matrix[0][0] = -130.21929042032195;
  exp.matrix[0][1] = -143.24945893347456;
  exp.matrix[0][2] = -225.09916823182925;
  exp.matrix[1][0] = 84.58289267546377;
  exp.matrix[1][1] = 0.3919806511128172;
  exp.matrix[1][2] = 124.57584119415526;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_355) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1053.8988757068917;
  val1.matrix[0][1] = 915.0889042722704;

  val2.matrix[0][0] = 1145.5651192843477;
  val2.matrix[0][1] = 1113.3999201636636;

  exp.matrix[0][0] = -91.66624357745604;
  exp.matrix[0][1] = -198.31101589139325;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_356) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1062.5099309042557;
  val1.matrix[0][1] = 836.0354974683763;

  val2.matrix[0][0] = 1020.3319926789045;
  val2.matrix[0][1] = 897.7302685043231;

  exp.matrix[0][0] = 42.17793822535123;
  exp.matrix[0][1] = -61.694771035946815;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_357) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 939.6995066097307;
  val1.matrix[0][1] = 1018.4926493334768;
  val1.matrix[1][0] = 1097.100777461518;
  val1.matrix[1][1] = 1108.7891185456847;

  val2.matrix[0][0] = 917.15983726244;
  val2.matrix[0][1] = 968.3293493075472;
  val2.matrix[1][0] = 955.2628724656065;
  val2.matrix[1][1] = 1029.0525632010551;

  exp.matrix[0][0] = 22.539669347290783;
  exp.matrix[0][1] = 50.16330002592963;
  exp.matrix[1][0] = 141.83790499591146;
  exp.matrix[1][1] = 79.73655534462955;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_358) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 781.1418035395807;
  val1.matrix[0][1] = 941.5300318117064;
  val1.matrix[0][2] = 1030.035625197359;
  val1.matrix[1][0] = 1051.385526979046;
  val1.matrix[1][1] = 1100.7649379628092;
  val1.matrix[1][2] = 1052.904619261159;

  val2.matrix[0][0] = 1173.9688457270258;
  val2.matrix[0][1] = 1078.9597129368042;
  val2.matrix[0][2] = 1139.7522392591532;
  val2.matrix[1][0] = 811.9894143961321;
  val2.matrix[1][1] = 866.8216685233592;
  val2.matrix[1][2] = 979.3189240715035;

  exp.matrix[0][0] = -392.82704218744516;
  exp.matrix[0][1] = -137.42968112509777;
  exp.matrix[0][2] = -109.71661406179419;
  exp.matrix[1][0] = 239.39611258291393;
  exp.matrix[1][1] = 233.94326943944998;
  exp.matrix[1][2] = 73.58569518965555;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_359) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1015.320516292501;
  val1.matrix[1][0] = 1003.8892109369331;
  val1.matrix[2][0] = 978.6704829603373;

  val2.matrix[0][0] = 1162.5201863222203;
  val2.matrix[1][0] = 1133.9244570280846;
  val2.matrix[2][0] = 1007.7491261411948;

  exp.matrix[0][0] = -147.1996700297193;
  exp.matrix[1][0] = -130.03524609115152;
  exp.matrix[2][0] = -29.07864318085751;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_360) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1108.7556177776275;
  val1.matrix[0][1] = 980.7295820071912;
  val1.matrix[0][2] = 929.9731653510744;
  val1.matrix[1][0] = 798.6990403784796;
  val1.matrix[1][1] = 850.6191928445553;
  val1.matrix[1][2] = 1097.2971405808198;

  val2.matrix[0][0] = 1061.2743140294658;
  val2.matrix[0][1] = 959.8721639283822;
  val2.matrix[0][2] = 918.0340807297262;
  val2.matrix[1][0] = 1105.621409190946;
  val2.matrix[1][1] = 848.0956196717568;
  val2.matrix[1][2] = 929.3483734728195;

  exp.matrix[0][0] = 47.481303748161736;
  exp.matrix[0][1] = 20.85741807880902;
  exp.matrix[0][2] = 11.93908462134823;
  exp.matrix[1][0] = -306.9223688124664;
  exp.matrix[1][1] = 2.5235731727984785;
  exp.matrix[1][2] = 167.9487671080003;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_361) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1123.0624152971004;
  val1.matrix[0][1] = 962.3679915471373;
  val1.matrix[1][0] = 1065.4924640153145;
  val1.matrix[1][1] = 771.8632998287994;
  val1.matrix[2][0] = 1044.656043470759;
  val1.matrix[2][1] = 1192.3050755158793;

  val2.matrix[0][0] = 925.252219168759;
  val2.matrix[0][1] = 1018.1514319124966;
  val2.matrix[1][0] = 1136.1809135692527;
  val2.matrix[1][1] = 1058.3537702152396;
  val2.matrix[2][0] = 965.1819041956992;
  val2.matrix[2][1] = 994.9524558389812;

  exp.matrix[0][0] = 197.81019612834143;
  exp.matrix[0][1] = -55.7834403653593;
  exp.matrix[1][0] = -70.6884495539382;
  exp.matrix[1][1] = -286.49047038644017;
  exp.matrix[2][0] = 79.47413927505977;
  exp.matrix[2][1] = 197.35261967689803;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_362) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1022.2368640736024;
  val1.matrix[0][1] = 1036.1852339807022;
  val1.matrix[0][2] = 1006.9432076639846;
  val1.matrix[1][0] = 921.8950304282912;
  val1.matrix[1][1] = 997.8776264831915;
  val1.matrix[1][2] = 888.7023557381428;

  val2.matrix[0][0] = 925.2341463284254;
  val2.matrix[0][1] = 1103.2312975831017;
  val2.matrix[0][2] = 879.3072954579008;
  val2.matrix[1][0] = 911.220617064139;
  val2.matrix[1][1] = 1024.3295457468105;
  val2.matrix[1][2] = 994.0517323914452;

  exp.matrix[0][0] = 97.00271774517705;
  exp.matrix[0][1] = -67.0460636023995;
  exp.matrix[0][2] = 127.63591220608384;
  exp.matrix[1][0] = 10.674413364152201;
  exp.matrix[1][1] = -26.451919263618947;
  exp.matrix[1][2] = -105.34937665330233;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_363) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 941.6423005459809;
  val1.matrix[0][1] = 935.3602972665208;
  val1.matrix[0][2] = 1085.5717464209986;
  val1.matrix[1][0] = 934.1761711234119;
  val1.matrix[1][1] = 1187.727728950634;
  val1.matrix[1][2] = 930.9314177408154;

  val2.matrix[0][0] = 845.9393431601843;
  val2.matrix[0][1] = 928.3770019982863;
  val2.matrix[0][2] = 951.157436567345;
  val2.matrix[1][0] = 1056.3649393169278;
  val2.matrix[1][1] = 860.3474731519784;
  val2.matrix[1][2] = 1145.4083530471755;

  exp.matrix[0][0] = 95.7029573857966;
  exp.matrix[0][1] = 6.9832952682344285;
  exp.matrix[0][2] = 134.41430985365355;
  exp.matrix[1][0] = -122.1887681935159;
  exp.matrix[1][1] = 327.3802557986555;
  exp.matrix[1][2] = -214.47693530636013;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_364) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 754.4195843120034;
  val1.matrix[1][0] = 931.9971696675642;
  val1.matrix[2][0] = 1014.3144805322455;

  val2.matrix[0][0] = 1040.173161352604;
  val2.matrix[1][0] = 1041.4476978012128;
  val2.matrix[2][0] = 893.8569281276881;

  exp.matrix[0][0] = -285.7535770406006;
  exp.matrix[1][0] = -109.45052813364862;
  exp.matrix[2][0] = 120.45755240455742;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_365) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 994.4879735050871;
  val1.matrix[1][0] = 914.8906665006068;
  val1.matrix[2][0] = 1162.9252229216868;

  val2.matrix[0][0] = 898.1032170335351;
  val2.matrix[1][0] = 969.5981261384372;
  val2.matrix[2][0] = 1097.8983153266342;

  exp.matrix[0][0] = 96.38475647155201;
  exp.matrix[1][0] = -54.707459637830425;
  exp.matrix[2][0] = 65.02690759505253;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_366) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 944.4124037791937;
  val1.matrix[0][1] = 892.6615949793727;

  val2.matrix[0][0] = 1277.518309066736;
  val2.matrix[0][1] = 948.2807605899277;

  exp.matrix[0][0] = -333.1059052875423;
  exp.matrix[0][1] = -55.619165610555;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_367) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 810.8119763798607;
  val1.matrix[1][0] = 873.1104841688161;
  val1.matrix[2][0] = 1165.4050076953397;

  val2.matrix[0][0] = 939.4637407816933;
  val2.matrix[1][0] = 816.4286258080479;
  val2.matrix[2][0] = 1100.7091975069936;

  exp.matrix[0][0] = -128.65176440183268;
  exp.matrix[1][0] = 56.681858360768274;
  exp.matrix[2][0] = 64.69581018834606;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_368) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 875.5959913432187;
  val1.matrix[0][1] = 889.4313522730719;
  val1.matrix[0][2] = 927.2075981524346;

  val2.matrix[0][0] = 1027.8588088469837;
  val2.matrix[0][1] = 1027.4472866564272;
  val2.matrix[0][2] = 946.688373245572;

  exp.matrix[0][0] = -152.26281750376506;
  exp.matrix[0][1] = -138.01593438335533;
  exp.matrix[0][2] = -19.48077509313748;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_369) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 955.091610080281;

  val2.matrix[0][0] = 1031.155979655028;

  exp.matrix[0][0] = -76.06436957474693;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_370) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 676.6706865032959;
  val1.matrix[1][0] = 1032.3567611148562;
  val1.matrix[2][0] = 929.4522888940098;

  val2.matrix[0][0] = 1112.9813591738161;
  val2.matrix[1][0] = 918.6590748690769;
  val2.matrix[2][0] = 824.11116423822;

  exp.matrix[0][0] = -436.31067267052026;
  exp.matrix[1][0] = 113.69768624577932;
  exp.matrix[2][0] = 105.34112465578983;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_371) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1068.8083901499656;
  val1.matrix[0][1] = 1018.4845348633592;
  val1.matrix[0][2] = 901.5406859124577;

  val2.matrix[0][0] = 1015.1324203129623;
  val2.matrix[0][1] = 1002.039360042817;
  val2.matrix[0][2] = 925.3442179369166;

  exp.matrix[0][0] = 53.67596983700332;
  exp.matrix[0][1] = 16.445174820542206;
  exp.matrix[0][2] = -23.803532024458946;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_372) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1147.5218577622375;
  val1.matrix[1][0] = 927.7695689441741;

  val2.matrix[0][0] = 1054.0010782885827;
  val2.matrix[1][0] = 962.9981926407825;

  exp.matrix[0][0] = 93.52077947365478;
  exp.matrix[1][0] = -35.22862369660834;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_373) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1013.1956702875792;
  val1.matrix[1][0] = 1088.2027929852777;
  val1.matrix[2][0] = 1062.0122114074136;

  val2.matrix[0][0] = 983.5828038294432;
  val2.matrix[1][0] = 820.1430033360009;
  val2.matrix[2][0] = 877.3940918601897;

  exp.matrix[0][0] = 29.612866458136068;
  exp.matrix[1][0] = 268.0597896492768;
  exp.matrix[2][0] = 184.61811954722384;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_374) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 913.1334300920037;
  val1.matrix[0][1] = 942.4715764199333;
  val1.matrix[1][0] = 901.9183586668937;
  val1.matrix[1][1] = 1065.9402541531783;

  val2.matrix[0][0] = 924.7776875754676;
  val2.matrix[0][1] = 1068.4437417216616;
  val2.matrix[1][0] = 1132.1428434699274;
  val2.matrix[1][1] = 985.3957333423342;

  exp.matrix[0][0] = -11.644257483463889;
  exp.matrix[0][1] = -125.9721653017283;
  exp.matrix[1][0] = -230.22448480303365;
  exp.matrix[1][1] = 80.54452081084412;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_375) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1028.7943596101654;
  val1.matrix[0][1] = 1085.9277131754488;

  val2.matrix[0][0] = 1004.1792098968831;
  val2.matrix[0][1] = 1070.0884493861374;

  exp.matrix[0][0] = 24.615149713282335;
  exp.matrix[0][1] = 15.839263789311417;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_376) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 798.6867743955365;
  val1.matrix[0][1] = 972.2935610441017;

  val2.matrix[0][0] = 993.2338931417966;
  val2.matrix[0][1] = 887.9375030803456;

  exp.matrix[0][0] = -194.54711874626003;
  exp.matrix[0][1] = 84.35605796375614;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_377) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 862.1313618714321;

  val2.matrix[0][0] = 1104.239449439361;

  exp.matrix[0][0] = -242.1080875679288;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_378) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 871.4367691091335;
  val1.matrix[0][1] = 1085.675973198887;
  val1.matrix[0][2] = 1035.148548802795;
  val1.matrix[1][0] = 1143.1880291288062;
  val1.matrix[1][1] = 812.5857861966895;
  val1.matrix[1][2] = 1020.4853151379962;

  val2.matrix[0][0] = 1058.114633681557;
  val2.matrix[0][1] = 986.381012044732;
  val2.matrix[0][2] = 892.9308775162093;
  val2.matrix[1][0] = 893.0298308254547;
  val2.matrix[1][1] = 903.5095328236775;
  val2.matrix[1][2] = 1103.3116488921416;

  exp.matrix[0][0] = -186.67786457242357;
  exp.matrix[0][1] = 99.29496115415509;
  exp.matrix[0][2] = 142.21767128658564;
  exp.matrix[1][0] = 250.15819830335147;
  exp.matrix[1][1] = -90.92374662698808;
  exp.matrix[1][2] = -82.82633375414548;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_379) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 905.9657116730599;

  val2.matrix[0][0] = 1033.7896955916738;

  exp.matrix[0][0] = -127.82398391861386;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_380) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 972.7529792855049;
  val1.matrix[1][0] = 1003.5800295455279;
  val1.matrix[2][0] = 872.6900358604224;

  val2.matrix[0][0] = 921.3556075255665;
  val2.matrix[1][0] = 1040.7334668812862;
  val2.matrix[2][0] = 1066.4831201344448;

  exp.matrix[0][0] = 51.39737175993844;
  exp.matrix[1][0] = -37.153437335758326;
  exp.matrix[2][0] = -193.79308427402236;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_381) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 997.2707084656109;
  val1.matrix[0][1] = 1071.4903393990514;
  val1.matrix[0][2] = 896.1372992496138;
  val1.matrix[1][0] = 1120.388016286581;
  val1.matrix[1][1] = 1038.091388747327;
  val1.matrix[1][2] = 941.4730481923884;

  val2.matrix[0][0] = 955.2501760108885;
  val2.matrix[0][1] = 1135.9527750654236;
  val2.matrix[0][2] = 874.1029831910489;
  val2.matrix[1][0] = 1071.0928889252762;
  val2.matrix[1][1] = 1099.8703070881984;
  val2.matrix[1][2] = 1013.9287647227566;

  exp.matrix[0][0] = 42.020532454722456;
  exp.matrix[0][1] = -64.46243566637213;
  exp.matrix[0][2] = 22.034316058564855;
  exp.matrix[1][0] = 49.29512736130482;
  exp.matrix[1][1] = -61.778918340871314;
  exp.matrix[1][2] = -72.45571653036814;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_382) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 987.4474476704823;
  val1.matrix[0][1] = 840.5224047760146;
  val1.matrix[0][2] = 985.0810991052257;

  val2.matrix[0][0] = 930.1705961021933;
  val2.matrix[0][1] = 1006.1535972906006;
  val2.matrix[0][2] = 927.8339891186888;

  exp.matrix[0][0] = 57.27685156828909;
  exp.matrix[0][1] = -165.63119251458602;
  exp.matrix[0][2] = 57.247109986536884;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_383) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 980.2317688439497;
  val1.matrix[0][1] = 946.5172194553611;
  val1.matrix[0][2] = 1038.0221840418938;
  val1.matrix[1][0] = 1041.101575166715;
  val1.matrix[1][1] = 893.4087987442905;
  val1.matrix[1][2] = 898.4569728335448;
  val1.matrix[2][0] = 1197.8674931831742;
  val1.matrix[2][1] = 919.976199255615;
  val1.matrix[2][2] = 864.3430992351722;

  val2.matrix[0][0] = 764.9622589709262;
  val2.matrix[0][1] = 909.0348940711509;
  val2.matrix[0][2] = 1070.6946740320961;
  val2.matrix[1][0] = 961.0451090507197;
  val2.matrix[1][1] = 1121.611708904787;
  val2.matrix[1][2] = 883.9710972853552;
  val2.matrix[2][0] = 1004.6773995331295;
  val2.matrix[2][1] = 1136.7424987668016;
  val2.matrix[2][2] = 908.1441300145211;

  exp.matrix[0][0] = 215.26950987302348;
  exp.matrix[0][1] = 37.482325384210185;
  exp.matrix[0][2] = -32.67248999020239;
  exp.matrix[1][0] = 80.05646611599536;
  exp.matrix[1][1] = -228.20291016049657;
  exp.matrix[1][2] = 14.485875548189597;
  exp.matrix[2][0] = 193.1900936500448;
  exp.matrix[2][1] = -216.76629951118662;
  exp.matrix[2][2] = -43.801030779348935;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_384) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 952.9184901378133;
  val1.matrix[0][1] = 1175.6914791814245;
  val1.matrix[1][0] = 934.7950321400247;
  val1.matrix[1][1] = 1039.6147671078115;

  val2.matrix[0][0] = 963.8928167560413;
  val2.matrix[0][1] = 1039.9949108246096;
  val2.matrix[1][0] = 1041.6707230471407;
  val2.matrix[1][1] = 1151.0374636432714;

  exp.matrix[0][0] = -10.97432661822802;
  exp.matrix[0][1] = 135.69656835681485;
  exp.matrix[1][0] = -106.875690907116;
  exp.matrix[1][1] = -111.42269653545986;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_385) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 907.7811170517436;
  val1.matrix[0][1] = 927.720323595814;
  val1.matrix[0][2] = 1035.0194505470197;
  val1.matrix[1][0] = 877.9264349260602;
  val1.matrix[1][1] = 822.0073690881118;
  val1.matrix[1][2] = 1022.7089503690446;

  val2.matrix[0][0] = 886.3794343728457;
  val2.matrix[0][1] = 934.1141110709304;
  val2.matrix[0][2] = 1063.968287889477;
  val2.matrix[1][0] = 1200.4051531330406;
  val2.matrix[1][1] = 1131.9158843303046;
  val2.matrix[1][2] = 853.835705961081;

  exp.matrix[0][0] = 21.40168267889794;
  exp.matrix[0][1] = -6.393787475116483;
  exp.matrix[0][2] = -28.94883734245741;
  exp.matrix[1][0] = -322.4787182069804;
  exp.matrix[1][1] = -309.90851524219283;
  exp.matrix[1][2] = 168.87324440796363;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_386) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1131.5767655247757;
  val1.matrix[1][0] = 1060.3506850752663;

  val2.matrix[0][0] = 1032.1897724741552;
  val2.matrix[1][0] = 953.3715763064241;

  exp.matrix[0][0] = 99.3869930506205;
  exp.matrix[1][0] = 106.97910876884214;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_387) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 980.6045503409807;
  val1.matrix[0][1] = 1086.776952251812;
  val1.matrix[0][2] = 910.0890338675131;

  val2.matrix[0][0] = 1015.1263952469048;
  val2.matrix[0][1] = 895.7566119762113;
  val2.matrix[0][2] = 1072.8128572820344;

  exp.matrix[0][0] = -34.52184490592413;
  exp.matrix[0][1] = 191.0203402756007;
  exp.matrix[0][2] = -162.72382341452135;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_388) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 992.2910469863122;
  val1.matrix[0][1] = 1245.6539561144132;
  val1.matrix[0][2] = 1201.4028680029874;

  val2.matrix[0][0] = 887.2594694667507;
  val2.matrix[0][1] = 947.1031566236883;
  val2.matrix[0][2] = 967.5032650315281;

  exp.matrix[0][0] = 105.03157751956144;
  exp.matrix[0][1] = 298.5507994907249;
  exp.matrix[0][2] = 233.89960297145922;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_389) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1027.410485721536;
  val1.matrix[0][1] = 847.4076419883111;
  val1.matrix[1][0] = 883.6002840661238;
  val1.matrix[1][1] = 948.8688566568467;

  val2.matrix[0][0] = 983.3497842616217;
  val2.matrix[0][1] = 1056.0523485571027;
  val2.matrix[1][0] = 926.5614381999635;
  val2.matrix[1][1] = 909.1188212778211;

  exp.matrix[0][0] = 44.060701459914185;
  exp.matrix[0][1] = -208.64470656879166;
  exp.matrix[1][0] = -42.96115413383973;
  exp.matrix[1][1] = 39.750035379025576;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_390) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1093.8300398225315;
  val1.matrix[0][1] = 897.1508398919223;
  val1.matrix[1][0] = 954.9806344243814;
  val1.matrix[1][1] = 1021.1118878300541;
  val1.matrix[2][0] = 934.0617453037069;
  val1.matrix[2][1] = 969.3751500518437;

  val2.matrix[0][0] = 1090.027356851624;
  val2.matrix[0][1] = 962.5254931541032;
  val2.matrix[1][0] = 892.2341441579647;
  val2.matrix[1][1] = 1097.866865300233;
  val2.matrix[2][0] = 1100.020525938926;
  val2.matrix[2][1] = 920.5255278944652;

  exp.matrix[0][0] = 3.8026829709074264;
  exp.matrix[0][1] = -65.37465326218091;
  exp.matrix[1][0] = 62.746490266416686;
  exp.matrix[1][1] = -76.75497747017891;
  exp.matrix[2][0] = -165.95878063521923;
  exp.matrix[2][1] = 48.84962215737846;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_391) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 908.4338444093926;
  val1.matrix[1][0] = 1194.0961991683496;
  val1.matrix[2][0] = 1035.9352300623007;

  val2.matrix[0][0] = 996.977997259615;
  val2.matrix[1][0] = 1035.0721735226814;
  val2.matrix[2][0] = 1072.6788781451428;

  exp.matrix[0][0] = -88.54415285022242;
  exp.matrix[1][0] = 159.0240256456682;
  exp.matrix[2][0] = -36.74364808284213;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_392) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 884.3084901992069;
  val1.matrix[0][1] = 1045.4700091022546;

  val2.matrix[0][0] = 900.2124173300798;
  val2.matrix[0][1] = 1066.3628014766523;

  exp.matrix[0][0] = -15.903927130872944;
  exp.matrix[0][1] = -20.892792374397686;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_393) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 992.36376168671;
  val1.matrix[1][0] = 1060.3911489902953;
  val1.matrix[2][0] = 1093.552170109696;

  val2.matrix[0][0] = 946.2729042602886;
  val2.matrix[1][0] = 1206.759720853993;
  val2.matrix[2][0] = 1085.4948713049557;

  exp.matrix[0][0] = 46.090857426421394;
  exp.matrix[1][0] = -146.36857186369775;
  exp.matrix[2][0] = 8.057298804740185;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_394) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1042.9022572302897;

  val2.matrix[0][0] = 1052.0039711677841;

  exp.matrix[0][0] = -9.101713937494424;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_395) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1085.2691523356934;
  val1.matrix[1][0] = 877.5186289150446;
  val1.matrix[2][0] = 905.6431759367954;

  val2.matrix[0][0] = 976.0325260259259;
  val2.matrix[1][0] = 1011.6031456103001;
  val2.matrix[2][0] = 1039.8143567454263;

  exp.matrix[0][0] = 109.23662630976753;
  exp.matrix[1][0] = -134.0845166952555;
  exp.matrix[2][0] = -134.17118080863088;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_396) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1015.5593894179835;

  val2.matrix[0][0] = 1136.4091244045503;

  exp.matrix[0][0] = -120.84973498656677;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_397) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1178.3595510528855;

  val2.matrix[0][0] = 940.6972799861503;

  exp.matrix[0][0] = 237.66227106673523;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_398) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 984.9374708192532;
  val1.matrix[0][1] = 808.1357875173204;
  val1.matrix[0][2] = 1041.5885418687121;
  val1.matrix[1][0] = 1111.1463914522742;
  val1.matrix[1][1] = 877.4084804966146;
  val1.matrix[1][2] = 1223.1513359935518;

  val2.matrix[0][0] = 1203.247504903989;
  val2.matrix[0][1] = 1129.2502040122108;
  val2.matrix[0][2] = 907.3196190430743;
  val2.matrix[1][0] = 1101.718942208782;
  val2.matrix[1][1] = 956.6940248622625;
  val2.matrix[1][2] = 1093.9119321447497;

  exp.matrix[0][0] = -218.31003408473578;
  exp.matrix[0][1] = -321.1144164948904;
  exp.matrix[0][2] = 134.2689228256378;
  exp.matrix[1][0] = 9.42744924349222;
  exp.matrix[1][1] = -79.28554436564787;
  exp.matrix[1][2] = 129.2394038488021;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_399) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1163.1029477227319;
  val1.matrix[1][0] = 1174.9360617862046;

  val2.matrix[0][0] = 1017.1135603091394;
  val2.matrix[1][0] = 1056.143517862396;

  exp.matrix[0][0] = 145.98938741359245;
  exp.matrix[1][0] = 118.79254392380858;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_400) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 961.5198227329145;
  val1.matrix[0][1] = 1088.1619997490743;
  val1.matrix[1][0] = 759.5719920647176;
  val1.matrix[1][1] = 1155.3093964509114;

  val2.matrix[0][0] = 973.7185146225419;
  val2.matrix[0][1] = 1001.371335486502;
  val2.matrix[1][0] = 1098.3564791029878;
  val2.matrix[1][1] = 901.9006223110388;

  exp.matrix[0][0] = -12.198691889627412;
  exp.matrix[0][1] = 86.79066426257236;
  exp.matrix[1][0] = -338.7844870382702;
  exp.matrix[1][1] = 253.40877413987266;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_401) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1090.1484200854713;
  val1.matrix[0][1] = 877.3558691284344;

  val2.matrix[0][0] = 1013.9657499106893;
  val2.matrix[0][1] = 1058.0523095074336;

  exp.matrix[0][0] = 76.18267017478206;
  exp.matrix[0][1] = -180.69644037899923;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_402) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 893.6947424446148;
  val1.matrix[0][1] = 999.2815793383995;
  val1.matrix[0][2] = 1099.7401854432146;
  val1.matrix[1][0] = 919.0395825797478;
  val1.matrix[1][1] = 1054.4549582859381;
  val1.matrix[1][2] = 1017.2558765660687;

  val2.matrix[0][0] = 959.5266560642231;
  val2.matrix[0][1] = 1109.67349697596;
  val2.matrix[0][2] = 903.7863027385024;
  val2.matrix[1][0] = 1046.9567936056621;
  val2.matrix[1][1] = 983.3774357921643;
  val2.matrix[1][2] = 912.4927123620099;

  exp.matrix[0][0] = -65.83191361960826;
  exp.matrix[0][1] = -110.39191763756048;
  exp.matrix[0][2] = 195.9538827047122;
  exp.matrix[1][0] = -127.9172110259143;
  exp.matrix[1][1] = 71.07752249377381;
  exp.matrix[1][2] = 104.76316420405874;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_403) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1118.584348345401;

  val2.matrix[0][0] = 911.3269482487497;

  exp.matrix[0][0] = 207.25740009665128;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_404) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1023.8183159348113;
  val1.matrix[0][1] = 955.1112836626944;
  val1.matrix[1][0] = 1227.5585044390332;
  val1.matrix[1][1] = 989.8928053127335;
  val1.matrix[2][0] = 1172.088179051824;
  val1.matrix[2][1] = 1066.3787899769065;

  val2.matrix[0][0] = 844.6439765543311;
  val2.matrix[0][1] = 1014.6297347724329;
  val2.matrix[1][0] = 996.7236273818534;
  val2.matrix[1][1] = 992.2455483418643;
  val2.matrix[2][0] = 822.8323349170665;
  val2.matrix[2][1] = 1040.0116686505396;

  exp.matrix[0][0] = 179.1743393804802;
  exp.matrix[0][1] = -59.51845110973852;
  exp.matrix[1][0] = 230.83487705717982;
  exp.matrix[1][1] = -2.3527430291308065;
  exp.matrix[2][0] = 349.25584413475747;
  exp.matrix[2][1] = 26.36712132636694;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_405) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 904.4783423477195;
  val1.matrix[0][1] = 1023.6243858643769;
  val1.matrix[1][0] = 955.3601031957127;
  val1.matrix[1][1] = 1056.3870587111533;

  val2.matrix[0][0] = 1029.5026385796639;
  val2.matrix[0][1] = 1035.6274496187702;
  val2.matrix[1][0] = 1027.3554248144399;
  val2.matrix[1][1] = 1120.019678952943;

  exp.matrix[0][0] = -125.02429623194439;
  exp.matrix[0][1] = -12.003063754393338;
  exp.matrix[1][0] = -71.99532161872719;
  exp.matrix[1][1] = -63.63262024178971;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_406) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 920.8570507795702;
  val1.matrix[0][1] = 1011.1232887822636;

  val2.matrix[0][0] = 747.982435424456;
  val2.matrix[0][1] = 981.7867506678684;

  exp.matrix[0][0] = 172.8746153551142;
  exp.matrix[0][1] = 29.336538114395125;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_407) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1016.5781747156193;
  val1.matrix[0][1] = 980.8945865583528;
  val1.matrix[0][2] = 1067.0982396021107;

  val2.matrix[0][0] = 869.1651569304313;
  val2.matrix[0][1] = 1027.444712453454;
  val2.matrix[0][2] = 965.6717710767815;

  exp.matrix[0][0] = 147.413017785188;
  exp.matrix[0][1] = -46.550125895101246;
  exp.matrix[0][2] = 101.42646852532914;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_408) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 959.2377731287406;
  val1.matrix[0][1] = 1002.6511287220657;
  val1.matrix[0][2] = 1125.148737080463;
  val1.matrix[1][0] = 952.6279242533386;
  val1.matrix[1][1] = 1089.1727035252904;
  val1.matrix[1][2] = 881.7029015089604;
  val1.matrix[2][0] = 1006.873847185547;
  val1.matrix[2][1] = 1026.8754823433057;
  val1.matrix[2][2] = 1231.6601897248083;

  val2.matrix[0][0] = 853.3998748403279;
  val2.matrix[0][1] = 953.8160009637564;
  val2.matrix[0][2] = 1062.700806369265;
  val2.matrix[1][0] = 894.8047867733427;
  val2.matrix[1][1] = 1156.513970420811;
  val2.matrix[1][2] = 1044.1405884532035;
  val2.matrix[2][0] = 936.0881960683504;
  val2.matrix[2][1] = 836.0567760315355;
  val2.matrix[2][2] = 947.9127480566076;

  exp.matrix[0][0] = 105.8378982884127;
  exp.matrix[0][1] = 48.83512775830923;
  exp.matrix[0][2] = 62.44793071119807;
  exp.matrix[1][0] = 57.82313747999592;
  exp.matrix[1][1] = -67.34126689552045;
  exp.matrix[1][2] = -162.43768694424307;
  exp.matrix[2][0] = 70.78565111719661;
  exp.matrix[2][1] = 190.81870631177026;
  exp.matrix[2][2] = 283.74744166820074;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_409) {
  cmatrix val1;
  cmatrix val2;
  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);
  cmatrix_create(rows, cols, &val2);
  cmatrix_create(rows, cols, &exp);

  val1.matrix[0][0] = 1071.8561217643546;
  val1.matrix[0][1] = 881.6731941031106;
  val1.matrix[1][0] = 1051.9589061455606;
  val1.matrix[1][1] = 903.7148719805407;
  val1.matrix[2][0] = 1147.446684056789;
  val1.matrix[2][1] = 1086.3390724371584;

  val2.matrix[0][0] = 1042.8912982050417;
  val2.matrix[0][1] = 917.8535009123343;
  val2.matrix[1][0] = 912.0265646977347;
  val2.matrix[1][1] = 889.7947273123658;
  val2.matrix[2][0] = 984.4068792542383;
  val2.matrix[2][1] = 1107.8610761227776;

  exp.matrix[0][0] = 28.96482355931289;
  exp.matrix[0][1] = -36.18030680922368;
  exp.matrix[1][0] = 139.93234144782593;
  exp.matrix[1][1] = 13.920144668174885;
  exp.matrix[2][0] = 163.03980480255075;
  exp.matrix[2][1] = -21.52200368561921;

  status = cmatrix_sub(&val1, &val2, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);
  cmatrix_remove(&val2);
  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_410) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 897.5198592941376;
  val1.matrix[1][0] = 963.4596201666575;

  exp.matrix[0][0] = 897.5198592941376;
  exp.matrix[0][1] = 963.4596201666575;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_411) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 951.1174481121959;
  val1.matrix[1][0] = 804.2135507121297;
  val1.matrix[2][0] = 963.1966495674577;

  exp.matrix[0][0] = 951.1174481121959;
  exp.matrix[0][1] = 804.2135507121297;
  exp.matrix[0][2] = 963.1966495674577;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_412) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1083.9446667785191;
  val1.matrix[0][1] = 976.6487440849887;
  val1.matrix[0][2] = 960.5233759551082;
  val1.matrix[1][0] = 1012.7889314085307;
  val1.matrix[1][1] = 988.3575742462455;
  val1.matrix[1][2] = 1070.1782695253212;

  exp.matrix[0][0] = 1083.9446667785191;
  exp.matrix[0][1] = 1012.7889314085307;
  exp.matrix[1][0] = 976.6487440849887;
  exp.matrix[1][1] = 988.3575742462455;
  exp.matrix[2][0] = 960.5233759551082;
  exp.matrix[2][1] = 1070.1782695253212;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_413) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 992.8731682549185;

  exp.matrix[0][0] = 992.8731682549185;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_414) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1126.8694137007274;
  val1.matrix[0][1] = 959.5627630497984;
  val1.matrix[0][2] = 1159.7995156849215;

  exp.matrix[0][0] = 1126.8694137007274;
  exp.matrix[1][0] = 959.5627630497984;
  exp.matrix[2][0] = 1159.7995156849215;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_415) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1013.1839406410569;
  val1.matrix[0][1] = 1137.8606550854136;
  val1.matrix[0][2] = 926.1671837835734;

  exp.matrix[0][0] = 1013.1839406410569;
  exp.matrix[1][0] = 1137.8606550854136;
  exp.matrix[2][0] = 926.1671837835734;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_416) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1234.144751292329;
  val1.matrix[0][1] = 962.2759628410873;
  val1.matrix[1][0] = 989.9161607754385;
  val1.matrix[1][1] = 979.0922365301419;

  exp.matrix[0][0] = 1234.144751292329;
  exp.matrix[0][1] = 989.9161607754385;
  exp.matrix[1][0] = 962.2759628410873;
  exp.matrix[1][1] = 979.0922365301419;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_417) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1020.3876268224835;

  exp.matrix[0][0] = 1020.3876268224835;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_418) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 972.6464451105402;

  exp.matrix[0][0] = 972.6464451105402;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_419) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 821.5706911511072;
  val1.matrix[0][1] = 1196.3076925734033;
  val1.matrix[0][2] = 1074.4381048536848;

  exp.matrix[0][0] = 821.5706911511072;
  exp.matrix[1][0] = 1196.3076925734033;
  exp.matrix[2][0] = 1074.4381048536848;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_420) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1019.0130099524446;

  exp.matrix[0][0] = 1019.0130099524446;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_421) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 925.0486109135275;
  val1.matrix[0][1] = 995.7144150547268;
  val1.matrix[0][2] = 1098.433947914208;

  exp.matrix[0][0] = 925.0486109135275;
  exp.matrix[1][0] = 995.7144150547268;
  exp.matrix[2][0] = 1098.433947914208;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_422) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 890.9163276374925;
  val1.matrix[1][0] = 1026.4252439505235;

  exp.matrix[0][0] = 890.9163276374925;
  exp.matrix[0][1] = 1026.4252439505235;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_423) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1002.7452836658877;
  val1.matrix[1][0] = 865.4706786000229;
  val1.matrix[2][0] = 1101.7243761929114;

  exp.matrix[0][0] = 1002.7452836658877;
  exp.matrix[0][1] = 865.4706786000229;
  exp.matrix[0][2] = 1101.7243761929114;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_424) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1188.4655370455919;
  val1.matrix[0][1] = 969.4233402990583;
  val1.matrix[0][2] = 946.5276616887128;
  val1.matrix[1][0] = 1141.6515401063727;
  val1.matrix[1][1] = 924.78087622008;
  val1.matrix[1][2] = 1050.4683959047468;

  exp.matrix[0][0] = 1188.4655370455919;
  exp.matrix[0][1] = 1141.6515401063727;
  exp.matrix[1][0] = 969.4233402990583;
  exp.matrix[1][1] = 924.78087622008;
  exp.matrix[2][0] = 946.5276616887128;
  exp.matrix[2][1] = 1050.4683959047468;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_425) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1024.0291425195414;
  val1.matrix[0][1] = 1090.6823378029208;
  val1.matrix[0][2] = 948.345311235884;
  val1.matrix[1][0] = 988.050966188611;
  val1.matrix[1][1] = 925.9020907038481;
  val1.matrix[1][2] = 934.4504905222061;

  exp.matrix[0][0] = 1024.0291425195414;
  exp.matrix[0][1] = 988.050966188611;
  exp.matrix[1][0] = 1090.6823378029208;
  exp.matrix[1][1] = 925.9020907038481;
  exp.matrix[2][0] = 948.345311235884;
  exp.matrix[2][1] = 934.4504905222061;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_426) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1139.4567099924955;
  val1.matrix[1][0] = 1033.3926174070284;

  exp.matrix[0][0] = 1139.4567099924955;
  exp.matrix[0][1] = 1033.3926174070284;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_427) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1133.804269998099;
  val1.matrix[0][1] = 947.9858380543454;
  val1.matrix[0][2] = 1096.9047299303843;

  exp.matrix[0][0] = 1133.804269998099;
  exp.matrix[1][0] = 947.9858380543454;
  exp.matrix[2][0] = 1096.9047299303843;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_428) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 992.4015684410498;
  val1.matrix[0][1] = 985.260539971655;
  val1.matrix[0][2] = 918.0962068238014;
  val1.matrix[1][0] = 1030.6787150414339;
  val1.matrix[1][1] = 1052.3068508677334;
  val1.matrix[1][2] = 991.8261965181512;
  val1.matrix[2][0] = 953.9677393170275;
  val1.matrix[2][1] = 1269.8403902627033;
  val1.matrix[2][2] = 933.9220400740928;

  exp.matrix[0][0] = 992.4015684410498;
  exp.matrix[0][1] = 1030.6787150414339;
  exp.matrix[0][2] = 953.9677393170275;
  exp.matrix[1][0] = 985.260539971655;
  exp.matrix[1][1] = 1052.3068508677334;
  exp.matrix[1][2] = 1269.8403902627033;
  exp.matrix[2][0] = 918.0962068238014;
  exp.matrix[2][1] = 991.8261965181512;
  exp.matrix[2][2] = 933.9220400740928;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_429) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1045.6809412359955;
  val1.matrix[1][0] = 1055.864138107421;

  exp.matrix[0][0] = 1045.6809412359955;
  exp.matrix[0][1] = 1055.864138107421;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_430) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 910.3220740212658;
  val1.matrix[0][1] = 1042.3972424829763;

  exp.matrix[0][0] = 910.3220740212658;
  exp.matrix[1][0] = 1042.3972424829763;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_431) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1044.009862741538;
  val1.matrix[0][1] = 1055.7725405923265;
  val1.matrix[1][0] = 1091.9697649466568;
  val1.matrix[1][1] = 1135.2788935951035;
  val1.matrix[2][0] = 1052.9327686309373;
  val1.matrix[2][1] = 1011.2655757846519;

  exp.matrix[0][0] = 1044.009862741538;
  exp.matrix[0][1] = 1091.9697649466568;
  exp.matrix[0][2] = 1052.9327686309373;
  exp.matrix[1][0] = 1055.7725405923265;
  exp.matrix[1][1] = 1135.2788935951035;
  exp.matrix[1][2] = 1011.2655757846519;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_432) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1005.5753994623976;
  val1.matrix[1][0] = 921.9033839131782;

  exp.matrix[0][0] = 1005.5753994623976;
  exp.matrix[0][1] = 921.9033839131782;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_433) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1076.0953915689279;
  val1.matrix[0][1] = 983.9448304893957;
  val1.matrix[1][0] = 1086.817054930731;
  val1.matrix[1][1] = 912.9931730587335;

  exp.matrix[0][0] = 1076.0953915689279;
  exp.matrix[0][1] = 1086.817054930731;
  exp.matrix[1][0] = 983.9448304893957;
  exp.matrix[1][1] = 912.9931730587335;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_434) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1159.1708055642816;
  val1.matrix[0][1] = 1075.4318015558224;

  exp.matrix[0][0] = 1159.1708055642816;
  exp.matrix[1][0] = 1075.4318015558224;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_435) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 828.5685138779727;
  val1.matrix[0][1] = 909.6573851724004;
  val1.matrix[0][2] = 1052.5354591087635;
  val1.matrix[1][0] = 1045.795592737525;
  val1.matrix[1][1] = 885.1712511008534;
  val1.matrix[1][2] = 802.6637872226446;
  val1.matrix[2][0] = 963.8263002453441;
  val1.matrix[2][1] = 1018.0720572557381;
  val1.matrix[2][2] = 1080.952951769441;

  exp.matrix[0][0] = 828.5685138779727;
  exp.matrix[0][1] = 1045.795592737525;
  exp.matrix[0][2] = 963.8263002453441;
  exp.matrix[1][0] = 909.6573851724004;
  exp.matrix[1][1] = 885.1712511008534;
  exp.matrix[1][2] = 1018.0720572557381;
  exp.matrix[2][0] = 1052.5354591087635;
  exp.matrix[2][1] = 802.6637872226446;
  exp.matrix[2][2] = 1080.952951769441;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_436) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 993.630377797833;

  exp.matrix[0][0] = 993.630377797833;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_437) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1084.2350334014454;
  val1.matrix[0][1] = 1057.9406584411038;
  val1.matrix[1][0] = 747.7582720959678;
  val1.matrix[1][1] = 701.4714858625316;
  val1.matrix[2][0] = 1006.2295597675648;
  val1.matrix[2][1] = 918.1619889270958;

  exp.matrix[0][0] = 1084.2350334014454;
  exp.matrix[0][1] = 747.7582720959678;
  exp.matrix[0][2] = 1006.2295597675648;
  exp.matrix[1][0] = 1057.9406584411038;
  exp.matrix[1][1] = 701.4714858625316;
  exp.matrix[1][2] = 918.1619889270958;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_438) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 857.7622377604985;
  val1.matrix[1][0] = 1077.1431771135788;

  exp.matrix[0][0] = 857.7622377604985;
  exp.matrix[0][1] = 1077.1431771135788;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_439) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1040.027754564869;
  val1.matrix[0][1] = 863.5507016130091;
  val1.matrix[1][0] = 1163.1112004576473;
  val1.matrix[1][1] = 875.729846448123;

  exp.matrix[0][0] = 1040.027754564869;
  exp.matrix[0][1] = 1163.1112004576473;
  exp.matrix[1][0] = 863.5507016130091;
  exp.matrix[1][1] = 875.729846448123;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_440) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1022.7356308271837;
  val1.matrix[0][1] = 1019.6614228641636;

  exp.matrix[0][0] = 1022.7356308271837;
  exp.matrix[1][0] = 1019.6614228641636;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_441) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 987.7931705729004;
  val1.matrix[1][0] = 1292.3998697605416;

  exp.matrix[0][0] = 987.7931705729004;
  exp.matrix[0][1] = 1292.3998697605416;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_442) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 765.0762673955354;
  val1.matrix[0][1] = 971.093499792768;
  val1.matrix[0][2] = 926.6321076422494;
  val1.matrix[1][0] = 995.9763672822606;
  val1.matrix[1][1] = 908.6261647972397;
  val1.matrix[1][2] = 854.6828085595098;

  exp.matrix[0][0] = 765.0762673955354;
  exp.matrix[0][1] = 995.9763672822606;
  exp.matrix[1][0] = 971.093499792768;
  exp.matrix[1][1] = 908.6261647972397;
  exp.matrix[2][0] = 926.6321076422494;
  exp.matrix[2][1] = 854.6828085595098;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_443) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 929.9179288019086;
  val1.matrix[0][1] = 827.1107495871727;
  val1.matrix[0][2] = 930.0093591847196;
  val1.matrix[1][0] = 1012.0928287673115;
  val1.matrix[1][1] = 1075.179803436858;
  val1.matrix[1][2] = 917.0139041391265;

  exp.matrix[0][0] = 929.9179288019086;
  exp.matrix[0][1] = 1012.0928287673115;
  exp.matrix[1][0] = 827.1107495871727;
  exp.matrix[1][1] = 1075.179803436858;
  exp.matrix[2][0] = 930.0093591847196;
  exp.matrix[2][1] = 917.0139041391265;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_444) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 831.933233818151;
  val1.matrix[0][1] = 938.7429373882843;
  val1.matrix[0][2] = 1010.8947191978709;
  val1.matrix[1][0] = 895.7763357277738;
  val1.matrix[1][1] = 1061.441512130816;
  val1.matrix[1][2] = 1104.1716621723035;

  exp.matrix[0][0] = 831.933233818151;
  exp.matrix[0][1] = 895.7763357277738;
  exp.matrix[1][0] = 938.7429373882843;
  exp.matrix[1][1] = 1061.441512130816;
  exp.matrix[2][0] = 1010.8947191978709;
  exp.matrix[2][1] = 1104.1716621723035;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_445) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 967.1738719516215;
  val1.matrix[0][1] = 834.6668688918925;
  val1.matrix[1][0] = 878.0520182851695;
  val1.matrix[1][1] = 1118.5129522297893;
  val1.matrix[2][0] = 958.5706243203904;
  val1.matrix[2][1] = 1045.366217374886;

  exp.matrix[0][0] = 967.1738719516215;
  exp.matrix[0][1] = 878.0520182851695;
  exp.matrix[0][2] = 958.5706243203904;
  exp.matrix[1][0] = 834.6668688918925;
  exp.matrix[1][1] = 1118.5129522297893;
  exp.matrix[1][2] = 1045.366217374886;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_446) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 867.8035444177867;
  val1.matrix[0][1] = 994.2435475256347;
  val1.matrix[1][0] = 1069.8560339402882;
  val1.matrix[1][1] = 1015.5231689490558;
  val1.matrix[2][0] = 848.7643186858824;
  val1.matrix[2][1] = 1006.770333170585;

  exp.matrix[0][0] = 867.8035444177867;
  exp.matrix[0][1] = 1069.8560339402882;
  exp.matrix[0][2] = 848.7643186858824;
  exp.matrix[1][0] = 994.2435475256347;
  exp.matrix[1][1] = 1015.5231689490558;
  exp.matrix[1][2] = 1006.770333170585;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_447) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1049.192217967844;
  val1.matrix[1][0] = 993.6438524281726;

  exp.matrix[0][0] = 1049.192217967844;
  exp.matrix[0][1] = 993.6438524281726;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_448) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 822.1354126103578;
  val1.matrix[1][0] = 981.609640390666;

  exp.matrix[0][0] = 822.1354126103578;
  exp.matrix[0][1] = 981.609640390666;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_449) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1142.4953196692586;
  val1.matrix[1][0] = 1080.185740237202;
  val1.matrix[2][0] = 1002.1442740750011;

  exp.matrix[0][0] = 1142.4953196692586;
  exp.matrix[0][1] = 1080.185740237202;
  exp.matrix[0][2] = 1002.1442740750011;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_450) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 995.4292190494895;
  val1.matrix[0][1] = 1053.5828306683898;
  val1.matrix[1][0] = 1148.271247311874;
  val1.matrix[1][1] = 1056.6420205765749;
  val1.matrix[2][0] = 925.5398490482012;
  val1.matrix[2][1] = 932.9947751178415;

  exp.matrix[0][0] = 995.4292190494895;
  exp.matrix[0][1] = 1148.271247311874;
  exp.matrix[0][2] = 925.5398490482012;
  exp.matrix[1][0] = 1053.5828306683898;
  exp.matrix[1][1] = 1056.6420205765749;
  exp.matrix[1][2] = 932.9947751178415;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_451) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1030.0614961587773;

  exp.matrix[0][0] = 1030.0614961587773;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_452) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1104.4144202456396;
  val1.matrix[1][0] = 1062.4575621826014;

  exp.matrix[0][0] = 1104.4144202456396;
  exp.matrix[0][1] = 1062.4575621826014;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_453) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 972.4489146470803;
  val1.matrix[0][1] = 1161.879935399576;

  exp.matrix[0][0] = 972.4489146470803;
  exp.matrix[1][0] = 1161.879935399576;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_454) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 976.8547977516982;
  val1.matrix[0][1] = 1070.3002487368367;
  val1.matrix[0][2] = 818.604428936353;

  exp.matrix[0][0] = 976.8547977516982;
  exp.matrix[1][0] = 1070.3002487368367;
  exp.matrix[2][0] = 818.604428936353;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_455) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1150.5504398250596;

  exp.matrix[0][0] = 1150.5504398250596;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_456) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 924.9774748174443;

  exp.matrix[0][0] = 924.9774748174443;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_457) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 974.7519248060875;
  val1.matrix[0][1] = 1219.932010777675;
  val1.matrix[0][2] = 1121.2984101285053;
  val1.matrix[1][0] = 1109.7990866282257;
  val1.matrix[1][1] = 1163.7399880660996;
  val1.matrix[1][2] = 1172.1327353463944;

  exp.matrix[0][0] = 974.7519248060875;
  exp.matrix[0][1] = 1109.7990866282257;
  exp.matrix[1][0] = 1219.932010777675;
  exp.matrix[1][1] = 1163.7399880660996;
  exp.matrix[2][0] = 1121.2984101285053;
  exp.matrix[2][1] = 1172.1327353463944;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_458) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 986.9201675426683;
  val1.matrix[0][1] = 885.6550064238743;

  exp.matrix[0][0] = 986.9201675426683;
  exp.matrix[1][0] = 885.6550064238743;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_459) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1099.9739694059722;
  val1.matrix[0][1] = 937.3174459076001;
  val1.matrix[1][0] = 1094.343070687702;
  val1.matrix[1][1] = 1133.424879370609;
  val1.matrix[2][0] = 1129.8476386931834;
  val1.matrix[2][1] = 886.4384448489446;

  exp.matrix[0][0] = 1099.9739694059722;
  exp.matrix[0][1] = 1094.343070687702;
  exp.matrix[0][2] = 1129.8476386931834;
  exp.matrix[1][0] = 937.3174459076001;
  exp.matrix[1][1] = 1133.424879370609;
  exp.matrix[1][2] = 886.4384448489446;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_460) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 935.6065027529311;
  val1.matrix[0][1] = 1190.2654472137062;
  val1.matrix[0][2] = 1054.018351323078;

  exp.matrix[0][0] = 935.6065027529311;
  exp.matrix[1][0] = 1190.2654472137062;
  exp.matrix[2][0] = 1054.018351323078;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_461) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1004.8512147791394;
  val1.matrix[1][0] = 966.4269268927355;
  val1.matrix[2][0] = 974.6233859216932;

  exp.matrix[0][0] = 1004.8512147791394;
  exp.matrix[0][1] = 966.4269268927355;
  exp.matrix[0][2] = 974.6233859216932;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_462) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 882.5358709764862;
  val1.matrix[0][1] = 1034.891843241374;
  val1.matrix[1][0] = 1006.8055456411357;
  val1.matrix[1][1] = 1027.8147932299246;

  exp.matrix[0][0] = 882.5358709764862;
  exp.matrix[0][1] = 1006.8055456411357;
  exp.matrix[1][0] = 1034.891843241374;
  exp.matrix[1][1] = 1027.8147932299246;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_463) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 983.9249742835086;
  val1.matrix[0][1] = 1107.4352552387063;
  val1.matrix[0][2] = 1164.8012872310358;
  val1.matrix[1][0] = 997.4683696135052;
  val1.matrix[1][1] = 996.0058431837731;
  val1.matrix[1][2] = 934.1927506058888;

  exp.matrix[0][0] = 983.9249742835086;
  exp.matrix[0][1] = 997.4683696135052;
  exp.matrix[1][0] = 1107.4352552387063;
  exp.matrix[1][1] = 996.0058431837731;
  exp.matrix[2][0] = 1164.8012872310358;
  exp.matrix[2][1] = 934.1927506058888;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_464) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 959.9996737360848;
  val1.matrix[0][1] = 1054.028413063099;
  val1.matrix[1][0] = 1082.0116934719547;
  val1.matrix[1][1] = 1100.5332289855412;

  exp.matrix[0][0] = 959.9996737360848;
  exp.matrix[0][1] = 1082.0116934719547;
  exp.matrix[1][0] = 1054.028413063099;
  exp.matrix[1][1] = 1100.5332289855412;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_465) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1154.1736598519333;
  val1.matrix[0][1] = 974.5823115701978;
  val1.matrix[0][2] = 1149.4931149916392;

  exp.matrix[0][0] = 1154.1736598519333;
  exp.matrix[1][0] = 974.5823115701978;
  exp.matrix[2][0] = 1149.4931149916392;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_466) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 995.5135623616651;
  val1.matrix[0][1] = 979.3776744639329;
  val1.matrix[1][0] = 1043.7645250880735;
  val1.matrix[1][1] = 1131.3400080838899;

  exp.matrix[0][0] = 995.5135623616651;
  exp.matrix[0][1] = 1043.7645250880735;
  exp.matrix[1][0] = 979.3776744639329;
  exp.matrix[1][1] = 1131.3400080838899;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_467) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 939.8903185275148;

  exp.matrix[0][0] = 939.8903185275148;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_468) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 932.2156030767253;
  val1.matrix[0][1] = 1000.5321712281105;
  val1.matrix[0][2] = 1071.810157052965;

  exp.matrix[0][0] = 932.2156030767253;
  exp.matrix[1][0] = 1000.5321712281105;
  exp.matrix[2][0] = 1071.810157052965;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_469) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 912.3574174828867;
  val1.matrix[0][1] = 1059.04420051818;
  val1.matrix[1][0] = 1192.5711240313117;
  val1.matrix[1][1] = 1121.7685888312287;
  val1.matrix[2][0] = 1120.1734818473387;
  val1.matrix[2][1] = 918.3796843547523;

  exp.matrix[0][0] = 912.3574174828867;
  exp.matrix[0][1] = 1192.5711240313117;
  exp.matrix[0][2] = 1120.1734818473387;
  exp.matrix[1][0] = 1059.04420051818;
  exp.matrix[1][1] = 1121.7685888312287;
  exp.matrix[1][2] = 918.3796843547523;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_470) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1134.1295946792766;
  val1.matrix[0][1] = 1119.0734063976772;
  val1.matrix[0][2] = 999.9608934257286;
  val1.matrix[1][0] = 925.458606626509;
  val1.matrix[1][1] = 1050.081198248462;
  val1.matrix[1][2] = 1073.9222898331543;

  exp.matrix[0][0] = 1134.1295946792766;
  exp.matrix[0][1] = 925.458606626509;
  exp.matrix[1][0] = 1119.0734063976772;
  exp.matrix[1][1] = 1050.081198248462;
  exp.matrix[2][0] = 999.9608934257286;
  exp.matrix[2][1] = 1073.9222898331543;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_471) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1157.6611439835842;
  val1.matrix[0][1] = 865.3291514965915;
  val1.matrix[0][2] = 1022.81712427268;

  exp.matrix[0][0] = 1157.6611439835842;
  exp.matrix[1][0] = 865.3291514965915;
  exp.matrix[2][0] = 1022.81712427268;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_472) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 937.6666902044162;
  val1.matrix[0][1] = 1003.3167080865146;
  val1.matrix[0][2] = 885.1910360752174;
  val1.matrix[1][0] = 1019.5782826757328;
  val1.matrix[1][1] = 1029.2844285629744;
  val1.matrix[1][2] = 1010.6545602316852;
  val1.matrix[2][0] = 954.8609721738869;
  val1.matrix[2][1] = 928.9216399753291;
  val1.matrix[2][2] = 1017.2446284940874;

  exp.matrix[0][0] = 937.6666902044162;
  exp.matrix[0][1] = 1019.5782826757328;
  exp.matrix[0][2] = 954.8609721738869;
  exp.matrix[1][0] = 1003.3167080865146;
  exp.matrix[1][1] = 1029.2844285629744;
  exp.matrix[1][2] = 928.9216399753291;
  exp.matrix[2][0] = 885.1910360752174;
  exp.matrix[2][1] = 1010.6545602316852;
  exp.matrix[2][2] = 1017.2446284940874;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_473) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 968.6280255837088;
  val1.matrix[0][1] = 1015.6176752501516;
  val1.matrix[1][0] = 1188.7034053631166;
  val1.matrix[1][1] = 1151.7790797122464;
  val1.matrix[2][0] = 935.3618500758395;
  val1.matrix[2][1] = 935.8174198179322;

  exp.matrix[0][0] = 968.6280255837088;
  exp.matrix[0][1] = 1188.7034053631166;
  exp.matrix[0][2] = 935.3618500758395;
  exp.matrix[1][0] = 1015.6176752501516;
  exp.matrix[1][1] = 1151.7790797122464;
  exp.matrix[1][2] = 935.8174198179322;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_474) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1051.7680082962304;
  val1.matrix[1][0] = 939.2376763583072;
  val1.matrix[2][0] = 886.2929203399924;

  exp.matrix[0][0] = 1051.7680082962304;
  exp.matrix[0][1] = 939.2376763583072;
  exp.matrix[0][2] = 886.2929203399924;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_475) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1142.558219004132;

  exp.matrix[0][0] = 1142.558219004132;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_476) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 936.2731830343298;
  val1.matrix[0][1] = 980.9866465436619;
  val1.matrix[0][2] = 945.5627693579638;
  val1.matrix[1][0] = 1084.5040434438754;
  val1.matrix[1][1] = 979.9255199351592;
  val1.matrix[1][2] = 999.9702328742071;

  exp.matrix[0][0] = 936.2731830343298;
  exp.matrix[0][1] = 1084.5040434438754;
  exp.matrix[1][0] = 980.9866465436619;
  exp.matrix[1][1] = 979.9255199351592;
  exp.matrix[2][0] = 945.5627693579638;
  exp.matrix[2][1] = 999.9702328742071;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_477) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1036.4472054694943;
  val1.matrix[0][1] = 983.877631935773;
  val1.matrix[0][2] = 1074.3962261754602;
  val1.matrix[1][0] = 1162.3293162349319;
  val1.matrix[1][1] = 948.5103729991716;
  val1.matrix[1][2] = 941.2899474805587;

  exp.matrix[0][0] = 1036.4472054694943;
  exp.matrix[0][1] = 1162.3293162349319;
  exp.matrix[1][0] = 983.877631935773;
  exp.matrix[1][1] = 948.5103729991716;
  exp.matrix[2][0] = 1074.3962261754602;
  exp.matrix[2][1] = 941.2899474805587;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_478) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1013.0420698597142;
  val1.matrix[0][1] = 1081.5512061712216;
  val1.matrix[0][2] = 951.7193983836827;

  exp.matrix[0][0] = 1013.0420698597142;
  exp.matrix[1][0] = 1081.5512061712216;
  exp.matrix[2][0] = 951.7193983836827;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_479) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1029.6887862156843;
  val1.matrix[0][1] = 1068.873226490278;
  val1.matrix[1][0] = 1171.6352405718546;
  val1.matrix[1][1] = 980.1232749541174;

  exp.matrix[0][0] = 1029.6887862156843;
  exp.matrix[0][1] = 1171.6352405718546;
  exp.matrix[1][0] = 1068.873226490278;
  exp.matrix[1][1] = 980.1232749541174;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_480) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1000.3234897627635;
  val1.matrix[0][1] = 988.2957488683447;
  val1.matrix[0][2] = 1028.9203873033048;
  val1.matrix[1][0] = 1102.4063336730405;
  val1.matrix[1][1] = 952.3160445548202;
  val1.matrix[1][2] = 1019.228911998574;

  exp.matrix[0][0] = 1000.3234897627635;
  exp.matrix[0][1] = 1102.4063336730405;
  exp.matrix[1][0] = 988.2957488683447;
  exp.matrix[1][1] = 952.3160445548202;
  exp.matrix[2][0] = 1028.9203873033048;
  exp.matrix[2][1] = 1019.228911998574;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_481) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 956.0405037037851;

  exp.matrix[0][0] = 956.0405037037851;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_482) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 988.9387978552373;
  val1.matrix[0][1] = 1099.9521821442195;
  val1.matrix[0][2] = 980.4939055780109;
  val1.matrix[1][0] = 1034.25837502187;
  val1.matrix[1][1] = 807.4980268294287;
  val1.matrix[1][2] = 1102.9582180813495;

  exp.matrix[0][0] = 988.9387978552373;
  exp.matrix[0][1] = 1034.25837502187;
  exp.matrix[1][0] = 1099.9521821442195;
  exp.matrix[1][1] = 807.4980268294287;
  exp.matrix[2][0] = 980.4939055780109;
  exp.matrix[2][1] = 1102.9582180813495;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_483) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 899.5198862029206;
  val1.matrix[1][0] = 930.6172816646251;

  exp.matrix[0][0] = 899.5198862029206;
  exp.matrix[0][1] = 930.6172816646251;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_484) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1044.216826466235;
  val1.matrix[1][0] = 1051.7935501516888;

  exp.matrix[0][0] = 1044.216826466235;
  exp.matrix[0][1] = 1051.7935501516888;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_485) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 905.7144305672093;
  val1.matrix[0][1] = 896.22178664193;

  exp.matrix[0][0] = 905.7144305672093;
  exp.matrix[1][0] = 896.22178664193;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_486) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1039.6821028171837;
  val1.matrix[0][1] = 1095.848913748494;
  val1.matrix[0][2] = 1001.4231074862305;
  val1.matrix[1][0] = 1008.493800270255;
  val1.matrix[1][1] = 904.9919961377287;
  val1.matrix[1][2] = 842.9378205717749;
  val1.matrix[2][0] = 978.076000426874;
  val1.matrix[2][1] = 1146.6622726445178;
  val1.matrix[2][2] = 1109.088514955748;

  exp.matrix[0][0] = 1039.6821028171837;
  exp.matrix[0][1] = 1008.493800270255;
  exp.matrix[0][2] = 978.076000426874;
  exp.matrix[1][0] = 1095.848913748494;
  exp.matrix[1][1] = 904.9919961377287;
  exp.matrix[1][2] = 1146.6622726445178;
  exp.matrix[2][0] = 1001.4231074862305;
  exp.matrix[2][1] = 842.9378205717749;
  exp.matrix[2][2] = 1109.088514955748;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_487) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 736.8944018108923;
  val1.matrix[0][1] = 1066.4020773786874;
  val1.matrix[0][2] = 879.4922223172707;
  val1.matrix[1][0] = 791.5507057662198;
  val1.matrix[1][1] = 987.0508788646642;
  val1.matrix[1][2] = 1051.5888455647346;
  val1.matrix[2][0] = 794.1441376947358;
  val1.matrix[2][1] = 1077.651820721212;
  val1.matrix[2][2] = 943.2431651242321;

  exp.matrix[0][0] = 736.8944018108923;
  exp.matrix[0][1] = 791.5507057662198;
  exp.matrix[0][2] = 794.1441376947358;
  exp.matrix[1][0] = 1066.4020773786874;
  exp.matrix[1][1] = 987.0508788646642;
  exp.matrix[1][2] = 1077.651820721212;
  exp.matrix[2][0] = 879.4922223172707;
  exp.matrix[2][1] = 1051.5888455647346;
  exp.matrix[2][2] = 943.2431651242321;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_488) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 870.5194177936482;
  val1.matrix[1][0] = 951.8153953530609;
  val1.matrix[2][0] = 1122.6402429414698;

  exp.matrix[0][0] = 870.5194177936482;
  exp.matrix[0][1] = 951.8153953530609;
  exp.matrix[0][2] = 1122.6402429414698;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_489) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 890.4906550024155;
  val1.matrix[1][0] = 1148.2949761238517;

  exp.matrix[0][0] = 890.4906550024155;
  exp.matrix[0][1] = 1148.2949761238517;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_490) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1062.725693589283;
  val1.matrix[0][1] = 1008.3216636796084;
  val1.matrix[0][2] = 993.3617019476102;

  exp.matrix[0][0] = 1062.725693589283;
  exp.matrix[1][0] = 1008.3216636796084;
  exp.matrix[2][0] = 993.3617019476102;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_491) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1039.1680352499695;
  val1.matrix[0][1] = 1039.258160282871;
  val1.matrix[0][2] = 905.337862851619;
  val1.matrix[1][0] = 1101.5598275920534;
  val1.matrix[1][1] = 1031.9356354795004;
  val1.matrix[1][2] = 1023.375279508054;
  val1.matrix[2][0] = 1046.7124682493409;
  val1.matrix[2][1] = 837.8233467544177;
  val1.matrix[2][2] = 850.9856542473851;

  exp.matrix[0][0] = 1039.1680352499695;
  exp.matrix[0][1] = 1101.5598275920534;
  exp.matrix[0][2] = 1046.7124682493409;
  exp.matrix[1][0] = 1039.258160282871;
  exp.matrix[1][1] = 1031.9356354795004;
  exp.matrix[1][2] = 837.8233467544177;
  exp.matrix[2][0] = 905.337862851619;
  exp.matrix[2][1] = 1023.375279508054;
  exp.matrix[2][2] = 850.9856542473851;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_492) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 882.7259431131165;
  val1.matrix[0][1] = 858.9369814790163;

  exp.matrix[0][0] = 882.7259431131165;
  exp.matrix[1][0] = 858.9369814790163;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_493) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 2;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 960.4867449350922;
  val1.matrix[0][1] = 995.6764985731827;
  val1.matrix[1][0] = 1103.5196006321712;
  val1.matrix[1][1] = 807.7743175087397;
  val1.matrix[2][0] = 997.5011647933816;
  val1.matrix[2][1] = 1137.966556786624;

  exp.matrix[0][0] = 960.4867449350922;
  exp.matrix[0][1] = 1103.5196006321712;
  exp.matrix[0][2] = 997.5011647933816;
  exp.matrix[1][0] = 995.6764985731827;
  exp.matrix[1][1] = 807.7743175087397;
  exp.matrix[1][2] = 1137.966556786624;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_494) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1076.3746841594989;
  val1.matrix[0][1] = 1106.346814599996;
  val1.matrix[0][2] = 1014.2427431356745;
  val1.matrix[1][0] = 1128.9693890520869;
  val1.matrix[1][1] = 903.5304248750759;
  val1.matrix[1][2] = 1109.2379645664246;

  exp.matrix[0][0] = 1076.3746841594989;
  exp.matrix[0][1] = 1128.9693890520869;
  exp.matrix[1][0] = 1106.346814599996;
  exp.matrix[1][1] = 903.5304248750759;
  exp.matrix[2][0] = 1014.2427431356745;
  exp.matrix[2][1] = 1109.2379645664246;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_495) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 906.5172056580728;
  val1.matrix[0][1] = 867.1475146176729;
  val1.matrix[0][2] = 1005.6547276100213;

  exp.matrix[0][0] = 906.5172056580728;
  exp.matrix[1][0] = 867.1475146176729;
  exp.matrix[2][0] = 1005.6547276100213;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_496) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 773.4679226078913;
  val1.matrix[1][0] = 816.6609385711396;
  val1.matrix[2][0] = 1083.4283230192977;

  exp.matrix[0][0] = 773.4679226078913;
  exp.matrix[0][1] = 816.6609385711396;
  exp.matrix[0][2] = 1083.4283230192977;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_497) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 988.6027836721205;
  val1.matrix[1][0] = 776.1754019815919;
  val1.matrix[2][0] = 909.4547434435488;

  exp.matrix[0][0] = 988.6027836721205;
  exp.matrix[0][1] = 776.1754019815919;
  exp.matrix[0][2] = 909.4547434435488;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_498) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1000.494591269971;
  val1.matrix[0][1] = 1032.7116435103003;
  val1.matrix[0][2] = 982.8933978776047;
  val1.matrix[1][0] = 991.9844452467031;
  val1.matrix[1][1] = 1101.5608048743504;
  val1.matrix[1][2] = 1009.3239768766447;
  val1.matrix[2][0] = 879.2029244583737;
  val1.matrix[2][1] = 1091.309491968267;
  val1.matrix[2][2] = 1118.7297933846196;

  exp.matrix[0][0] = 1000.494591269971;
  exp.matrix[0][1] = 991.9844452467031;
  exp.matrix[0][2] = 879.2029244583737;
  exp.matrix[1][0] = 1032.7116435103003;
  exp.matrix[1][1] = 1101.5608048743504;
  exp.matrix[1][2] = 1091.309491968267;
  exp.matrix[2][0] = 982.8933978776047;
  exp.matrix[2][1] = 1009.3239768766447;
  exp.matrix[2][2] = 1118.7297933846196;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_499) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 924.8951107014288;

  exp.matrix[0][0] = 924.8951107014288;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_500) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1124.4158747364525;
  val1.matrix[1][0] = 910.8472597114196;
  val1.matrix[2][0] = 1101.7229836757695;

  exp.matrix[0][0] = 1124.4158747364525;
  exp.matrix[0][1] = 910.8472597114196;
  exp.matrix[0][2] = 1101.7229836757695;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_501) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 738.1032570314686;

  exp.matrix[0][0] = 738.1032570314686;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_502) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1049.649630136435;
  val1.matrix[0][1] = 920.0302318530012;
  val1.matrix[0][2] = 900.1426066253323;
  val1.matrix[1][0] = 1025.0374527111637;
  val1.matrix[1][1] = 1145.011544137539;
  val1.matrix[1][2] = 1191.6600475426546;
  val1.matrix[2][0] = 1031.2561254004404;
  val1.matrix[2][1] = 1050.7081273801055;
  val1.matrix[2][2] = 817.704371460447;

  exp.matrix[0][0] = 1049.649630136435;
  exp.matrix[0][1] = 1025.0374527111637;
  exp.matrix[0][2] = 1031.2561254004404;
  exp.matrix[1][0] = 920.0302318530012;
  exp.matrix[1][1] = 1145.011544137539;
  exp.matrix[1][2] = 1050.7081273801055;
  exp.matrix[2][0] = 900.1426066253323;
  exp.matrix[2][1] = 1191.6600475426546;
  exp.matrix[2][2] = 817.704371460447;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_503) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1128.2647603215541;
  val1.matrix[1][0] = 1090.867498597694;

  exp.matrix[0][0] = 1128.2647603215541;
  exp.matrix[0][1] = 1090.867498597694;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_504) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 908.2139120868778;
  val1.matrix[0][1] = 982.5620192405823;
  val1.matrix[0][2] = 984.6444539645038;

  exp.matrix[0][0] = 908.2139120868778;
  exp.matrix[1][0] = 982.5620192405823;
  exp.matrix[2][0] = 984.6444539645038;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_505) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 932.7948812222336;
  val1.matrix[1][0] = 1034.9823768306903;
  val1.matrix[2][0] = 904.2630071028699;

  exp.matrix[0][0] = 932.7948812222336;
  exp.matrix[0][1] = 1034.9823768306903;
  exp.matrix[0][2] = 904.2630071028699;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_506) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 1002.4537939642225;
  val1.matrix[0][1] = 945.284126290948;
  val1.matrix[0][2] = 1036.7657487807355;

  exp.matrix[0][0] = 1002.4537939642225;
  exp.matrix[1][0] = 945.284126290948;
  exp.matrix[2][0] = 1036.7657487807355;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_507) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 2;
  int cols = 1;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 873.7528483287189;
  val1.matrix[1][0] = 960.1368988294244;

  exp.matrix[0][0] = 873.7528483287189;
  exp.matrix[0][1] = 960.1368988294244;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_508) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 1;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 942.852721960122;
  val1.matrix[0][1] = 916.1087160447919;
  val1.matrix[0][2] = 978.6410456452907;

  exp.matrix[0][0] = 942.852721960122;
  exp.matrix[1][0] = 916.1087160447919;
  exp.matrix[2][0] = 978.6410456452907;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

START_TEST(test_auto_509) {
  cmatrix val1;

  cmatrix res;
  cmatrix exp;

  int rows = 3;
  int cols = 3;
  int status = OK;

  cmatrix_create(rows, cols, &val1);

  cmatrix_create(cols, rows, &exp);

  val1.matrix[0][0] = 828.7011438885099;
  val1.matrix[0][1] = 925.8434312140486;
  val1.matrix[0][2] = 814.9411406077654;
  val1.matrix[1][0] = 1002.9757133265053;
  val1.matrix[1][1] = 904.3536369791938;
  val1.matrix[1][2] = 1042.306078057236;
  val1.matrix[2][0] = 1108.3104350613357;
  val1.matrix[2][1] = 1089.1420316888987;
  val1.matrix[2][2] = 938.9312182230107;

  exp.matrix[0][0] = 828.7011438885099;
  exp.matrix[0][1] = 1002.9757133265053;
  exp.matrix[0][2] = 1108.3104350613357;
  exp.matrix[1][0] = 925.8434312140486;
  exp.matrix[1][1] = 904.3536369791938;
  exp.matrix[1][2] = 1089.1420316888987;
  exp.matrix[2][0] = 814.9411406077654;
  exp.matrix[2][1] = 1042.306078057236;
  exp.matrix[2][2] = 938.9312182230107;

  status = cmatrix_transpose(&val1, &res);

  ck_assert_int_eq(status, OK);
  ck_assert_int_eq(cmatrix_eq(&res, &exp), SUCCESS);

  cmatrix_remove(&val1);

  cmatrix_remove(&res);
  cmatrix_remove(&exp);
}
END_TEST

Suite* test_auto() {
  Suite* s = suite_create(NAME);
  TCase* t = tcase_create("auto_tc");

  tcase_add_test(t, test_auto_10);
  tcase_add_test(t, test_auto_11);
  tcase_add_test(t, test_auto_12);
  tcase_add_test(t, test_auto_13);
  tcase_add_test(t, test_auto_14);
  tcase_add_test(t, test_auto_15);
  tcase_add_test(t, test_auto_16);
  tcase_add_test(t, test_auto_17);
  tcase_add_test(t, test_auto_18);
  tcase_add_test(t, test_auto_19);
  tcase_add_test(t, test_auto_20);
  tcase_add_test(t, test_auto_21);
  tcase_add_test(t, test_auto_22);
  tcase_add_test(t, test_auto_23);
  tcase_add_test(t, test_auto_24);
  tcase_add_test(t, test_auto_25);
  tcase_add_test(t, test_auto_26);
  tcase_add_test(t, test_auto_27);
  tcase_add_test(t, test_auto_28);
  tcase_add_test(t, test_auto_29);
  tcase_add_test(t, test_auto_30);
  tcase_add_test(t, test_auto_31);
  tcase_add_test(t, test_auto_32);
  tcase_add_test(t, test_auto_33);
  tcase_add_test(t, test_auto_34);
  tcase_add_test(t, test_auto_35);
  tcase_add_test(t, test_auto_36);
  tcase_add_test(t, test_auto_37);
  tcase_add_test(t, test_auto_38);
  tcase_add_test(t, test_auto_39);
  tcase_add_test(t, test_auto_40);
  tcase_add_test(t, test_auto_41);
  tcase_add_test(t, test_auto_42);
  tcase_add_test(t, test_auto_43);
  tcase_add_test(t, test_auto_44);
  tcase_add_test(t, test_auto_45);
  tcase_add_test(t, test_auto_46);
  tcase_add_test(t, test_auto_47);
  tcase_add_test(t, test_auto_48);
  tcase_add_test(t, test_auto_49);
  tcase_add_test(t, test_auto_50);
  tcase_add_test(t, test_auto_51);
  tcase_add_test(t, test_auto_52);
  tcase_add_test(t, test_auto_53);
  tcase_add_test(t, test_auto_54);
  tcase_add_test(t, test_auto_55);
  tcase_add_test(t, test_auto_56);
  tcase_add_test(t, test_auto_57);
  tcase_add_test(t, test_auto_58);
  tcase_add_test(t, test_auto_59);
  tcase_add_test(t, test_auto_60);
  tcase_add_test(t, test_auto_61);
  tcase_add_test(t, test_auto_62);
  tcase_add_test(t, test_auto_63);
  tcase_add_test(t, test_auto_64);
  tcase_add_test(t, test_auto_65);
  tcase_add_test(t, test_auto_66);
  tcase_add_test(t, test_auto_67);
  tcase_add_test(t, test_auto_68);
  tcase_add_test(t, test_auto_69);
  tcase_add_test(t, test_auto_70);
  tcase_add_test(t, test_auto_71);
  tcase_add_test(t, test_auto_72);
  tcase_add_test(t, test_auto_73);
  tcase_add_test(t, test_auto_74);
  tcase_add_test(t, test_auto_75);
  tcase_add_test(t, test_auto_76);
  tcase_add_test(t, test_auto_77);
  tcase_add_test(t, test_auto_78);
  tcase_add_test(t, test_auto_79);
  tcase_add_test(t, test_auto_80);
  tcase_add_test(t, test_auto_81);
  tcase_add_test(t, test_auto_82);
  tcase_add_test(t, test_auto_83);
  tcase_add_test(t, test_auto_84);
  tcase_add_test(t, test_auto_85);
  tcase_add_test(t, test_auto_86);
  tcase_add_test(t, test_auto_87);
  tcase_add_test(t, test_auto_88);
  tcase_add_test(t, test_auto_89);
  tcase_add_test(t, test_auto_90);
  tcase_add_test(t, test_auto_91);
  tcase_add_test(t, test_auto_92);
  tcase_add_test(t, test_auto_93);
  tcase_add_test(t, test_auto_94);
  tcase_add_test(t, test_auto_95);
  tcase_add_test(t, test_auto_96);
  tcase_add_test(t, test_auto_97);
  tcase_add_test(t, test_auto_98);
  tcase_add_test(t, test_auto_99);
  tcase_add_test(t, test_auto_100);
  tcase_add_test(t, test_auto_101);
  tcase_add_test(t, test_auto_102);
  tcase_add_test(t, test_auto_103);
  tcase_add_test(t, test_auto_104);
  tcase_add_test(t, test_auto_105);
  tcase_add_test(t, test_auto_106);
  tcase_add_test(t, test_auto_107);
  tcase_add_test(t, test_auto_108);
  tcase_add_test(t, test_auto_109);
  tcase_add_test(t, test_auto_110);
  tcase_add_test(t, test_auto_111);
  tcase_add_test(t, test_auto_112);
  tcase_add_test(t, test_auto_113);
  tcase_add_test(t, test_auto_114);
  tcase_add_test(t, test_auto_115);
  tcase_add_test(t, test_auto_116);
  tcase_add_test(t, test_auto_117);
  tcase_add_test(t, test_auto_118);
  tcase_add_test(t, test_auto_119);
  tcase_add_test(t, test_auto_120);
  tcase_add_test(t, test_auto_121);
  tcase_add_test(t, test_auto_122);
  tcase_add_test(t, test_auto_123);
  tcase_add_test(t, test_auto_124);
  tcase_add_test(t, test_auto_125);
  tcase_add_test(t, test_auto_126);
  tcase_add_test(t, test_auto_127);
  tcase_add_test(t, test_auto_128);
  tcase_add_test(t, test_auto_129);
  tcase_add_test(t, test_auto_130);
  tcase_add_test(t, test_auto_131);
  tcase_add_test(t, test_auto_132);
  tcase_add_test(t, test_auto_133);
  tcase_add_test(t, test_auto_134);
  tcase_add_test(t, test_auto_135);
  tcase_add_test(t, test_auto_136);
  tcase_add_test(t, test_auto_137);
  tcase_add_test(t, test_auto_138);
  tcase_add_test(t, test_auto_139);
  tcase_add_test(t, test_auto_140);
  tcase_add_test(t, test_auto_141);
  tcase_add_test(t, test_auto_142);
  tcase_add_test(t, test_auto_143);
  tcase_add_test(t, test_auto_144);
  tcase_add_test(t, test_auto_145);
  tcase_add_test(t, test_auto_146);
  tcase_add_test(t, test_auto_147);
  tcase_add_test(t, test_auto_148);
  tcase_add_test(t, test_auto_149);
  tcase_add_test(t, test_auto_150);
  tcase_add_test(t, test_auto_151);
  tcase_add_test(t, test_auto_152);
  tcase_add_test(t, test_auto_153);
  tcase_add_test(t, test_auto_154);
  tcase_add_test(t, test_auto_155);
  tcase_add_test(t, test_auto_156);
  tcase_add_test(t, test_auto_157);
  tcase_add_test(t, test_auto_158);
  tcase_add_test(t, test_auto_159);
  tcase_add_test(t, test_auto_160);
  tcase_add_test(t, test_auto_161);
  tcase_add_test(t, test_auto_162);
  tcase_add_test(t, test_auto_163);
  tcase_add_test(t, test_auto_164);
  tcase_add_test(t, test_auto_165);
  tcase_add_test(t, test_auto_166);
  tcase_add_test(t, test_auto_167);
  tcase_add_test(t, test_auto_168);
  tcase_add_test(t, test_auto_169);
  tcase_add_test(t, test_auto_170);
  tcase_add_test(t, test_auto_171);
  tcase_add_test(t, test_auto_172);
  tcase_add_test(t, test_auto_173);
  tcase_add_test(t, test_auto_174);
  tcase_add_test(t, test_auto_175);
  tcase_add_test(t, test_auto_176);
  tcase_add_test(t, test_auto_177);
  tcase_add_test(t, test_auto_178);
  tcase_add_test(t, test_auto_179);
  tcase_add_test(t, test_auto_180);
  tcase_add_test(t, test_auto_181);
  tcase_add_test(t, test_auto_182);
  tcase_add_test(t, test_auto_183);
  tcase_add_test(t, test_auto_184);
  tcase_add_test(t, test_auto_185);
  tcase_add_test(t, test_auto_186);
  tcase_add_test(t, test_auto_187);
  tcase_add_test(t, test_auto_188);
  tcase_add_test(t, test_auto_189);
  tcase_add_test(t, test_auto_190);
  tcase_add_test(t, test_auto_191);
  tcase_add_test(t, test_auto_192);
  tcase_add_test(t, test_auto_193);
  tcase_add_test(t, test_auto_194);
  tcase_add_test(t, test_auto_195);
  tcase_add_test(t, test_auto_196);
  tcase_add_test(t, test_auto_197);
  tcase_add_test(t, test_auto_198);
  tcase_add_test(t, test_auto_199);
  tcase_add_test(t, test_auto_200);
  tcase_add_test(t, test_auto_201);
  tcase_add_test(t, test_auto_202);
  tcase_add_test(t, test_auto_203);
  tcase_add_test(t, test_auto_204);
  tcase_add_test(t, test_auto_205);
  tcase_add_test(t, test_auto_206);
  tcase_add_test(t, test_auto_207);
  tcase_add_test(t, test_auto_208);
  tcase_add_test(t, test_auto_209);
  tcase_add_test(t, test_auto_210);
  tcase_add_test(t, test_auto_211);
  tcase_add_test(t, test_auto_212);
  tcase_add_test(t, test_auto_213);
  tcase_add_test(t, test_auto_214);
  tcase_add_test(t, test_auto_215);
  tcase_add_test(t, test_auto_216);
  tcase_add_test(t, test_auto_217);
  tcase_add_test(t, test_auto_218);
  tcase_add_test(t, test_auto_219);
  tcase_add_test(t, test_auto_220);
  tcase_add_test(t, test_auto_221);
  tcase_add_test(t, test_auto_222);
  tcase_add_test(t, test_auto_223);
  tcase_add_test(t, test_auto_224);
  tcase_add_test(t, test_auto_225);
  tcase_add_test(t, test_auto_226);
  tcase_add_test(t, test_auto_227);
  tcase_add_test(t, test_auto_228);
  tcase_add_test(t, test_auto_229);
  tcase_add_test(t, test_auto_230);
  tcase_add_test(t, test_auto_231);
  tcase_add_test(t, test_auto_232);
  tcase_add_test(t, test_auto_233);
  tcase_add_test(t, test_auto_234);
  tcase_add_test(t, test_auto_235);
  tcase_add_test(t, test_auto_236);
  tcase_add_test(t, test_auto_237);
  tcase_add_test(t, test_auto_238);
  tcase_add_test(t, test_auto_239);
  tcase_add_test(t, test_auto_240);
  tcase_add_test(t, test_auto_241);
  tcase_add_test(t, test_auto_242);
  tcase_add_test(t, test_auto_243);
  tcase_add_test(t, test_auto_244);
  tcase_add_test(t, test_auto_245);
  tcase_add_test(t, test_auto_246);
  tcase_add_test(t, test_auto_247);
  tcase_add_test(t, test_auto_248);
  tcase_add_test(t, test_auto_249);
  tcase_add_test(t, test_auto_250);
  tcase_add_test(t, test_auto_251);
  tcase_add_test(t, test_auto_252);
  tcase_add_test(t, test_auto_253);
  tcase_add_test(t, test_auto_254);
  tcase_add_test(t, test_auto_255);
  tcase_add_test(t, test_auto_256);
  tcase_add_test(t, test_auto_257);
  tcase_add_test(t, test_auto_258);
  tcase_add_test(t, test_auto_259);
  tcase_add_test(t, test_auto_260);
  tcase_add_test(t, test_auto_261);
  tcase_add_test(t, test_auto_262);
  tcase_add_test(t, test_auto_263);
  tcase_add_test(t, test_auto_264);
  tcase_add_test(t, test_auto_265);
  tcase_add_test(t, test_auto_266);
  tcase_add_test(t, test_auto_267);
  tcase_add_test(t, test_auto_268);
  tcase_add_test(t, test_auto_269);
  tcase_add_test(t, test_auto_270);
  tcase_add_test(t, test_auto_271);
  tcase_add_test(t, test_auto_272);
  tcase_add_test(t, test_auto_273);
  tcase_add_test(t, test_auto_274);
  tcase_add_test(t, test_auto_275);
  tcase_add_test(t, test_auto_276);
  tcase_add_test(t, test_auto_277);
  tcase_add_test(t, test_auto_278);
  tcase_add_test(t, test_auto_279);
  tcase_add_test(t, test_auto_280);
  tcase_add_test(t, test_auto_281);
  tcase_add_test(t, test_auto_282);
  tcase_add_test(t, test_auto_283);
  tcase_add_test(t, test_auto_284);
  tcase_add_test(t, test_auto_285);
  tcase_add_test(t, test_auto_286);
  tcase_add_test(t, test_auto_287);
  tcase_add_test(t, test_auto_288);
  tcase_add_test(t, test_auto_289);
  tcase_add_test(t, test_auto_290);
  tcase_add_test(t, test_auto_291);
  tcase_add_test(t, test_auto_292);
  tcase_add_test(t, test_auto_293);
  tcase_add_test(t, test_auto_294);
  tcase_add_test(t, test_auto_295);
  tcase_add_test(t, test_auto_296);
  tcase_add_test(t, test_auto_297);
  tcase_add_test(t, test_auto_298);
  tcase_add_test(t, test_auto_299);
  tcase_add_test(t, test_auto_300);
  tcase_add_test(t, test_auto_301);
  tcase_add_test(t, test_auto_302);
  tcase_add_test(t, test_auto_303);
  tcase_add_test(t, test_auto_304);
  tcase_add_test(t, test_auto_305);
  tcase_add_test(t, test_auto_306);
  tcase_add_test(t, test_auto_307);
  tcase_add_test(t, test_auto_308);
  tcase_add_test(t, test_auto_309);
  tcase_add_test(t, test_auto_310);
  tcase_add_test(t, test_auto_311);
  tcase_add_test(t, test_auto_312);
  tcase_add_test(t, test_auto_313);
  tcase_add_test(t, test_auto_314);
  tcase_add_test(t, test_auto_315);
  tcase_add_test(t, test_auto_316);
  tcase_add_test(t, test_auto_317);
  tcase_add_test(t, test_auto_318);
  tcase_add_test(t, test_auto_319);
  tcase_add_test(t, test_auto_320);
  tcase_add_test(t, test_auto_321);
  tcase_add_test(t, test_auto_322);
  tcase_add_test(t, test_auto_323);
  tcase_add_test(t, test_auto_324);
  tcase_add_test(t, test_auto_325);
  tcase_add_test(t, test_auto_326);
  tcase_add_test(t, test_auto_327);
  tcase_add_test(t, test_auto_328);
  tcase_add_test(t, test_auto_329);
  tcase_add_test(t, test_auto_330);
  tcase_add_test(t, test_auto_331);
  tcase_add_test(t, test_auto_332);
  tcase_add_test(t, test_auto_333);
  tcase_add_test(t, test_auto_334);
  tcase_add_test(t, test_auto_335);
  tcase_add_test(t, test_auto_336);
  tcase_add_test(t, test_auto_337);
  tcase_add_test(t, test_auto_338);
  tcase_add_test(t, test_auto_339);
  tcase_add_test(t, test_auto_340);
  tcase_add_test(t, test_auto_341);
  tcase_add_test(t, test_auto_342);
  tcase_add_test(t, test_auto_343);
  tcase_add_test(t, test_auto_344);
  tcase_add_test(t, test_auto_345);
  tcase_add_test(t, test_auto_346);
  tcase_add_test(t, test_auto_347);
  tcase_add_test(t, test_auto_348);
  tcase_add_test(t, test_auto_349);
  tcase_add_test(t, test_auto_350);
  tcase_add_test(t, test_auto_351);
  tcase_add_test(t, test_auto_352);
  tcase_add_test(t, test_auto_353);
  tcase_add_test(t, test_auto_354);
  tcase_add_test(t, test_auto_355);
  tcase_add_test(t, test_auto_356);
  tcase_add_test(t, test_auto_357);
  tcase_add_test(t, test_auto_358);
  tcase_add_test(t, test_auto_359);
  tcase_add_test(t, test_auto_360);
  tcase_add_test(t, test_auto_361);
  tcase_add_test(t, test_auto_362);
  tcase_add_test(t, test_auto_363);
  tcase_add_test(t, test_auto_364);
  tcase_add_test(t, test_auto_365);
  tcase_add_test(t, test_auto_366);
  tcase_add_test(t, test_auto_367);
  tcase_add_test(t, test_auto_368);
  tcase_add_test(t, test_auto_369);
  tcase_add_test(t, test_auto_370);
  tcase_add_test(t, test_auto_371);
  tcase_add_test(t, test_auto_372);
  tcase_add_test(t, test_auto_373);
  tcase_add_test(t, test_auto_374);
  tcase_add_test(t, test_auto_375);
  tcase_add_test(t, test_auto_376);
  tcase_add_test(t, test_auto_377);
  tcase_add_test(t, test_auto_378);
  tcase_add_test(t, test_auto_379);
  tcase_add_test(t, test_auto_380);
  tcase_add_test(t, test_auto_381);
  tcase_add_test(t, test_auto_382);
  tcase_add_test(t, test_auto_383);
  tcase_add_test(t, test_auto_384);
  tcase_add_test(t, test_auto_385);
  tcase_add_test(t, test_auto_386);
  tcase_add_test(t, test_auto_387);
  tcase_add_test(t, test_auto_388);
  tcase_add_test(t, test_auto_389);
  tcase_add_test(t, test_auto_390);
  tcase_add_test(t, test_auto_391);
  tcase_add_test(t, test_auto_392);
  tcase_add_test(t, test_auto_393);
  tcase_add_test(t, test_auto_394);
  tcase_add_test(t, test_auto_395);
  tcase_add_test(t, test_auto_396);
  tcase_add_test(t, test_auto_397);
  tcase_add_test(t, test_auto_398);
  tcase_add_test(t, test_auto_399);
  tcase_add_test(t, test_auto_400);
  tcase_add_test(t, test_auto_401);
  tcase_add_test(t, test_auto_402);
  tcase_add_test(t, test_auto_403);
  tcase_add_test(t, test_auto_404);
  tcase_add_test(t, test_auto_405);
  tcase_add_test(t, test_auto_406);
  tcase_add_test(t, test_auto_407);
  tcase_add_test(t, test_auto_408);
  tcase_add_test(t, test_auto_409);
  tcase_add_test(t, test_auto_410);
  tcase_add_test(t, test_auto_411);
  tcase_add_test(t, test_auto_412);
  tcase_add_test(t, test_auto_413);
  tcase_add_test(t, test_auto_414);
  tcase_add_test(t, test_auto_415);
  tcase_add_test(t, test_auto_416);
  tcase_add_test(t, test_auto_417);
  tcase_add_test(t, test_auto_418);
  tcase_add_test(t, test_auto_419);
  tcase_add_test(t, test_auto_420);
  tcase_add_test(t, test_auto_421);
  tcase_add_test(t, test_auto_422);
  tcase_add_test(t, test_auto_423);
  tcase_add_test(t, test_auto_424);
  tcase_add_test(t, test_auto_425);
  tcase_add_test(t, test_auto_426);
  tcase_add_test(t, test_auto_427);
  tcase_add_test(t, test_auto_428);
  tcase_add_test(t, test_auto_429);
  tcase_add_test(t, test_auto_430);
  tcase_add_test(t, test_auto_431);
  tcase_add_test(t, test_auto_432);
  tcase_add_test(t, test_auto_433);
  tcase_add_test(t, test_auto_434);
  tcase_add_test(t, test_auto_435);
  tcase_add_test(t, test_auto_436);
  tcase_add_test(t, test_auto_437);
  tcase_add_test(t, test_auto_438);
  tcase_add_test(t, test_auto_439);
  tcase_add_test(t, test_auto_440);
  tcase_add_test(t, test_auto_441);
  tcase_add_test(t, test_auto_442);
  tcase_add_test(t, test_auto_443);
  tcase_add_test(t, test_auto_444);
  tcase_add_test(t, test_auto_445);
  tcase_add_test(t, test_auto_446);
  tcase_add_test(t, test_auto_447);
  tcase_add_test(t, test_auto_448);
  tcase_add_test(t, test_auto_449);
  tcase_add_test(t, test_auto_450);
  tcase_add_test(t, test_auto_451);
  tcase_add_test(t, test_auto_452);
  tcase_add_test(t, test_auto_453);
  tcase_add_test(t, test_auto_454);
  tcase_add_test(t, test_auto_455);
  tcase_add_test(t, test_auto_456);
  tcase_add_test(t, test_auto_457);
  tcase_add_test(t, test_auto_458);
  tcase_add_test(t, test_auto_459);
  tcase_add_test(t, test_auto_460);
  tcase_add_test(t, test_auto_461);
  tcase_add_test(t, test_auto_462);
  tcase_add_test(t, test_auto_463);
  tcase_add_test(t, test_auto_464);
  tcase_add_test(t, test_auto_465);
  tcase_add_test(t, test_auto_466);
  tcase_add_test(t, test_auto_467);
  tcase_add_test(t, test_auto_468);
  tcase_add_test(t, test_auto_469);
  tcase_add_test(t, test_auto_470);
  tcase_add_test(t, test_auto_471);
  tcase_add_test(t, test_auto_472);
  tcase_add_test(t, test_auto_473);
  tcase_add_test(t, test_auto_474);
  tcase_add_test(t, test_auto_475);
  tcase_add_test(t, test_auto_476);
  tcase_add_test(t, test_auto_477);
  tcase_add_test(t, test_auto_478);
  tcase_add_test(t, test_auto_479);
  tcase_add_test(t, test_auto_480);
  tcase_add_test(t, test_auto_481);
  tcase_add_test(t, test_auto_482);
  tcase_add_test(t, test_auto_483);
  tcase_add_test(t, test_auto_484);
  tcase_add_test(t, test_auto_485);
  tcase_add_test(t, test_auto_486);
  tcase_add_test(t, test_auto_487);
  tcase_add_test(t, test_auto_488);
  tcase_add_test(t, test_auto_489);
  tcase_add_test(t, test_auto_490);
  tcase_add_test(t, test_auto_491);
  tcase_add_test(t, test_auto_492);
  tcase_add_test(t, test_auto_493);
  tcase_add_test(t, test_auto_494);
  tcase_add_test(t, test_auto_495);
  tcase_add_test(t, test_auto_496);
  tcase_add_test(t, test_auto_497);
  tcase_add_test(t, test_auto_498);
  tcase_add_test(t, test_auto_499);
  tcase_add_test(t, test_auto_500);
  tcase_add_test(t, test_auto_501);
  tcase_add_test(t, test_auto_502);
  tcase_add_test(t, test_auto_503);
  tcase_add_test(t, test_auto_504);
  tcase_add_test(t, test_auto_505);
  tcase_add_test(t, test_auto_506);
  tcase_add_test(t, test_auto_507);
  tcase_add_test(t, test_auto_508);
  tcase_add_test(t, test_auto_509);

  suite_add_tcase(s, t);
  return s;
}
