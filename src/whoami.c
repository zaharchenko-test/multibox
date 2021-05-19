#include <unistd.h>
#include <stdio.h>
#include <pwd.h>

static int usage(void)
{
  printf("usage: whoami\n");
  return 1;
}

int whoami_main(int argc, char **argv)
{
  if (argv[1]) {
    return usage();
  }
  uid_t uid = geteuid();
  struct passwd *pw = getpwuid(uid);
  if (!pw) {
    printf("whoami: error\n");
    return 1;
  }
  printf("%s\n", pw->pw_name);
  return 0;
}
