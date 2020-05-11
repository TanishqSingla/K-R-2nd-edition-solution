#include <stdio.h>

int main()
{
  int c;
  int blank;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      if (getchar() == ' ')
        continue;
      else
        putchar(c);
    }
    else
    {
      putchar(c);
    }
  }
  return 0;
}