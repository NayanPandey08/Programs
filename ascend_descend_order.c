#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a<=b && a<=c && b<=c)
    {
        printf(" ascending order: %d %d %d: ",a,b,c);
        printf(" descending order: %d %d %d: ",c,b,a);

    }
    else if(a<=b && a<=c && c<=b)
    {
        printf(" ascending order: %d %d %d: ",a,c,b);
        printf(" descending order: %d %d %d: ",c,b,a);
    }
        
    else if( b<=c && b<=a && c<=a)
    {
        printf("ascending order: %d %d %d: ",b,c,a);
        printf(" descending order: %d %d %d",a,c,b);
    }

    else if( b<=c && b<=a && a<=c)
    {
        printf("ascending order: %d %d %d: ",b,a,c);
        printf(" descending order: %d %d %d",c,a,b);
    }

    else if(c<=a && c<=b && b<=c)
    {
         printf("ascending order: %d %d %d: ",c,b,a);
         printf(" descending order: %d %d %d",a,b,c);
    }
    else if(c<=a && c<=b && c<=b)
    {
         printf("ascending order: %d %d %d: ",b,c,a);
         printf(" descending order: %d %d %d",a,c,b);
    }

}