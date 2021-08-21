#include<stdio.h>
void main()
{
    int a[][3]={ {10,30,40} , {20,30,40} , {10,30,40} },i,j;
    int row=sizeof(a)/sizeof(a[0]);
    int col=sizeof(a)/sizeof(a[0][0])/row;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i>=j)
            {
                printf("%d",a[i][j]);
                printf("   ");
            }
            else if(i<j)
            {
                printf(" 0");
                printf("   ");
            }
        }
        printf("\n");
    }

}