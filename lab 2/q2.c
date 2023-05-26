//WAP to search an element in an array of n numbers
#include <stdio.h>
int search(int *a, int n, int key)
{
int i;
for (i = 0; i < n; i++)
{
if (a[i] == key)
    return 1;
}
return 0;
}
int main()
{
int i, n, key;
printf("Enter the size of the array : ");
scanf("%d", &n);
int a[n];
printf("Enter the elements in array : ");
for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
printf("Enter the key : ");
scanf("%d", &key);
if (search(a, n, key))
    printf("Element found ");
else
    printf("Element not found ");
}