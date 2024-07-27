# Makefile settings
.RECIPEPREFIX = >
.PHONY = all

# Runners
LOCAL_GCOVR = gcovr
CC = gcc

# Runner's config
CFLAGS = -std=c11 -Wall -Wextra -Werror
# CFLAGS += -g
LDFLAGS = -lm
TEST_FLAGS = `pkg-config --cflags --libs check` -O0
GCOV_FLAGS = -lgcov --coverage

TARGET = libcmatrix.a
SRC_DIRS = constructor hard simple other
SRC = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))
OBJ = $(SRC:.c=.o)

TESTS_DIR = tests
DIRS_WITH_TESTS = $(sort $(dir $(wildcard ./$(TESTS_DIR)/*/))) ./$(TESTS_DIR)/
TESTS_SRC = $(foreach dir, $(DIRS_WITH_TESTS), $(wildcard $(dir)*.c))
TEST_TARGET = $(TESTS_DIR)/test_all_matrix

HEADERS = $(foreach dir, . $(SRC_DIRS) $(TESTS_DIR), $(wildcard $(dir)/*.h))

REPORT = REPORT.html
GCOV_DIR = report

############## TASK ##############
all: $(TARGET) test gcov_report clean

$(TARGET): $(OBJ)
> $(AR) rcs $@ $(OBJ)

test: test_compile
> $(TEST_TARGET) || true

gcov_report:
> @mkdir -p $(GCOV_DIR)
> $(LOCAL_GCOVR) -f .*\.c -f .*/.*\.c --html-details -o $(GCOV_DIR)/$(REPORT)
> ln -s $(GCOV_DIR)/$(REPORT) ./$(REPORT) || true
> @printf "\n\tREPORT FILE FOR OPEN: '\033[38;5;46m$(REPORT)\033[0m'\n"
> @printf "\trun '\033[38;5;46mmake open_report\033[0m' for open'\n"
> @echo;

# clean artifacts
clean_art:
> $(RM) $(OBJ)
> $(RM) $(foreach dir, . $(DIRS_WITH_TESTS) $(SRC_DIRS), $(wildcard $(dir)/*.gcda))
> $(RM) $(foreach dir, . $(DIRS_WITH_TESTS) $(SRC_DIRS), $(wildcard $(dir)/*.gcno))

clean_target:
> rm -f $(TARGET)
> rm -f ./$(TEST_TARGET)

clean: clean_art clean_target
> rm -f $(wildcard *.html) $(wildcard ./$(GCOV_DIR)/*.html) $(wildcard ./$(GCOV_DIR)/*.css)
############## TASK ##############

documentation:
> doxygen doc/Doxyfile
> ln -fs doc/html/index.html DOC.html

open_report:
> open $(REPORT)

test_compile: $(TESTS_SRC) $(SRC)
> $(CC) $(CFLAGS) $^ -o $(TEST_TARGET) $(TEST_FLAGS) $(GCOV_FLAGS)

vlg: test_compile
> valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes $(TEST_TARGET)

cppcheck:
> cppcheck --enable=all --suppress=missingIncludeSystem $(SRC) $(TESTS_SRC) $(HEADERS)

