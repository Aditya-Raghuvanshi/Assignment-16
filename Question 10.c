//Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>

int main()
{
    int a[5][6],i,j,temp=0,max;
    printf("enter 30 elements of the 2D array (enter row wise ) ");
    for(i=0;i<5;i++)
    {
        int x=0;
        for(j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
                x++;
        }
        if(x>temp)
        {
            temp=x;
            max=i;
        }
    }
    printf("%d row has the highest number of 1s which has an index no. of %d ",max+1,max);
    return 0;
}
