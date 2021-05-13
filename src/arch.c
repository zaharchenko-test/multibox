#include <stdio.h>
#include <sys/utsname.h>

static int usage(void)
{
  printf("usage: arch\n");
  return 1;
}

int arch_main(int argc, char **argv)
{
  if (argv[1]) {
    return usage();
  }
  struct utsname buffer;
  if (uname(&buffer) < 0) {
    printf("arch: error\n");
    return 1;
  }
  else {
    printf("%s\n", buffer.machine);
  }
  return 0;
}
