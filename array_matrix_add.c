#include<stdio.h>
void main()
{
   int row,col,a[10][10],b[10][10],add[10][10],i,j;

   printf("enter row and column: \n");
   scanf("%d %d",&row,&col);

   printf("Enter Elements of first matrix\n");
   
   for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           printf("a[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
       }
   } 

   printf("Enter Elements of second matrix\n");

    for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           
           printf("a[%d][%d] = ",i,j);
           scanf("%d",&b[i][j]);
       }
   } 

   for(i=0;i<row;i++)
   {
       for(j=0;j<row;j++)
       {
            add[i][j]=a[i][j]+b[i][j];
       }
   }
    printf("addition of given array is:\n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d] = %d\n",i,j,add[i][j]);
        }
    }

}