//WAP to insert a new element at a specified position in a array
#include<stdio.h>
int main()
{
   int i,x,p,e;
   printf("No. of array elements?\n");
   scanf("%d",&x);
    int a[x+1];
    printf("Enter the array elements");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]); 
    printf("Enter the position and the element to be inserted");
    scanf("%d\n%d\n",&p, &e);
    if (p>x)
        printf("Index out of range!");
    else{
    for (i=x+1;i>p;i--)
        a[i]=a[i-1];
    a[p]=e;
    printf("Array after insertion:\n");
    for(i=0;i<x+1;i++)
        printf("%d\n",a[i]);
    }
    return 0;
}