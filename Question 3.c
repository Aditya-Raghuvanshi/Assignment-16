//Write a program in C to find the transpose of a given matrix.
#include<stdio.h>

int main()
{
    int a[3][3],i,j,b[3][3];
    printf("enter all elements of the matrix (row wise)");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    printf("transpose of the matrix stored in matrix b is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
