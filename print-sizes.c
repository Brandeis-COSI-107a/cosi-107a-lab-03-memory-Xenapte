#include <stdio.h>
#include <stdint.h>

void main() {
  int i = 978;
  int *pi = &i;
  char s[200];
  char *ps = s;

  printf("size of char is %ld\n", sizeof(char));
  printf("size of short is %ld\n", sizeof(short));
  printf("size of int is %ld\n", sizeof(int));
  printf("size of long is %ld\n", sizeof(long));
  printf("size of long long is %ld\n", sizeof(long long));
  printf("size of float is %ld\n", sizeof(float));
  printf("size of double is %ld\n", sizeof(double));
  printf("size of char * is %ld\n", sizeof(char *));
  printf("size of int * is %ld\n", sizeof(int *));
  printf("size of long * is %ld\n", sizeof(long *));

  printf("The size of my character array is %ld\n", sizeof(s));
  printf("The size of my character pointer is %ld\n", sizeof(ps));
  printf("The size of my int pointer is %ld\n", sizeof(pi));

  printf("The size of what my integer pointer points at is %ld\n", sizeof(*pi));
}
