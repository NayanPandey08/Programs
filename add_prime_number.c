#include<stdio.h>
void main()
{
    int num,i,j,count=0,sum=0;

    printf("enter any  number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
            if(count<=2)
            {
                printf("The prime numbers are %d\n",i);
                sum=sum+i;
            }
            else
            {
                continue;
            }

    }
                printf("The sum of prime number is:%d",sum);

}