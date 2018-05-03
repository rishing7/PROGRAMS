#include<bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
};
struct Node *newNode(int item)
{
    Node *newItem;
    newItem = (struct Node*)malloc(sizeof(Node));
    newItem->data = item;
    newItem->right=NULL;
    newItem->left=NULL;
    return newItem;
}
void inorderTraversal(Node *root)
{
    if(root==NULL)
        return ;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);

}
void iterative_inorder(Node *root)
{
    if(root==NULL)
        return ;
    Node *curr=root;
    stack<Node *> stk;
    while(!stk.empty() || curr!=NULL)
    {
        if(curr!=NULL)
        {
            stk.push(curr);
            curr=curr->left;
        }
        else
        {
            curr = stk.top();
            stk.pop();
            cout<<curr->data<<" ";
            curr = curr->right;
        }
    }
}
void preOrderTraversal(Node *root)
{
    if(root==NULL)
        return ;
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
void iterative_preOrder(Node *root)
{
    if(root==NULL)
        return;
    stack<Node*> stack;
    stack.push(root);
    Node *top;
    while(!stack.empty())
    {
        top = stack.top();
        stack.pop();
        cout<<top->data<<" ";

        if(top->right)
        stack.push(top->right);

        if(top->left)
        stack.push(top->left);
    }

}
void postOrderTraversal(Node *root)
{
    if(root==NULL)
        return ;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
void iterative_postOrder(Node *root)
{
    if(root==NULL)
        return;
    stack<Node*> stk;
    stack<int> res;
    stk.push(root);
    Node *top;
    while(!stk.empty())
    {
        top = stk.top();
        stk.pop();
        res.push(top->data);

        if(top->left)
        stk.push(top->left);

        if(top->right)
        stk.push(top->right);
    }
    while(!res.empty())
    {
        cout<<res.top()<<" ";
        res.pop();
    }
}
void levelOrderTraversal(Node *root)
{
    if(root==NULL)
        return ;
    queue<Node*> q;
    q.push(root);
    Node *top;
    while(!q.empty())
    {
        int size = q.size();
        while(size--)
        {
            top = q.front();
            q.pop();
            cout<<top->data<<" ";
            if(top->left)
                q.push(top->left);
            if(top->right)
                q.push(top->right);
        }
        cout<<"\n";
    }
}
bool isIdentical(Node *root1, Node *root2)
{
    if(root1 == NULL && root2 == NULL)
        return true;
    if(root1 == NULL || root2 == NULL)
        return false;
    return (root1->data == root2->data) && isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right);
}
bool iterative_isIdentical(Node *root1, Node *root2)
{
    if(root1 == NULL && root2 == NULL)
        return true;
    if(root1 == NULL || root2 == NULL)
        return false;
    stack<pair<Node *,Node*> > stack;
    stack.push({root1, root2});
    while(!stack.empty())
    {
        Node *x = stack.top().first;
        Node *y = stack.top().second;
        stack.pop();
        if(x->data!=y->data)
            return false;
        if(x->left && y->left)
            stack.push({x->left,y->left});
        if(x->left || y->left)
            return  false;
        if(x->right && y->right)
            stack.push({x->right,y->right});
        if(x->right || y->right)
            return  false;
    }
    return true;
}
int max(int a, int b)
{
    return a>b?a:b;
}
int height(Node *root)
{
    if(root == NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int iterativeHeight(Node *root)
{
    if(!root)
        return 0;
    queue<Node*> q;
    q.push(root);
    int height=0;
    Node *top;
    while(!q.empty())
    {
        int size = q.size();
        while(size--)
        {
          top = q.front();
          q.pop();
          if(top->left)
            q.push(top->left);
          if(top->right)
            q.push(top->right);
        }
        height++;
    }
    return height;
}
void leftView(Node *root)
{
    if(root==NULL)
        return ;
    queue<Node*> q;
    q.push(root);
    int flag;
    Node *top;
    while(!q.empty())
    {
        flag=0;
        int size = q.size();
        while(size--)
        {
            top = q.front();
            if(flag==0)
            {
                cout<<top->data<<" ";
                flag=1;
            }
            q.pop();
            if(top->left)
                q.push(top->left);
            if(top->right)
                q.push(top->right);
        }
    }
}
void rightView(Node *root)
{
    if(root==NULL)
        return ;
    queue<Node*> q;
    q.push(root);
    int flag;
    Node *top;
    while(!q.empty())
    {
        flag=0;
        int size = q.size();
        while(size--)
        {
            top = q.front();
            if(flag==0 && size==0)
            {
                cout<<top->data<<" ";
                flag=1;
            }
            q.pop();
            if(top->left)
                q.push(top->left);
            if(top->right)
                q.push(top->right);
        }
    }
}
int main()
{
    Node *root;
    root=(struct Node*)malloc(sizeof(Node));
    root->data=1;//first tree
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->left->right=newNode(7);
    Node *root1=(struct Node*)malloc(sizeof(Node));
    root1->data=1;//Second tree
    root1->left=newNode(2);
    root1->right=newNode(3);
    root1->left->left=newNode(4);
    root1->left->right=newNode(5);
    root1->right->left=newNode(6);
    root1->right->left->right=newNode(7);
    cout<< "Inorder Traversal(Recursive): ";
    inorderTraversal(root);
    cout<<endl;
    iterative_inorder(root);
    cout<< "\nPreOrder Traversal(Recursive): ";
    preOrderTraversal(root);
    cout<<endl;
    iterative_preOrder(root);
    cout<< "\nPostOrder Traversal(Recursive): ";
    postOrderTraversal(root);
    cout<<endl;
    iterative_postOrder(root);
    cout<<endl;
    if(isIdentical(root1,root))//Iterative Method is There
        cout<<"Both Tree is Identical\n";
    else
        cout<<"Both Tree is not Identical:\n";
    cout<<"\nHeight of the Tree is: "<<iterativeHeight(root);
    cout<<"\nLevel order Traversal Is:\n";
    levelOrderTraversal(root);
    cout<<"\nLeft View of Tree is: ";
    leftView(root);
    cout<<"\nRight View of Tree is: ";
    rightView(root);
    return 0;
}
