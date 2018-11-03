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
  for(min;min=max;min=min+step)
  {
    pierw=sqrt(min)
    printf("%f\t%f\n",min,pierw);
    min=min+step;
  }
  return 0;
}