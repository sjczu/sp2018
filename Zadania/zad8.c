#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//lista fcji
int max(int a, int b,int c);
int min(int a,int b,int c);

//glowna fcja
int main()
{
  int x,y,z;
  printf("Wprowadź trzy liczby całkowite:");
  scanf("%d %d %d",&x,&y,&z);
  int sum=x+y+z;
  int il=x*y*z;
  printf("Suma wynosi:%d\n",sum);
  printf("Iloczyn wynosi:%d\n",il);
  printf("MIN=%d\n",min(x,y,z));
  printf("MAX=%d\n",max(x,y,z));
  return 0;
}

//najwieksza wartosc
int max(int a,int b,int c)
{
  int m=a;
  if(b>m)m=b;
  if(c>m)m=c;
  return m;
}

//najwieksza wartosc
int min(int a,int b,int c)
{
  int m=a;
  if(b<m)m=b;
  if(c<m)m=c;
  return m;
}