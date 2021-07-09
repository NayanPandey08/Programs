#include<stdio.h>
void main()
{
    int roll_num,m1,m2,m3,average,grade,totalmarks;

    printf("enter your roll number: ");
    scanf("%d",&roll_num);

    printf("enter the marks: ");
    scanf("%d  %d  %d",&m1,&m2,&m3);

    average= (m1+m2+m3)/3;
    totalmarks=m1+m2+m3;

    printf("Total marks: %d\n",totalmarks);
    printf("Average: %d\n",average);
    
    if(average>=80)
    {
        printf("Grade A");
    }

    else if(average>=60 && average<80)
    {
        printf("Grade B");
    }

    else if(average>=33 && average<60)
    {
        printf("Grade C");
    }

    else
    {
        printf("Fail");
    }
}