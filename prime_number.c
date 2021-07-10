#include<stdio.h>
void main()
{
    int num,i,count=0;

    printf("enter any  number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }

    }
        if(count>2)
        {
            printf("%d is not a prime number ",num);
        }
        else
        {
            printf("%d is a prime number ",num);
        }  
}