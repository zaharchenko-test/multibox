#include <stdio.h>

int test_main(int argc, char **argv)
{
  for (int i = 0; i < argc; i++)
  {
    printf("argv[%d] : %s\n", i, argv[i]);
  }
  return 0;
}
