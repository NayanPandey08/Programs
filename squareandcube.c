#include<stdio.h>
void main()
{
    int num,square,cube;
    printf("enter a number: ");
    scanf("%d",&num);

    square=num*num;
    cube=num*num*num;
    printf("square of %d is %d",num,square);
    printf("cube of %d is %d",num,cube);
}