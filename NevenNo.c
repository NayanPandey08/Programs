#include<stdio.h>
void main()
{
    int i,num;

    printf("Enter any number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {

        if(i%2==0)
        {
            printf("Even Number is: %d\n",i);
        }

        else
        {
            continue;
        }

    }
}