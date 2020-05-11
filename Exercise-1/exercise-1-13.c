#include <stdio.h>

#define OUT 0
#define IN 1

#define MAXLEN 11

int main()
{
  int c;
  int counter = 0;
  int words[MAXLEN] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int state = OUT;
  while ((c = getchar()) != '~')
  {
    if (state == OUT)
    {
      counter = 0;
      state = IN;
    }

    while (state == IN)
    {
      c = getchar();
      counter++;
      if (c == ' ' || c == '\n' || c == '\t')
      {
        state = OUT;
        break;
      }
    }

    if (counter > 0)
    {
      words[counter - 1] += 1;
    }
  }

  for (int i = MAXLEN - 1; i >= 0; --i)
  {
    printf("%2d | ", i + 1);
    for (int j = 0; j < words[i]; j++)
    {
      printf("#");
    }
    printf("\n");
  }

  return 0;
}