// Write a menu-driven program to perform the following operations on a stack ADT
// 1. Push 
// 2. Pop 
// 3. Display
// 4. Sort
// 5. Add an element to the sorted stack
// 6. Find out the maximum element in the stack

#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int s[100];    
    int top;
};
void initialize(struct stack *);
void push(struct stack *, int);
void pop(struct stack *, int *);
void display(struct stack *);
int main()
{
    int b, ch, x=1;
    struct stack s1;
    initialize(&s1);
    printf("    Stack ADT   \n");
    printf("1. Push\n2. Pop\n3. Display\n4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    while(x==1)
    {
    switch (ch)
    {
    case 1:
        int n;
        printf("Enter the element to be pushed:");
        scanf("%d\n",&n);
        push(&s1, n);
        break;
    
    case 2:
        pop(&s1, &b);
        break;
    
    case 3:
        display(&s1);
        break;
    case 4:
        exit(0);
        break;
    }
    printf("1. Push\n2. Pop\n3. Display\n4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    }
}
void initialize(struct stack *s)
{
    s->top=-1;
}
void push(struct stack *s1, int n)
{
    if(s1->top==99)
        printf("Overflow");
    else
    {
        (s1->top)++;
        s1->s[s1->top]=n;

    }
}
void pop(struct stack *s1, int *n)
{
    if(s1->top==-1)
        printf("Underflow");
    else
    {
        *n=s1->s[s1->top];
        (s1->top)--;
    }
}
void display(struct stack *s1)
{
    if(s1->top==-1)
        printf("\nStack is Empty\n");
    else
    {
        printf("\nElements of Stck are:\n");
        for(int i=s1->top;i>=0;i--)
            printf("%d\n",s1->s[i]);
    }
}
