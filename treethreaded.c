#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *lnode;
    int data;
    struct node *rnode;
};
struct node *newnode(int data)
{
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->lnode=NULL;
        temp->rnode=NULL;
        temp->data=data;
        return temp;
}
void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->lnode);
        printf("%d\t",root->data);
        inorder(root->rnode);
    }
    return ;
}
int height(struct node *root)
{
    if(root==NULL)
        return 0;
    int lheight=height(root->lnode);
    int rheight=height(root->rnode);
    if(lheight>rheight)
        return lheight+1;
    else
        return rheight+1;
}
int main()
{
    struct node *root;
    root=newnode(1);
    root->lnode=newnode(2);
    root->rnode=newnode(3);
    root->lnode->lnode=newnode(4);
    root->lnode->rnode=newnode(5);
    printf("Inorder traversal:");
    inorder(root);
    printf("\nHeight of the tree is:%d",height(root));
    return 0;
}
