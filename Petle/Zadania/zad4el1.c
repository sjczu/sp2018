#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Wypisuje silnie liczby 0<x<5

int main()
{
  int x;
  printf("Podaj liczbe naturalna (max=5): ");
  scanf("%d",&x);
  
  if(x>5||x<0){printf("ERROR:Błędna liczba\n");}
  else
  {
    int i;
    int y;
    if(x==0)y=0;
    else if(x==1)y=x;
    else 
    {
      for(i=0;i<x;i++)
      {
        if(x==2)y=x*(x-1);
        else if(x==3)y=x*(x-1)*(x-2);
        else if(x==4)y=x*(x-1)*(x-2)*(x-3);
        else y=x*(x-1)*(x-2)*(x-3)*(x-4);
      }
    }
    printf("%d\n",y);
  }
  return 0;
}