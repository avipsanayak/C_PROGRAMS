#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *start= NULL;
void create(int);
void traverse();
void firstnode(int);
void nthpos(int);

void main()
{
    int ch, a=1;
    printf("1. Create a list\n2. Display a list\n3.To add a node as a first node\n4.To add a node at nth position\n5.To delete a Exit\n");
    scanf("%d", &ch);
    while (a==1)
    {
        switch(ch)
        {
            case 1:
            {
                int a;
                printf("enter the data value for the node: \n");
                scanf("%d", &a);
                create(a);
                break;
            }
            case 2:
            {
                traverse();
                break;
            }
            case 3:
            {
                int a;
                printf("enter the data value for the node: \n");
                scanf("%d", &a);
                firstnode(a);
                break;
            }
            case 4:
            {
                int a;
                printf("enter the data value for the node: \n");
                scanf("%d", &a);
                nthpos(a);
                break;
            }
        }
        printf("Do you want to continue?(Press 1 for YES or 0 for NO):");
        scanf("%d", &a);
        if(a==0)
            exit(0);
        printf("1.Create a list\n2.Display a list\n3.To add a node as a first node\n4.To add a node at nth position\n");
        scanf("%d", &ch);
    }
}

void create(int n1)
{
    struct node *temp;
    struct node *n= (struct node*)malloc(sizeof(struct node));
    n->data= n1;
    n->next= NULL;
    if (start==NULL)
        start=n;
    else
    {
        temp=start;
        while(temp->next!= NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
}

void traverse()
{
    struct node *temp=start;
    while(temp!=NULL)
    {
        printf("%d  ", temp->data);
        printf("\n");
        temp=temp->next;
    }

}

void firstnode(int n1)
{
    struct node *n= (struct node *)malloc(sizeof(struct node));
    n->data=n1;
    n->next= start;
    start=n;
}

void nthpos(int n1)
{
    int n,k;
    struct node *temp;
    printf("Enter the value of n:");
    scanf("%d", &n);
    temp=start;
    k=1;
    while (k<n-1)
    {
        temp=temp->next;
        k++;
    }
}
