#include <stdio.h>
#include <libgen.h>

static int usage(void)
{
  printf("usage: dirname [path]...\n");
  return 1;
}

int dirname_main(int argc, char **argv)
{
  if (!argv[1]) {
    return usage();
  }
  for (int i = 1; i < argc; i++) {
    printf("%s\n", dirname(argv[i]));
  }
  return 0;
}
