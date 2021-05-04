#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int env_main(int argc, char **argv)
{
  extern char **environ;
  char **aa, *clearenv[1];
  clearenv[0] = NULL;
  int opt, e=0;

  while ((opt = getopt(argc, argv, "::-iu:")) != -1)
  {
    switch(opt)
    {
      case '-':
      case 'i':
        environ = clearenv;
        break;
      case 'u':
        unsetenv(optarg);
        break;
      case '?':
        e = 1;
    }
  }
  if (e)
  {
    printf("usage: env [-iu] [name=value]... [cmd [arg]...]\n");
    return 1;
  }

  for (argv += optind; *argv && strchr(*argv, '='); argv++)
  {
    putenv(*argv);
  }
  if (*argv)
  {
    execvp(*argv, argv);
    printf("error\n");
  }
  for (aa = environ; *aa; aa++)
  {
    printf("%s\n", *aa);
  }
  return 0;
}
