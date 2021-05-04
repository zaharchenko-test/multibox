#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int sleep_main(int argc, char **argv)
{
  if (!argv[1])
  {
    printf("usage: sleep [seconds]\n");
    return 0;
  }
  sleep(atoi(argv[1]));
  return 0;
}
