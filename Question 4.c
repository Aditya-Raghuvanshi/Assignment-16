//Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>

int main()
{
    int a[3][3],i,j;
    printf("enter all elements of the matrix (row wise)");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("sum of the right diagonal elements of the matrix is : ");
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i+j==2)
             sum=sum+a[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}
