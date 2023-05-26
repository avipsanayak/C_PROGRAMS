#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
}*start= NULL, *last= NULL;
void create(struct node **st, struct node **lt, int n1)
{
    struct node *n= (struct node *) malloc(sizeof(struct node));
    n->data= n1;
    n->next= NULL;
    n->prev= NULL;
    if ((*st)==NULL)
    {
        (*st)=n;
        (*lt)=n;
    }
    else
    {
        n->prev=(*lt);
        (*lt)->next=n;
        (*lt)=n;
    }
}
void display()
{
    if (start==NULL)
    {   
        printf("The list is empty\n");
        return;
    }
    else
    {
        struct node *temp;
        temp= start;
        while (temp!= NULL)
        {
            printf("%d", &temp->data);
            temp= temp->next;
        }
    }

}