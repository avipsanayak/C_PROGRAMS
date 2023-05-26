//1. WAP to reverse the contents of an array of n elements
#include<stdio.h>
int main()
{
    int n,i,t;
    printf("Enter the no. of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
        
    }
    printf("Updated array:\n");
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    return 0;
}