//Selection Sorting
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,t,n,sw;
int arr[20];
printf("How many values?");
scanf("%d", &n);
printf("\nEnter the values:");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("\nOriginal array:\t");
for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
for(i=0;i<n;i++)
{
    t=i;
    for(j=i;j<n;j++)
    {
        if(arr[j]<arr[t])
           t=j;
    }
    if (t!=i)
    {
        sw=arr[i];
        arr[i]=arr[t];
        arr[t]=sw;
    }
}
printf("\nSorted array:\t");
for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
return 0;
}