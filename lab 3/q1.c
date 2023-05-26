//Q1. Write a program to add two matrices and display it using function.

#include<stdio.h>
void add(int [][10], int [][10], int, int);
int main()
{
    int a[10][10], b[10][10], r,c,i,j;
    printf("Enter no. of rows\n");
    scanf("%d", &r);
    printf("Enter no. of columns\n");
    scanf("%d", &c);
    printf("\nFirst matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter element %d%d\t", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nSecond matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element %d%d\t", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    add(a, b, r, c);
    return 0;
}

void add(int a[10][10], int b[10][10], int r, int c)
{
    int sum[10][10], i, j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
            printf("%d\t", sum[i][j]);
    }

}