#include<stdio.h>
void main()
{
    int arr[]={10,20,30,40,50,60,70,80};
    int i;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<length;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",arr[i]);
        }
        else
        {
            continue;
        }
    }

}