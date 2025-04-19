#include <stdio.h>
#include <stdlib.h>
int max_value(int arr[],int size);
int min_value(int arr[],int size);


int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&arr[i]);
    }

    printf("maximum element: %d\n",max_value(arr,size));
    printf("minimum element: %d\n",min_value(arr,size));

    return 0;
}
int max_value(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int min_value(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];

        }
    }
    return min;
}
