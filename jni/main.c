#include <stdio.h>
#include <string.h>
#include <libgen.h>
#include <unistd.h>

int multibox(int argc, char **argv, char *func_name);
void multibox_install(char *dir);

char *version = "multibox 0.07-zaharchenko";
char *funv[] = {"arch","basename","clear","dirname","env","false","hostname","link","logname","pwd","realpath","reset","sleep","symlink","sync","test","true","tty","uname","unlink","whoami","yes"};
int func = 22;

int main(int argc, char **argv)
{
  char *func_name = basename(argv[0]);
  int multi_name = strncmp(func_name, "multibox", 8);

  if (multi_name == 0)
  {
    if (!argv[1])
    {
      printf("usage: multibox [-hilv] or [function [arguments]...]\n");
    }
    else if (argv[1][0] == '-')
    {
      if (strcmp(argv[1],"--help")==0 || strcmp(argv[1],"-h")==0)
      {
        printf("-i, --install  create links\n");
        printf("-v, --version  show version\n");
        printf("-l, --list     show all functions\n");
        printf("-h, --help     show this message\n");
      }
      else if (strcmp(argv[1],"--list")==0 || strcmp(argv[1],"-l")==0)
      {
        for (int i = 0; i < func; i++)
        {
          printf("%s\n", funv[i]);
        }
      }
      else if (strcmp(argv[1],"--version")==0 || strcmp(argv[1],"-v")==0)
      {
        printf("%s\n", version);
      }
      else if (strcmp(argv[1],"--install")==0 || strcmp(argv[1],"-i")==0)
      {
        if (argc == 3)
        {
          multibox_install(argv[2]);
        }
        else
        {
          printf("multibox [--install] [dir]\n");
        }
      }
      else
      {
        printf("%s: invalid parameter\n", argv[1]);
      }
    }
    else
    {
      func_name = argv[1];
      argv[0] = NULL;
      argv++;
      argc--;
      return multibox(argc, argv, func_name);
    }
  }
  else
  {
    return multibox(argc, argv, func_name);
  }
}

void multibox_install(char *dir)
{
    for (int i = 0; i < func; i++)
    {
      char buffer[BUFSIZ];
      char *path = strdup(dir);
      int l = strlen(path)-1;
      readlink("/proc/self/exe", buffer, BUFSIZ);
      if (strcmp(&path[l], "/") != 0)
      {
        strcat(path, "/");
      }
      symlink(buffer, strcat(path, funv[i]));
  }
}
