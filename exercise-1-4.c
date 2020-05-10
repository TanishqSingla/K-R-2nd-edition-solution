#include <stdio.h>

int main()
{
  printf("Temperature Conversion Chart (C -> F)\n"); //Heading

  float fahr, cels;
  int lower, upper, step; // Lower limit, upper limit and step declaration

  lower = 0;
  upper = 300;
  step = 20;

  cels = lower;
  while (cels <= upper)
  {
    fahr = (9.0 / 5.0) * cels + 32;
    printf("%3.0f %6.1f\n", cels, fahr);
    cels += step;
  }

  return 0;
}