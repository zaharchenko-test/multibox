#include <stdio.h>
#include <libgen.h>

static int usage(void)
{
  printf("usage: basename [path]...\n");
  return 1;
}

int basename_main(int argc, char **argv)
{
  if (!argv[1]) {
    return usage();
  }
  for (int i = 1; i < argc; i++) {
    printf("%s\n", basename(argv[i]));
  }
  return 0;
}
