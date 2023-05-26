//Traverse a tree in inorder using non recursive function
#include <stdio.h>
#include <stdlib.h>
#define bool int
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct sNode
{
    struct Node *t;
    struct sNode *next;
};

void push(struct sNode **top_ref, struct Node *t);
struct Node *pop(struct sNode **top_ref);
bool isEmpty(struct sNode *top);

void inorder(struct Node *root)
{
    struct Node *current = root;
    struct sNode *s = NULL;
    bool done = 0;

    while (!done)
    {
        if (current != NULL)
        {
            push(&s, current);
            current = current->left;
        }
        else
        {
            if (!isEmpty(s))
            {
                current = pop(&s);
                printf("%d ", current->data);

                current = current->right;
            }
            else
                done = 1;
        }
    }
}

void push(struct sNode **top_ref, struct Node *t)
{
    struct sNode *new_Node =
        (struct sNode *)malloc(sizeof(struct sNode));

    if (new_Node == NULL)
    {
        printf("Stack Overflow \n");
        getchar();
        exit(0);
    }

    new_Node->t = t;
    new_Node->next = (*top_ref);

    (*top_ref) = new_Node;
}

bool isEmpty(struct sNode *top)
{
    return (top == NULL) ? 1 : 0;
}

struct Node *pop(struct sNode **top_ref)
{
    struct Node *res;
    struct sNode *top;

    if (isEmpty(*top_ref))
    {
        printf("Stack Underflow \n");
        getchar();
        exit(0);
    }
    else
    {
        top = *top_ref;
        res = top->t;
        *top_ref = top->next;
        free(top);
        return res;
    }
}

struct Node *newNode(int data)
{
    struct Node *Node = (struct Node *)
        malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}
int main()
{
    printf("Inorder Traversal of Binary Tree is:\n");
    struct Node *root = newNode(50);
    root->left = newNode(34);
    root->right = newNode(61);
    root->left->left = newNode(15);
    root->left->right = newNode(70);
    inorder(root);
    getchar();
    return 0;
}