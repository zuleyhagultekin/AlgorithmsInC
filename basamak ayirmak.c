#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,basamak,i;

    printf("Bir sayi girin: ");
    scanf("%d",&sayi);
    printf("Basamak: ");
    scanf("%d",&basamak);

    for(i=1;i<=basamak;i++)
    {
        printf("%d\n",sayi%10);
        sayi=sayi/10;
    }


    return 0;
}
