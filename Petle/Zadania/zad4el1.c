#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Wypisuje silnie liczby <= 5

int main()
{
  int x;
  printf("Podaj liczbe naturalna (max=5): ");
  scanf("%d",&x);
  if(x>5){printf("ERROR:Za duza liczba\n");}
  else{
  int i;
  int y;
  for(i=0;i<x;i++)
  {
    if(x==1&&x==0)y=x;
    else if(x==2)y=x*(x-1);
    else if(x==3)y=x*(x-1)*(x-2);
    else if(x==4)y=x*(x-1)*(x-2)*(x-3);
    else y=x*(x-1)*(x-2)*(x-3)*(x-4);
  }
  printf("%d\n",y);
  return 0;}
}