#include <stdio.h>
#include <string.h>
#include <unistd.h>

int program_main(int argc, char **argv)
{
  int opt, a=0, f=0, h=0, v=0, e=0;
  while((opt = getopt(argc, argv, "::fhva")) != -1)
  {
    switch(opt)
    {
      case 'f':
        f = 1;
        break;
      case 'h':
        h = 1;
        break;
      case 'v':
        v = 1;
        break;
      case 'a':
        f = h = v = 1;
        break;
      default:
        e = 1;
    }
  }

  if (e || !(h || v || f))
  {
    printf("usage: program [-ahvf]\n");
    return 1;
  }
  if (h)
  {
    printf("usage: multibox [function [arguments]...]\n");
  }
  if (v)
  {
    printf("v0.08:zaharchenko\n");
  }
  if (f)
  {
    printf("All functions:\narch, basename, clear, dirname, false, hostname, link, logname, pwd, realpath, reset, sleep, symlink, sync, test, true, tty, uname, unlink, whoami, yes\n");
  }

  return 0;
}
