#include <unistd.h>
#include <stdio.h>
#include <pwd.h>

int whoami_main(int argc, char **argv)
{
  if (argv[1])
  {
    printf("usage: whoami\n");
    return 0;
  }
  uid_t uid = geteuid();
  struct passwd *pw = getpwuid(uid);
  if (!pw)
  {
    printf("error\n");
    return 1;
  }

  printf("%s\n", pw->pw_name);
  return 0;
}
