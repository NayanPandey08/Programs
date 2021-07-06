#include<Stdio.h>
void main()
{
    int a,b;

    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a<b)
    {
        printf("%d is bigger",b);
    }
    else
    {
        printf("%d is bigger",a);
    }
}