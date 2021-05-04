#include <stdio.h>

int yes_main(int argc, char **argv)
{
  if (argv[1] && argv[1][0] == '-')
  {
    printf("usage: yes [string]...\n");
    return 0;
  }

  char **pp;
  argv[0] = (char*)"y";
  if (argv[1])
  {
    ++argv;
  }

  do
  {
    pp = argv;
    while (1)
    {
      fputs(*pp, stdout);
      if (!*++pp)
      {
        break;
      }
      putchar(' ');
    }
  }
  while (putchar('\n') != EOF);
  return 1;
}
