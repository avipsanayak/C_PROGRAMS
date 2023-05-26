//WAP to store numbers into an array of n integers, where the array must contain some duplicates. Find out the most repeating element in the array
#include<stdio.h>
int main()
{
    int i,j,k,n,c=0,max_c,max_e;
    printf("What is the value of 'n'?\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the integers(add duplicates too):\n");
    for (i=0;i<n;i++)
        scanf("%d", &a[i]);
    for (i=0;i<n;i++)
      {
        c=0;
        for(j=i+1;j<n;j++)
            if (a[i]==a[j])
            {
                c=c+1;
                if(c>max_c)
                {
                    max_c=c;  
                    max_e=a[i];
                }
            }
      }
    printf("%d is the most repeating element", max_e);
    return 0;
}