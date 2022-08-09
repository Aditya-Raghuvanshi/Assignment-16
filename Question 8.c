//Write a program in C to print or display an upper triangular matrix.
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
    printf("upper triangular of a given matrix is : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(j>=i)
             printf("%d ",a[i][j]);
           else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
