#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float min;
  float max;
  float step;
  float pierw;
  
  printf("Wartość początkowa=");
  scanf("%f",&min);
  printf("Wartość końcowa=");
  scanf("%f",&max);
  printf("Skok=");
  scanf("%f",&step);
  for(min=min;min<=max;min=min+step)
  {
    pierw=sqrt(min);
    printf("%.4f\t%.4f\n",min,pierw);
  }
  return 0;
}