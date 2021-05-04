#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int realpath_main(int argc, char **argv)
{
  if (!argv[1])
  {
    printf("usage: realpath [files]...\n");
    return 0;
  }
  char buf[PATH_MAX];
  for (int i = 1; i < argc; i++)
  {
    char *resolved_path = realpath(argv[i], buf);
    if (resolved_path != NULL)
    {
      printf("%s\n", resolved_path);
    }
  }
  return 0;
}
