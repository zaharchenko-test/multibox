#include <stdio.h>
#include <unistd.h>

static int usage(void)
{
  printf("usage: symlink [target] [name]\n");
  return 1;
}

int symlink_main(int argc, char **argv)
{
  if (argc != 3) {
    return usage();
  }
  if (symlink(argv[1], argv[2]) < 0) {
    printf("failed to create symbolic link\n");
    return 1;
  }
  return 0;
}
