#include<stdio.h>
void main()
{
    int i,j,n,arr[50],value,pos;

    printf("Enter the number of elements you want to insert: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the elements:");
        scanf("%d",&arr[i]);
    }

           printf("Enter the position where you want to insert the element:");
           scanf("%d",&pos);

           printf("Enter the value");
           scanf("%d",&value);

         for(i=n-1;i>pos-1;i--)
         {
             arr[i+1]=arr[i];
         }
         arr[i+1]=arr[i];
         
            arr[i]=value;

                printf("elements are: ");
            for(i=0;i<=n;i++)
            {
                printf("%d\n",arr[i]);
            }
}