//Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>

int main()
{
    int m,n,i,j,x=0;
    printf("enter the no. of rows and no. of columns of the matrix ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter all the elements of the matrix row wise ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
               x++;
            }
        }
    }
    if(x>((m*n)/2))
        printf("it is a sparse matrix ");
    else
        printf("it is not a sparse matrix ");
}
