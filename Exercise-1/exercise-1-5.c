#include <stdio.h>

int main()
{
  printf("Temperature Conversion Chart (F -> C)\n"); //Heading

  float fahr, cels;
  int lower, upper, step; // Lower limit, upper limit and step declaration

  lower = 0;
  upper = 300;
  step = 20;

  fahr = upper;
  while (fahr >= lower)
  {
    cels = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, cels);
    fahr -= step;
  }

  return 0;
}