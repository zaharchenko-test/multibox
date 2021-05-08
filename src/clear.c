#include <stdio.h>
#include <unistd.h>

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
  if (e) {
    printf("usage: clear [-x]\n");
    return 1;
  }
  if (x) {
    printf("\033c");
  }
  printf("\033[H\033[J");
  return 0;
}
