//WAP to sort an array of n no.s in descending order
#include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("Enter the no. of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for (i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Updated array:\n");
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    return 0;
}