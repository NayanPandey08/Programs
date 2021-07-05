#include<stdio.h>
void main()
{
    int num;
    printf("enter any number: ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("%d is negative",num);
    }
     if(num==0)
    {
        printf("%d is zero",num);
    }
     if(num>0)
    {
        printf("%d is positive",num);
    }
}