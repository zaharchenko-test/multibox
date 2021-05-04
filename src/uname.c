#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>

int uname_main(int argc, char **argv)
{
  struct utsname buffer;
  int opt, s=0, n=0, r=0, v=0, m=0, e=0;
  if (uname(&buffer) < 0)
  {
    printf("error\n");
  }

  while((opt = getopt(argc, argv, "::snrvma")) != -1)
  {
    switch(opt)
    {
      case 's':
        s = 1;
        break;
      case 'n':
        n = 1;
        break;
      case 'r':
        r = 1;
        break;
      case 'v':
        v = 1;
        break;
      case 'm':
        m = 1;
        break;
      case 'a':
        s = n = r = v = m = 1;
        break;
      case '?':
        e = 1;
    }
  }

  if (e)
  {
    printf("usage: uname [-asnrvm]\n");
    return 1;
  }
  if (s || !(n || r || v || m))
  {
    printf("%s ", buffer.sysname);
  }
  if (n)
  {
    printf("%s ", buffer.nodename);
  }
  if (r)
  {
    printf("%s ", buffer.release);
  }
  if (v)
  {
    printf("%s ", buffer.version);
  }
  if (m)
  {
    printf("%s", buffer.machine);
  }
  putchar('\n');

  return 0;
}
