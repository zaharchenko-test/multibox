#include <stdio.h>
#include <string.h>

int echo_main(int argc, char **argv)
{
  int n = 0;
  if (argv[1] && !strcmp(argv[1], "-n")) {
    n = 1, argc--, argv++;
  }
  else if(argv[1] && argv[1][0] == '-') {
    printf("usage: echo [-n] [string]\n");
    return 0;
  }
  for (int i = 1; i < argc; i++) {
    static int first = 1;
    if (!first) {
      fputc(' ', stdout);
    }
    fputs(argv[i], stdout);
    first = 0;
  }
  if (!n) {
    putchar('\n');
  }
  return 0;
}