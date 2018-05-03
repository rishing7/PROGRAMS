#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *newNode(int data)
{
    Node *newnode = (Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct Node *insert(Node *root, int key)
{
        if(root==NULL)
        {
            return newNode(key);
        }
        if(key > root->data)
        {
                root->right = insert(root->right, key);
        }
        else
        {
            root->left = insert(root->left, key);
        }
        return root;
}
void inorder(struct Node* root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
struct Node *deleteNode(Node *root, int key)
{
        if(root==NULL)
        {
            return root;
        }
        if(key<root->data)
        {
            root->left = deleteNode(root->left, key);

        }
        else if(key>root->data)
        {
            root->right = deleteNode(root->right, key);
        }
        else
        {
            if(root->left==NULL)
            {
                root=root->right;
                free(root->left);
                return root;
            }
        }

}
int main()
{
    Node *root=NULL;
    root = insert(root, 50);
    insert(root,60);
    insert(root, 80);
    insert(root, 90);
    insert(root, 15);
    insert(root, 30);
    inorder(root);

    return 0;
}
