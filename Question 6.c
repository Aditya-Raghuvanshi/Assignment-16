//Write a program in C to find the sum of rows and columns of a Matrix.
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
    int r1=0,r2=0,r3=0,c1=0,c2=0,c3=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==0)
             r1=r1+a[i][j];
           if(i==1)
                r2=r2+a[i][j];
           if(i==2)
                r3=r3+a[i][j];
           if(j==0)
                c1=c1+a[i][j];
           if(j==1)
                c2=c2+a[i][j];
           if(j==2)
                c3=c3+a[i][j];

        }
    }
    printf("sum of elements of first row is %d \n",r1);
    printf("sum of elements of  second row is %d \n",r2);
    printf("sum of elements of  third row is %d \n",r3);
    printf("sum of elements of  first column is %d \n",c1);
    printf("sum of elements of  second column is %d \n",c2);
    printf("sum of elements of  third column is %d \n",c3);
    return 0;
}
