#include<stdio.h>
void main()
{
    int num,first,last;

    printf("enter any number: ");
    scanf("%d",&num);
    
    last=num%10;
    first=num;

    while(first>=10)
    {
        first=first/10;
    }
    printf("adiition of first and last digit is %d",first+last);
}