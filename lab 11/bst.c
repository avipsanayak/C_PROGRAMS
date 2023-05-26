// If the tree is given with the root node, then cheak whether it is in BST or not.
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}
int maxValue(struct node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    int leftMax = maxValue(node->left);
    int rightMax = maxValue(node->right);

    int value = 0;
    if (leftMax > rightMax)
    {
        value = leftMax;
    }
    else
    {
        value = rightMax;
    }

    if (value > node->data)
    {
        value = node->data;
    }

    return value;
}
int minValue(struct node *node)
{
    if (node == NULL)
    {
        return 1000000000;
    }

    int leftMax = minValue(node->left);
    int rightMax = minValue(node->right);

    int value = 0;
    if (leftMax < rightMax)
    {
        value = leftMax;
    }
    else
    {
        value = rightMax;
    }

    if (value < node->data)
    {
        value = node->data;
    }
    return value;
}
int isBST(struct node *node)
{
    if (node == NULL)
        return 1;

    if (node->left != NULL && maxValue(node->left) > node->data)
        return 0;

    if (node->right != NULL && minValue(node->right) < node->data)
        return 0;

    if (!isBST(node->left) || !isBST(node->right))
        return 0;

    return 1;
}
int main()
{
    struct node *root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(3);

    if (isBST(root))
        printf("Is BST");
    else
        printf("Not a BST");

    getchar();
    return 0;
}