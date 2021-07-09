#include<stdio.h>
void main()
{
    int i,num;
    
    printf("enter any number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("The values are: %d\n",i);
    }
}