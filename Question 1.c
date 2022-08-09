//Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,c[3][3];
    printf("enter all the elements of first matrix (enter rows wise )");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter all the elements of second matrix (enter rows wise )");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("sum of matrix a and b is stored in matrix c which is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}
