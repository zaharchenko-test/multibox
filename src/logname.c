#include <stdio.h>
#include <unistd.h>

static int usage(void)
{
  printf("usage: logname\n");
  return 1;
}

int logname_main(int argc, char **argv)
{
  if (argv[1]) {
    return usage();
  }
  char *login = getlogin();
  if (!login) {
    printf("no login name.\n");
    return 1;
  }
  printf("%s\n", login);
  return 0;
}
