#include <stdio.h>

void function() {
  return;
}

void main() {
  int stack_variable = 10;
  const char* initialized_data = "Hello, World!";
  static int uninitialized_data;

  printf("stack variable: 0x%012lX\n", &stack_variable);
  printf("initialized data: 0x%012lX\n", &initialized_data);
  printf("uninitialized data: 0x%012lX\n", &uninitialized_data);
  printf("main: 0x%012lX\n", &main);
  printf("function: 0x%012lX\n", &function);
}
