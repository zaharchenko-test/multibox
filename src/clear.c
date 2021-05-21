#include <stdio.h>
#include <unistd.h>

static int usage(void)
{
  printf("usage: clear [-x]\n");
  return 1;
}

int clear_main(int argc, char **argv)
{
  int x = 0;
  if (argv[1]) {
    if (argv[1][0]=='-' && argv[1][1]=='x' && argv[1][2]=='\0') {
      x = 1;
    }
    else {
      return usage();
    }
  }
  if (!x) {
    printf("\033c");
  }
  printf("\033[H\033[J");
  return 0;
}
