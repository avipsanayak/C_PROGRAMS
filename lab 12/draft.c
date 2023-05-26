//Implement the following functions: 
//quicksort
//mergesort
//traverse in inorder(non-recursive)
//traverse in postorder(non-recursive)

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lptr, *rptr;
}*root= NULL;
void create(int a)
{
    struct node *par, *new, *node; 
    new=(struct node *)malloc(sizeof(struct node));
    new->data=a;
    new->lptr=NULL;
    new->rptr=NULL;
    node=root;
    par=NULL;
    if(node==NULL)
        root=new;
    else
    {
        par=node;
        while(node!=NULL)
        {
            par=node;
            if(a<node->data)
                node=node->lptr;
            else
                node=node->rptr;
        }
        if(a<par->data)
            par->lptr=new;
        else
            par->rptr=new;
    }
}
void inorder(struct node *node)
{ 
    struct stack
    {
        int s[100];
        int top;
    };
    top=-1;
    void push(struct node *node)
    {
        if(s->top==99)
            printf("Overflow");
        else
        {
            s->top++;
            node->s[node->top]=node->data;
        }
    }
    void pop()
    {
        s->top--;
    }
    while(node!=NULL&&top!=-1)
    {
        if(node!=NULL)
        {
            push(node);
            node=node->lptr;
        }
        else
        {
            node=pop();
            printf("%d",node->data);
            node=node->rptr;
        }
    }
}
int top1=-1, top2=-1, flag;
void postorder(struct node *node)
{
    label1:
    while(node!=NULL)
    {
        push(&s1, node);
        push(&s2, 1);
        if(node->rptr!=NULL)
        {
            push(&s1,node->rptr);
            push(&s2, -1);
        }
        node=node->lptr;
    }
    node=pop(&s1);
    flag=pop(&s2);
    if(flag>0)
    {
        while(flag>0 || top2!=-1)
        {
            printf("%d", node->data);
            node=pop(&s1);
            flag=pop(&s2);
        }
    }
    if(flag<0)
        goto label1;
}
