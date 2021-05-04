#include <stdio.h>
#include <sys/utsname.h>

int arch_main(int argc, char **argv)
{
  if (argv[1] && argv[1][0] == '-')
  {
    printf("usage: arch\n");
    return 0;
  }
  struct utsname buffer;
  if (uname(&buffer) < 0)
  {
    printf("error\n");
    return 1;
  }
  else
  {
    printf("%s\n", buffer.machine);
  }
  return 0;
}
