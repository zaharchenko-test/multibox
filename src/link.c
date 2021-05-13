#include <stdio.h>
#include <unistd.h>

static int usage(void)
{
  printf("usage: link [target] [name]\n");
  return 1;
}

int link_main(int argc, char **argv)
{
  if (argc != 3) {
    return usage();
  }
  if (link(argv[1], argv[2]) < 0) {
    printf("failed to create link\n");
    return 1;
  }
  return 0;
}
