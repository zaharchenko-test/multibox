#include <stdio.h>
#include <unistd.h>

int sync_main(int argc, char **argv)
{
  if (argv[1])
  {
    printf("usage: sync\n");
    return 0;
  }
  sync();
  return 0;
}
