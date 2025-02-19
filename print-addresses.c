#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Usage: %s <address>\n", argv[0]);
    return 1;
  }

  for (int i = 1; i < argc; ++i) {
    uint64_t address = strtoull(argv[i], NULL, 10);
    printf("0x%012lX\n", address);
  }
}
