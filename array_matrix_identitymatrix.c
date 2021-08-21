#include<stdio.h>
void main()
{
    int a[3][3]={
                 {1,0,0} 
                ,{0,1,0} 
                ,{0,0,1}
                 };
    int i,j;
    int row=sizeof(a)/sizeof(a[0]);
    int col=sizeof(a)/sizeof(a[0][0])/row;
        int flag=0;
    for(i=0;i<row;i++)
    {
        for(j=0;i<col;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                flag=1;   
                break;       
            }
            else if(i!=j && a[i][j]!=0)
            {
                flag=1;  
                break;            
            }
        }
        if(flag==1)
        {
            break;
        }
        
    }
    if(flag==0)
    {
        printf("Matrix is an identity matrix");
    }
    else
    {
        printf("Matrix is not an Identity matrix");
    }
}