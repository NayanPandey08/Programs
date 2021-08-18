#include<stdio.h>
void main()
{
    int arr[]={10,30,34,92,12,56,87};
    int i,greatest;
    int length=sizeof(arr)/sizeof(arr[0]);
    greatest=arr[0];
    for(i=1;i<length;i++)
    if(arr[i]>greatest)
    {
        greatest=arr[i];
    }
   
        printf("Greatest element of array is %d",greatest);
        
}