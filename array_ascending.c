#include<stdio.h>
void main()
{
    int i,j,temp;
    int arr[]={70,20,60,40,50,30};
    int length=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<length;i++)
    {
    printf("%d\n",arr[i]);
    }
}
