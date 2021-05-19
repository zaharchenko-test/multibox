#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int usage(void)
{
  printf("usage: usleep [microseconds]\n");
  return 1;
}

int usleep_main(int argc, char **argv)
{
  if (argc != 2) {
    return usage();
  }
  usleep(atof(argv[1]));
  return 0;
}
