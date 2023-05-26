//WAP to display the array elements in ascending order
#include<stdio.h>
int main()
{
    int i,j,x,y;
    printf("No. of array elements?\n");
    scanf("%d",&x);
    int a[x];
    printf("Enter the integers");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]); 
    printf("Original Array:\n");
    for (i=0;i<x;i++)
        printf("%d\t",a[i]); 
    for (i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if (a[i]>a[j])
            {
                y=a[i];
                a[i]=a[j];
                a[j]=y;
            }
        }
    }
    printf("\nThe array elements in ascending order is as follows:\n");
    for (i=0;i<x;i++)
        printf("%d\t",a[i]);   
    return 0;
}