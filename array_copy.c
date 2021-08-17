#include<stdio.h>
void main()
{
    int arr1[]={10,20,30,40,50};
    int arr2[]={};
    int i;
    int length=sizeof(arr1)/sizeof(arr1[0]);
    for(i=0;i<length;i++)
    {
        arr2[i]=arr1[i];
    }
      for(i=0;i<length;i++)

    {
        printf("%d\n",arr2[i]);
    }
}
