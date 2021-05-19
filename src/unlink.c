#include <stdio.h>
#include <unistd.h>

static int usage(void)
{
  printf("usage: unlink [file]\n");
  return 1;
}

int unlink_main(int argc, char **argv)
{
  if (!argv[1]) {
    return usage();
  }
  if (unlink(argv[1]) < 0) {
    printf("unlink: error\n");
    return 1;
  }
  return 0;
}
