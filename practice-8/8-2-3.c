#include <stdio.h>
#include <stdlib.h>

int cub(int);

int main()
{
    int i;
    scanf("%d",&i);
    
    cub(i);

    return 0;
}


int cub(int x)
{
    x=x*x*x;    
    printf("%d\n",x);
    return;
}

