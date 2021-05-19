#include <stdio.h>

static int usage(void)
{
  printf("usage: yes [string]\n");
  return 1;
}

int yes_main(int argc, char **argv)
{
  if (argv[1] && argv[1][0] == '-') {
    return usage();
  }
  if (!argv[1]) {
    argv[1] = "y";
  }
  for (;;) {
    printf("%s\n", argv[1]);
  }
  return 1;
}
