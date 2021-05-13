#include <stdio.h>
#include <unistd.h>

static int usage(void)
{
  printf("usage: clear [-x]\n");
  return 1;
}

int clear_main(int argc, char **argv)
{
  int opt, x=1, e=0;
  while((opt = getopt(argc, argv, "::x")) != -1)
  {
    switch(opt)
    {
      case 'x':
        x = 0;
        break;
      case '?':
        e = 1;
    }
  }
  if (e || (argv[1][0] != '-')) {
    return usage();
  }
  if (x) {
    printf("\033c");
  }
  printf("\033[H\033[J");
  return 0;
}
