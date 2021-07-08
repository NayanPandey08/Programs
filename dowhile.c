#include<stdio.h>
void main()
{
    int i,num;

    printf("Enter any number: ");
    scanf("%d",&num);

    i=num;

    do
    {
        printf("%d \n",i);
        i--;
    } 
    while (i>=1);
    
}