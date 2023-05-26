//WAP to input n elements and find out the sum of even elements and multiply all odd elements
#include<stdio.h>
int main()
{
    int i,n,sum,mul;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int a[n];
    sum=0;
    mul=1;
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
        scanf("%d", &a[i]); 
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
            sum=sum+a[i];
        else
            mul=mul*a[i];
    }
    printf("\nThe sum of even elements:%d\n",sum);
    printf("\nThe product of odd elements:%d\n",mul);
    return 0;
}