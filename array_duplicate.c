#include<stdio.h>
void main()
{
    int arr[]={10,20,30,10,40,50,50,210,30,60,348,434,55,55};
    int i,j;
    int length=sizeof(arr)/sizeof(arr[0]);

    printf("Duplicate elements in given array are:\n");
    for(i=0;i<length-1;i++)
    {
        for(j=i+1;j<=length-1;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n",arr[i]);
            }
            else
            {
                continue;
            }
        }
    }
}