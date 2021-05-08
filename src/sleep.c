#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int sleep_main(int argc, char **argv)
{
  if (argc != 2) {
    printf("usage: sleep [seconds]\n");
    return 1;
  }
  sleep(atoi(argv[1]));
  return 0;
}
