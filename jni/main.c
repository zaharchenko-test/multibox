#include <stdio.h>
#include <string.h>
#include <libgen.h>
#include <unistd.h>

int multibox(int argc, char **argv, char *func_name);

int main(int argc, char **argv)
{
  char *func_name = basename(argv[0]);
  int multi_name = strncmp(func_name, "multibox", 8);

  if (!argv[1] && multi_name == 0)
  {
    printf("usage: multibox [function [arguments]...]\n");
    return 1;
  }
  else if (argv[1] && multi_name == 0)
  {
    func_name = argv[1];
    argc--;
    argv++;
    return multibox(argc, argv, func_name);
  }
  else
  {
    return multibox(argc, argv, func_name);
  }
}
