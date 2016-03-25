/**
 * 
 * ana - Anagram compare two char arrays in C
 *
 * Copyright (C) 2016 Jon Campbell - https://github.com/midnightconman/
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 * 
 */

#include <stdlib.h>
#include <string.h>
#include <check.h>
#include "../src/ana.h"

START_TEST (test_true) {

  char *str1="apple";
  char *str2="apple";

  ck_assert_int_eq(anagram(str1, str2), 0);

}
END_TEST

START_TEST (test_false) {

  char *str1="apple";
  char *str2="bananna";

  ck_assert_int_ne(anagram(str1, str2), 0);

}
END_TEST

Suite * ana_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("Ana");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_true);
    tcase_add_test(tc_core, test_false);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {

  int number_failed;
  Suite *s;
  SRunner *sr;

  s = ana_suite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;

}
