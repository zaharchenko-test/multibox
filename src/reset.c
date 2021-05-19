#include <stdio.h>

static int usage(void)
{
  printf("usage: reset\n");
  return 1;
}

int reset_main(int argc, char **argv)
{
  if (argv[1]) {
    return usage();
  }
  printf("\033c\033(B\033[m\033[J\033[?25h");
  return 0;
}
