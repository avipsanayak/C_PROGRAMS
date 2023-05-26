//WAP to create an array that can store max. 50 integers and display the contents of the array
#include<stdio.h>
int main()
{
    int i, x, a[50];
    printf("How many integers can be stored?(Maximum 50)");
    scanf("\n%d", &x);
    if (x>50)
    {
        printf("Invalid Input!");
        return 0;
    }       
    printf("Enter the integers");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]); 
    printf("The array contains the following elements:\n");
    for (i=0;i<x;i++)    
        printf("%d\n", a[i]);   
        
    return 0;
}