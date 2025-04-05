#include <stdio.h>
#include <stdlib.h>
int ValidTriangle(int a,int b,int c);


int main()
{
    int a,b,c;
    printf("Please enter the edge values: ");
    scanf("%d %d %d",&a,&b,&c);

    if(ValidTriangle(a,b,c))
    {
        printf("This is a valid triangle.");
    }
    else
    {
        printf("This is not a valid triangle.");
    }

    return 0;
}

int ValidTriangle(int a,int b,int c)
{
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
