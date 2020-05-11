#include <stdio.h>

int main()
{
  int c;
  while ((c = getchar()) != 'D')
  {
    if (c == '\n' || c == '\t' || c == ' ')
    {
      printf("\n");
    }
    else
    {
      putchar(c);
    }
  }

  return 0;
}