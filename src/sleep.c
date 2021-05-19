#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int usage(void)
{
  printf("usage: sleep [seconds]\n");
  return 1;
}

int sleep_main(int argc, char **argv)
{
  if (argc != 2) {
    return usage();
  }
  usleep(atof(argv[1])*1000000);
  return 0;
}
