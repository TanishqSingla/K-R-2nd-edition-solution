#include <stdio.h>

int main()
{
  int c;
  c = (getchar() != EOF);
  if (c == 1)
  {
    putchar('y'); // y if c has value of 1
  }
  else
  {
    putchar('n'); // n if c has value of 0
  }
  return 0;
}