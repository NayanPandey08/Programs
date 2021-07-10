#include<stdio.h>
void main()
{
    int i,j,num,count=0;

    printf("enter any number ");
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
        }
            if(count==2)
            {
              printf("%d is a prime number\n",i);
            }
            else
            {
                continue;
            }        
            }
}
    