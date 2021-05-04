#include <stdio.h>

int true_main(int argc, char **argv)
{
  if (argv[1] && argv[1][0] == '-')
  {
    printf("usage: true\n");;
  }
  return 0;
}
