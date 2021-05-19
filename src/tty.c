#include <stdio.h>
#include <unistd.h>
#include <string.h>

static int usage(void)
{
  printf("usage: tty [-s]\n");
  return 1;
}

int tty_main(int argc, char **argv)
{
  if (argv[1]) {
    if (strcmp(argv[1], "-s") != 0) {
      return usage();
    }
  }
  else {
    char *tty = ttyname(0);
    if (tty) {
      printf("%s\n", tty);
    }
    else {
      printf("not a tty\n");
    }
  }
  return 0;
}
