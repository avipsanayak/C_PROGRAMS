//3. WAP to implement circular rotation of an array using dequeue.
#include <stdio.h>       
int main()    
{             
    //Declare the length of the array
    int length;
    printf("Enter the length of the array ");
    scanf("%d",&length);    
    //Declare an array     
    int arr[length];
    printf("Enter the array elements ");
    for(int i=0;i<length;i++)    //Initialize array 
    scanf("%d",&arr[i]);    
    //n Enter the index for circular rotation i.e., the number of times the array should rotate
    int n;
    printf("Enter the index of rotation ");
    scanf("%d",&n);           
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }                
    for(int i = 0; i < n; i++)
   {    
           int j, temp;       
            temp = arr[length-1];            
            for(j = length-1; j > 0; j--)
            {       
                arr[j] = arr[j-1];    
            }        
            arr[0] = temp;    
    }
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    } 
}          