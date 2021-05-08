#include <stdio.h>
#include <stdlib.h>

int printenv_main(int argc, char **argv)
{
  extern char **environ;
  char *var;
  int res = 0;
  if (argv[1] && argv[1][0] == '-') {
    printf("usage: printenv [var]...\n");
    return 1;
  }
  if (!argv[1]) {
    for (; *environ; environ++) {
      printf("%s\n", *environ);
    }
  } else {
    for (int i = 1; i < argc; i++) {
      if ((var = getenv(argv[i]))) {
        printf("%s\n", var);
      } else {
        res = 1;
      }
    }
  }
  return res;
}
