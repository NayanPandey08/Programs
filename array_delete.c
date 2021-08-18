#include<stdio.h>
void main()
{
    int arr[]={10,20,30,40,50};
    int i,pos,num;
    printf("Enter the position where you want to delete element ");
    scanf("%d",&pos);

    for(i=pos-1;i<4;i++)
    {
        arr[i]=arr[i+1];
    }

    for(i=0;i<4;i++)
    {
        printf("%d\n",arr[i]);
    }
}