#include <stdio.h>
#include <stdlib.h>


int main()
{
    int saat,odeme;
    printf("Kaldiginiz saati girin: ");
    scanf("%d",&saat);

    if(saat>0 && saat <= 4)
    {
        odeme = saat*10;
    }
    if(saat>=5 && saat<=8)
    {
        odeme = saat*12;
    }
    if(saat>=9 && saat<=12)
    {
        odeme = saat*15;
    }
    if(saat>=13)
    {
        odeme = saat*20;
    }

    printf("Odemeniz gereken tutar: %d",odeme);
    return 0;
}
