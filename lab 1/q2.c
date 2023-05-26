//WAP to find out the sum of numbers stored in an array of integers
#include<stdio.h>
int main()
{
    int i,x,sum;
    sum=0;    //To make sure the garbage value(if any) is cleared.
    printf("No. of array elements?\n");
    scanf("%d",&x);
    int a[x];
    printf("Enter the integers");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]); 
    for (i=0;i<x;i++)
        sum=sum+a[i];
    printf("\nThe sum of all array elements:%d",sum);   
    return 0;
}