//1. WAP to implement operations on a double ended queue.
#include<stdio.h>
#include<conio.h>
#define MAX 20
int deque[MAX];
int front=-1, rear=-1;
void insert_rear(void);
void insert_front(void);
void delete_rear(void);
void delete_front(void);
void display(void);
int main()
{
    int choice;
    do
    {
        printf("\n1.Insert at rear\n2.Insert at front\n3.Delete from rear\n4.Delete from front\n5.Display\n6.Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {  
            case 1:
                insert_rear();
                break;
            case 2:
                insert_front();
                break;
            case 3:
                delete_rear();
                break;
            case 4:
                delete_front();
                break;
            case 5:
                display();
                break;
        }
    }
    while(choice!=6);
    getch();
    return 0;
}

void insert_rear()
{
    int val;
    printf("\nEnter the value to be added ");
    scanf("%d",&val);
    if( (front==0 && rear==MAX-1) || (front==rear+1) )
    {
        printf("\nOverflow");
    }
    if(front==-1)        
    {
        front=0;
        rear=0;
    }
    else
    {
        if(rear==MAX-1)
            rear=0;
        else
            rear=rear+1;
    }
    deque[rear]=val;
}

void insert_front()
{
    int val;
    printf("\nEnter the value to be added ");
    scanf("%d",&val);
    if( (front==0 && rear==MAX-1) || (front==rear+1) )
    {
        printf("\nOverflow");
    }
    if(front==-1)       
    {
        front=0;
        rear=0;
    }
    else
    {
        if(front==0)
            front=MAX-1;
        else
            front=front-1;
    }
    deque[front]=val;
}

void delete_rear()
{
    if(front==-1)
    {
        printf("\nUnderflow");
        return;
    }
    printf("\nThe deleted element is %d\n", deque[rear]);
    if(front==rear)         
    {
        front=-1;
        rear=-1;
    }
    else
    {
        if(rear==0)
        rear=MAX-1;
        else
        rear=rear-1;
    }
}

void delete_front()
{
    if(front==-1)
    {
        printf("\nUnderflow");
        return;
    }
    printf("\nThe deleted element is %d\n", deque[front]);
    if(front==rear)          
    {
        front=-1;
        rear=-1;
    }
    else
    {
        if(front==MAX-1)
            front=0;
        else
            front=front+1;
    }
}

void display()
{
    int front=front, rear=rear;
    if(front==-1)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    printf("\nThe elements in the queue are: ");
    if(front<=rear)
    {
        while(front<=rear)
        {
            printf("%d\t",deque[front]);
            front++;
        }
    }
    else
    {
        while(front<=MAX-1)
        {
            printf("%d\t",deque[front]);
            front++;
        }
        front=0;
        while(front<=rear)
        {
            printf("%d\t",deque[front]);
            front++;
        }
    }
    printf("\n");
}