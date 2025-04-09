#include <stdio.h>
#include <stdlib.h>
int fib(int num){
    if (num==1 || num==2)
        return 1;

        return fib(num-1)+fib(num-2);
}

int main()
{
    int num=0;
    printf("enter a number: ");
    scanf("%d",&num);

    return fib(num-1)+fib(num-2);



    return 0;
}



