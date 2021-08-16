#include<stdio.h>
void main()
{
    int i,num1,num2,sum1=0,sum2=0;

    printf("Enter first number\n");
    scanf("%d",&num1);

    printf("Enter second number\n");
    scanf("%d",&num2);
    
    for(i=1;i<num1;i++)
    {
        if(num1%i==0)
        {
            sum1=sum1+i;
        }
        else
        {
            continue;
        }
    }

    for(i=1;i<num2;i++)
    {
        if(num2%i==0)
        {
            sum2=sum2+i;
        }
        else
        {
            continue;
        }
    }
        if(num1==sum2 && num2==sum1)
        {
            printf("%d and %d are amicable numbers",num1,num2);
        }
        else
        {
            printf("%d and %d are not amicable numbers",num1,num2);
        }

}