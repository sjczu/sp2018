#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int dim;
    int* fib;
    printf("How many fibonacci numbers u want to generate?");
    scanf("%d",&dim);
    fib=(int*)malloc(dim*sizeof(int));
    if(fib==NULL)
    {
        printf("ERROR");
        return EXIT_FAILURE;
    }
    
    int i;
    for(i=0;i<dim;i++)
    {
        fib[0]=1;
        fib[1]=1;
        fib[i+2]=fib[i+1]+fib[i];
        printf("%d",fib[i]);
    }
    free(fib);
    return EXIT_SUCCESS;
}