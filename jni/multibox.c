#include <stdio.h>
#include <string.h>

int arch_main(int argc, char **argv);
int basename_main(int argc, char **argv);
int cat_main(int argc, char **argv);
int clear_main(int argc, char **argv);
int date_main(int argc, char **argv);
int dirname_main(int argc, char **argv);
int echo_main(int argc, char **argv);
int false_main(int argc, char **argv);
int hostname_main(int argc, char **argv);
int link_main(int argc, char **argv);
int ln_main(int argc, char **argv);
int logname_main(int argc, char **argv);
int ls_main(int argc, char **argv);
int mkdir_main(int argc, char **argv);
int program_main(int argc, char **argv);
int pwd_main(int argc, char **argv);
int readlink_main(int argc, char **argv);
int realpath_main(int argc, char **argv);
int reset_main(int argc, char **argv);
int rm_main(int argc, char **argv);
int rmdir_main(int argc, char **argv);
int sh_main(int argc, char **argv);
int sleep_main(int argc, char **argv);
int symlink_main(int argc, char **argv);
int sync_main(int argc, char **argv);
int test_main(int argc, char **argv);
int true_main(int argc, char **argv);
int tty_main(int argc, char **argv);
int uname_main(int argc, char **argv);
int unlink_main(int argc, char **argv);
int which_main(int argc, char **argv);
int whoami_main(int argc, char **argv);
int yes_main(int argc, char **argv);

int multibox(int argc, char **argv, char *func_name)
{
  if (!func_name)
  {
    printf("error\n");
    return 1;
  }

  else if (strcmp(func_name, "arch") == 0) { return arch_main(argc, argv); }
  else if (strcmp(func_name, "basename") == 0) { return basename_main(argc, argv); }
  else if (strcmp(func_name, "clear") == 0) { return clear_main(argc, argv); }
  else if (strcmp(func_name, "dirname") == 0) { return dirname_main(argc, argv); }
  else if (strcmp(func_name, "false") == 0) { return false_main(argc, argv); }
  else if (strcmp(func_name, "hostname") == 0) { return hostname_main(argc, argv); }
  else if (strcmp(func_name, "link") == 0) { return link_main(argc, argv); }
  else if (strcmp(func_name, "logname") == 0) { return logname_main(argc, argv); }
  else if (strcmp(func_name, "program") == 0) { return program_main(argc, argv); }
  else if (strcmp(func_name, "pwd") == 0) { return pwd_main(argc, argv); }
  else if (strcmp(func_name, "realpath") == 0) { return realpath_main(argc, argv); }
  else if (strcmp(func_name, "reset") == 0) { return reset_main(argc, argv); }
  else if (strcmp(func_name, "sleep") == 0) { return sleep_main(argc, argv); }
  else if (strcmp(func_name, "symlink") == 0) { return sleep_main(argc, argv); }
  else if (strcmp(func_name, "sync") == 0) { return sync_main(argc, argv); }
  else if (strcmp(func_name, "test") == 0) { return test_main(argc, argv); }
  else if (strcmp(func_name, "true") == 0) { return true_main(argc, argv); }
  else if (strcmp(func_name, "uname") == 0) { return uname_main(argc, argv); }
  else if (strcmp(func_name, "unlink") == 0) { return unlink_main(argc, argv); }
  else if (strcmp(func_name, "whoami") == 0) { return whoami_main(argc, argv); }
  else if (strcmp(func_name, "yes") == 0) { return yes_main(argc, argv); }

  else
  {
    printf("%s: not a function.\n", func_name);
  }
  return 1;
}
