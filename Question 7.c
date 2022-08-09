//Write a program in C to print or display the lower triangular of a given matrix.
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
    printf("lower triangular of a given matrix is : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i>=j)
             printf("%d ",a[i][j]);
           else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
