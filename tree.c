#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* left;
    int data;
    struct node* right;
};
struct StackNode
{
    struct StackNode *next;
    struct node *tnode;
}*top=NULL;
void push(struct node *item)
{
    struct StackNode *temp;
    temp=(struct StackNode**)malloc(sizeof(struct StackNode));
    if(temp==NULL)
    {
        printf("Memory is overflow");
        return;
    }
    temp->next=NULL;
    temp->tnode=temp;
    temp->next=top;
    top=temp;
    return;
}
struct node* pop()
{
    struct StackNode *temp;
    struct node *trnode;
    if(top==NULL)
    {
        printf("Stack is empty");
        return;
    }
    temp=top;
    top=top->next;
    trnode=temp->tnode;
    free(temp);
    return trnode;
};
/*void inorder(struct node *root)
{
    struct node tnode;
    if(root!=NULL)
    {
        while(1)
        {
            while(root)
            {
                push(root);
                root=root->left;
            }
            if(top==NULL)
                break;
            root=pop();
            printf("%d\t",root->data);
            root=root->right;
        }
    }
}*/
 struct node *newnode(int data)
{
        struct node *node;
        node=(struct node*)malloc(sizeof(struct node));
        node->data=data;
        node->left=NULL;
        node->right=NULL;
        return node;
}
void postorder(struct node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
void inorder(struct node* root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if(root)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void printleveltraversal(struct node *root,int level)
{
    if(root==NULL)
        return;
        if(level==1)
            printf("%d\t",root->data);
        else if(level>1)
        {
            printleveltraversal(root->left,level-1);
            printleveltraversal(root->right,level-1);
        }
}
int height(struct node *root)
{
    int lheight,rheight;
    if(root==NULL)
        return 0;
    else
    {
        lheight=height(root->left);
        rheight=height(root->right);
        if(lheight>rheight)
            return lheight+1;
        else
            return rheight+1;
    }
}
int diameter(struct node* root)
{
    if(root==NULL)
        return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    int ldiameter=diameter(root->left);
    int rdiameter=diameter(root->right);
        return max(lheight+rheight+1,max(ldiameter,rdiameter));
}
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
int main()
{
    struct node *node;
    int ht,i;
    node=newnode(1);
    node->left=newnode(2);
    node->right=newnode(3);
    node->left->left=newnode(4);
    node->left->right=newnode(5);
    node->left->right->left=newnode(6);
    ht=height(node);
    printf("Height of the tree is %d\n",ht);
    printf("postorder traversal is:\n");
    postorder(node);
    printf("\npreorder traversal is:\n");
    preorder(node);
    printf("\ninorder traversal is:\n");
    inorder(node);
    printf("\nlevel traversal:\n");
    for(i=1;i<=ht;i++)
        printleveltraversal(node,i);
    printf("\nDiameter of the tree is:%d",diameter(node));
    return 0;
}
