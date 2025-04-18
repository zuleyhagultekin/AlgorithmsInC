#include <stdio.h>
#include <stdlib.h>
int isPrime(int sayi){
    int i;
    for (i=2;i<sayi;i++)
    {
        if(sayi%i==0)
            return 0;
    }
    return 1;




}
int main()
{
    int n;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&n);

    if (isPrime(n)==0){
        printf("Bu sayi asal degildir.");
    }
    else{
        printf("Bu sayi asal sayidir.");
    }
    return 0;
}
