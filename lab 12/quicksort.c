//Implement quick sort
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
}
int main()
{
    int array[100], n, i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d Numbers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &array[i]);
    }
    quickSort(array, 0, n-1);
    printf("Sorted Array:\n");
    printArray(array, n);
    return 0;
}