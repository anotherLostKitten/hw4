#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcpy, strncpy

int main() {
  printf("strcpy will copy the chars of a string from one location to another.\n\n");
  char a[] = "hello";
  char b[] = "salami";
  printf("string a is now: %s   b is now: %s\n", a, b);
  strcpy(b, a);
  printf("string a is now: %s   b is now: %s\n", a, b);
  b[5] = '.';
  printf("replacing the first of 2 terminating nulls at the end of b...\nstring a is now: %s   b is now: %s\n\n", a, b);

  printf("strncpy is like strcpy, but will only copy at most the first t chars of a string\nthis is not null terminated if you get to size limit, so watch out.\n\n");
  strncpy(b + 2, a, 4);
  printf("string a is now: %s   b is now: %s\n", a, b);
  strncpy(b + 4, a, 2);
  printf("string a is now: %s   b is now: %s\n", a, b);
  strncpy(b + 4, a, 3);
  printf("'accidentally' writing over terminating null of b w/ strncpy:\nstring a is now: %s   b is now: %s\n", a, b);
}
