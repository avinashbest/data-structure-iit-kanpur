#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node* left;
    struct node* right;
};

//Create a new node
struct node* create_node(int value)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->item = value;
    new_node->left = NULL;
    new_node->right = NULL;

    return  new_node;
};

//Insert on the left of the node
struct node* insert_left(struct node* root, int value)
{
    root->left = create_node(value);
    return root->left;
};

//Insert on the right of the node
struct node* insert_right(struct node* root, int value)
{
    root->right = create_node(value);
    return root->right;
};

int main(void)
{
    struct node* root = create_node(1);
    printf("Root node is created\n");
    insert_left(root, 2);
    printf("Left node is created\n");
    insert_right(root, 3);
    printf("Right node is created\n");
    insert_left(root->left, 4);
    return 0;
}