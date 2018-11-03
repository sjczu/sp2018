#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int x;
  float pierw;
  printf("Podaj x:\n");
  scanf("%d",&x);
  if(x<0)
  {printf("ERROR: x must be higher than 0.\n");}
  else printf("Pierwiastek=%.2f\n",pierw=sqrt(x)); 
  return 0;
}