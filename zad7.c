#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void load_data(int* a)
{
  printf("x=");
  scanf("%d",a);
}

int main()
{
  int x;
  load_data(&x);
  float pierw=sqrt(x);
  int y=-x;
  printf("Odwrotnosc=%d\nPierwiastek=%.2f\n",y,pierw);
  return 0;
}