#include <stdio.h>
#include <unistd.h>

static int usage(void)
{
  printf("usage: sync\n");
  return 1;
}

int sync_main(int argc, char **argv)
{
  if (argv[1]) {
    return usage();
  }
  sync();
  return 0;
}
