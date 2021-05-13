#include <stdio.h>
#include <stdlib.h>

static int usage(void)
{
  printf("usage: printenv [var]...\n");
  return 1;
}

int printenv_main(int argc, char **argv)
{
  extern char **environ;
  char *var;
  int res = 0;
  if (argv[1] && argv[1][0] == '-') {
    return usage();
  }
  if (!argv[1]) {
    for (; *environ; environ++) {
      printf("%s\n", *environ);
    }
  } else {
    for (int i = 1; i < argc; i++) {
      var = getenv(argv[i]);
      if (var) {
        printf("%s\n", var);
      }
    }
  }
  return 0;
}
