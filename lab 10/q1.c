//Binary Search Tree Implementation
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
void traverse_pre(struct node *node)
{
    if (node!=NULL)
    {
        printf("%d\t", node->data);
        traverse_pre(node->lptr);
        traverse_pre(node->rptr);
    }
}
void traverse_in(struct node *node)
{
    if (node!=NULL)
    {
        traverse_in(node->lptr);
        printf("%d\t", node->data);
        traverse_in(node->rptr);
    }
}
void traverse_post(struct node *node)
{
    if (node!=NULL)
    {
        traverse_post(node->lptr);
        traverse_post(node->rptr);
        printf("%d\t", node->data);
    }
}
void traverse_level(struct node *node)
{
    if (node==NULL)
        return;
    struct node *q[100];
    int f=0, r=0;
    q[r++] = node;
    while( f != r )
    {
        struct node *t = q[f++];
        printf("%d ", t->data);
        if(t->lptr != NULL )
            q[r++] = t->lptr;
        if( t->rptr != NULL )
            q[r++] = t->rptr;
    }
}
void search(struct node *node, int val)
{
    struct node *ptr, *par;
    ptr = node;
    par = NULL;
    while (ptr->data != val)
    {
        par = ptr;
        if (val < ptr->data)
            ptr = ptr->lptr;
        else
            ptr = ptr->rptr;
    }
    if (ptr->data == val)
        printf(" \nElement is present \nParent node is %d", par->data);
    else
        printf("\n Element not found\n");
}
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current != NULL && current->lptr != NULL)
        current = current->lptr;
    return current;
}
struct node *delete(struct node *node, int key)
{
    if (node == NULL)
        return node;
    if (key < node->data)
        node->lptr = delete(node->lptr, key);
    else if (key > node->data)
        node->rptr = delete(node->rptr, key);
    else
    {
        if (node->lptr == NULL)
        {
            struct node *temp = node->rptr;
            free(node);
            return temp;
        }
        else if (node->rptr == NULL)
        {
            struct node *temp = node->lptr;
            free(node);
            return temp;
        }
        struct node *temp = minValueNode(node->rptr);
        node->data = temp->data;
        node->rptr = delete(node->rptr, temp->data);
    }
    return node;
}
int main()
{
    int ch,n=1;
    printf("\nBINARY SEARCH TREE\n");
    printf("1.Create\n2.Traverse in pre-order\n3. Traverse in in-order\n4. Traverse in post-order\n5. Traverse in level order\n6. Search an element\n7. Delete\n8. Exit\nEnter your choice:");
    scanf("%d", &ch);
    while(n==1)
    {
    switch(ch)
    {
        case 1:
            int x;
            printf("Enter value:");
            scanf("%d",&x);
            create(x);
            break;
        case 2:
            traverse_pre(root);
            break;
        case 3:
            traverse_in(root);
            break;
        case 4:
            traverse_post(root);
            break;
        case 5:
            traverse_level(root);
            break;
        case 6:
            int s;
            printf("Enter the element to search");
            scanf("%d", &s);
            search(root,s);
            break;
        case 7:
            int del;
            printf("Enter the element to delete");
            scanf("%d", &del);
            delete(root,del);
            break;
        case 8:
            exit(0);
    }
    printf("\n1.Create\n2.Traverse in pre-order\n3. Traverse in in-order\n4. Traverse in post-order\n5. Traverse in level order\n6. Search an element\n7. Delete\n8. Exit\nEnter your choice:");
    scanf("%d", &ch);
  }
    return 0;
}