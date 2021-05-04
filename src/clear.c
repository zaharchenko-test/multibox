#include <stdio.h>

int clear_main(int argc, char **argv)
{
  if (argv[1] && argv[1][0] == '-')
  {
    printf("usage: clear\n");
    return 0;
  }
  printf("\033c\033[H\033[J");
  return 0;
}
