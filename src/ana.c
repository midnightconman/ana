/*
 * ana - Anagram : compare two char arrays in C
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ana.h"

int compare(const void * a, const void * b) {
  return ( *(char*)a - *(char*)b );
}

void usage() {
  printf("Usage: ./ana <string1> <string2>\n\n");
}

int anagram(char *str1, char* str2) {

  qsort(str1, strlen(str1), sizeof(str1[0]), compare);
  qsort(str2, strlen(str2), sizeof(str2[0]), compare);

  return (strcmp(str1,str2) != 0) ? 1 : 0;

}
