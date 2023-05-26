//GRAPH Creation using Linked List
#include<stdio.h>
#include<stdlib.h>
struct edge_2105708;
struct node_2105708
{
    int data_2105708;
    struct node_2105708 *nextnode_2105708;
    struct edge_2105708 *next_2105708;
};
struct edge_2105708
{
    struct node_2105708 *next_2105708;
    struct edge_2105708 *link_2105708;
};
void createnl_2105708(int a_2105708)
{
    struct node_2105708 *temp_2105708;
    struct node_2105708 *n_2105708=(struct node_2105708*)malloc(sizeof(struct node_2105708));
    n_2105708->data_2105708=a_2105708;
    n_2105708->nextnode_2105708=NULL;
    n_2105708->next_2105708=NULL;
    temp_2105708=start_2105708;
    

    
}