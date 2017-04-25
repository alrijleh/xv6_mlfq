#include "types.h"
#include "user.h"

int main(int argc, char **argv)
{
  nice(3);

  char str[] = "hello world";
  int i,j;
  for (i=0; i<11;i++)
  {
    for (j=0; j<11;j++)
    {
      if (i==j)
        printf(1, "%c", str[i]);
      else
        printf(1, " ");
    }
    printf(1, "\n");
  }

  printf(1, "Hello world\n");
  exit();
}
