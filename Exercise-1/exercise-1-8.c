#include <stdio.h>

int main()
{
  int c;
  int blanks, tabs, nw;
  blanks = tabs = nw = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      nw++;
    else if (c == ' ')
      blanks++;
    else if (c == '\t')
      tabs++;
  }

  printf("The text entered has:\n");
  printf("%d blanks\n", blanks);
  printf("%d tabs\n", tabs);
  printf("%d newlines", nw);

  return 0;
}