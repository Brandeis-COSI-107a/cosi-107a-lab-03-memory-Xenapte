#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Usage: %s <numbers>\n", argv[0]);
    return 1;
  }

  for (int i = 1; i < argc; ++i) {
    int64_t num = strtol(argv[i], NULL, 0) >> 8;
    int32_t low = num & 0xFF;
    printf("0x%02X %3d\n", low, low);
  }
}
