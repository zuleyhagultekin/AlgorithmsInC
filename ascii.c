#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="bu bi string";
    int i=0;
    int counter[26]={0};

    while(str[i]!= '\0')
    {
        if((str[i]>64 && str[i]<91))
        {
            counter[str[i]-65]++;
        }
        else if((str[i]>96 && str[i]<123))
        {
            counter[str[i]-97]++;
        }
    i++;
    }

    for(i=0;i<26;i++)
    {
        if(counter[i]>0)
        {
            printf("%c = %d \n",i+65,counter[i]);
        }
    }
    return 0;
}
