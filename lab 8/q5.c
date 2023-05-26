// WAP to implement two stacks in one array to minimise the overflow of stacks
#include <stdio.h>
#define SIZE 20
int array[SIZE];
int top1 = -1;
int top2 = SIZE;
void push1(int data)
{
    if (top1 < top2-1)
    {
        top1++;
        array[top1] = data;
    }
    else
        printf("Stack is full");
}
void push2(int data)
{
    if (top1 < top2-1)
    {
        top2--;
        array[top2] = data;
    }
    else
        printf("Stack is full\n");
}
void pop1()
{
    if (top1 >= 0)
    {
        int b = array[top1];
        top1--;

        printf("%d is being popped from Stack 1\n", b);
    }
    else
    {
        printf("Stack is Empty \n");
    }
}
void pop2()
{
    if (top2 < SIZE)
    {
        int b = array[top2];
        top2--;

        printf("%d is being popped from Stack 1\n", b);
    }
    else
    {
        printf("Stack is Empty!\n");
    }
}
void display_stack1()
{
    int i;
    for (i = top1; i >= 0; --i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void display_stack2()
{
    int i;
    for (i = top2; i < SIZE; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int ar[SIZE];
    int i;
    int n;
    printf("We can push a total of 20 values\n");
    for (i = 15; i <= 19; ++i)
    {
        push1(i);
        printf("Pushed in Stack 1 is %d\n", i);
    }
    for (i = 39; i <= 43; ++i)
    {
        push2(i);
        printf("Pushed in Stack 2 is %d\n", i);
    }
    display_stack1();
    display_stack2();
    printf("Pushing Value in Stack 1 is %d\n", 11);
    push1(11);
    n = top1 + 1;
    while (n)
    {
        pop1();
        n--;
    }
    pop1();

    return 0;
}