#include "test_all_matrix.h"

typedef struct {
  int all;
  int failed;
} counts;

void run_test(Suite* s, counts* stats) {
  SRunner* runner = srunner_create(s);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);

  stats->failed += srunner_ntests_failed(runner);
  stats->all += srunner_ntests_run(runner);

  srunner_free(runner);
}

int main() {
  counts stats = {0};

  printf("\n\tSTART TEST \033[38;5;46mCMATRIX\033[0m\n");

  run_test(test_create_remove(), &stats);
  run_test(test_equal(), &stats);
  run_test(test_sum(), &stats);
  run_test(test_sub(), &stats);
  run_test(test_mul_num(), &stats);
  run_test(test_mul_mtrx(), &stats);

  run_test(test_transpose(), &stats);
  run_test(test_minor_matrix(), &stats);
  run_test(test_minor_elem(), &stats);
  run_test(test_minor_matrix(), &stats);
  run_test(test_determinant(), &stats);
  run_test(test_calc_complements(), &stats);
  run_test(test_inverse(), &stats);

  run_test(test_auto(), &stats);

  printf("\n\t\033[38;5;46m   all\033[0m: %d", stats.all);
  printf("\n\t\033[38;2;250;0;0mfailed\033[0m: %d\n", stats.failed);
  printf("\t  END TEST \033[38;5;46mCMATRIX\033[0m\n");

  return stats.failed;
}
