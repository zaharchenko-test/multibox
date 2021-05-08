#include <stdio.h>
#include <unistd.h>

int true_main(int argc, char **argv)
{
  int opt, n=0, t=0, e=0;
  while((opt = getopt(argc, argv, "::nt")) != -1)
  {
    switch(opt)
    {
      case 'n':
        n = 1;
        t = 0;
        break;
      case 't':
        t = 1;
        n = 0;
        break;
      case '?':
        e = 1;
        n = t = 0;
    }
  }
  if (e) {
    printf("usage: true [-nt]\n");
  }
  if (n) {
    printf("0\n");
  }
  if (t) {
    printf("true\n");
  }
  return 0;
}
