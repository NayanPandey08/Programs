#include<stdio.h>
void main()
{
    int num,i,j,sum=0,temp;

    printf("enter a number: ");
    scanf("%d",&num);
temp=num;
    while(num>0)
    {
        i=num%10;
      num=num/10;
       j=i*i*i;
        sum=sum+j;
       
    }
        if(temp==sum)
        {
            printf("%d is an armstrong number",sum);
        }
        else
        {
           
            printf("%d is not an armstrong number",sum);
        }
}