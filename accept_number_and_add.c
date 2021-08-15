#include<stdio.h>
void main()
{
    int i,num,j,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    for(i=num;i>0;)
    {
        i=num%10;
        sum=sum+i;
        num=num/10;
    }
    
        printf("sum is: %d",sum);
}