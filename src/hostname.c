#include <stdio.h>
#include <unistd.h>

int hostname_main(int argc, char **argv)
{
  if (argv[1])
  {
    printf("usage: hostname\n");
    return 0;
  }
  char host[HOST_NAME_MAX];
  if (gethostname(host, sizeof(host)) < 0)
  {
    printf("error\n");
  }
  printf("%s\n", host);
  return 0;
}
