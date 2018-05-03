#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;

}
void display(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return ;
}
struct Node *addAtHead(Node *head,int data)
{
    Node *newNode = createNode(8);
    newNode->next = head;
    head = newNode;
    return head;
}
void addAtEnd(Node *head, int data)
{
    Node *newNode = createNode(data);
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void addAfterData(Node *head, int data, int item)//item to be inserted after data
{
    Node *temp = head;
    while(temp->data!=data)
    {
        temp = temp->next;
    }
    Node *newNode = createNode(item);
    newNode->next = temp->next;
    temp->next = newNode;
    return ;
}
struct Node *deleteHeadNode(Node *head)
{
    Node *temp = head;
    if(head==NULL)
    {
        cout<<"List Is Empty\n";
        return NULL;
    }
    head = head->next;
    temp->next = NULL;
    free(temp);
    return head;

}
void deleteEndNode(Node *head)
{
    Node *temp = head;
    Node *prevNode;
    if(head==NULL)
    {
        cout<<"List Is Empty\n";
        return ;
    }
    while(temp->next!=NULL)
    {
        prevNode = temp;
        temp = temp->next;
    }
    prevNode->next = NULL;
    free(temp);
    return ;
}
void deleteItem(Node *head, int item)
{
    Node *temp = head;
    while(temp->next->data != item)
    {
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = del->next;
    free(del);
    return ;
}
struct Node *reverse(Node *head)
{
        Node *prevNode, *nextNode=NULL, *temp = head;
        prevNode = head;
        temp = temp->next;
        prevNode->next = nextNode;
        while(temp!=NULL)
        {
            nextNode = temp;
            temp = temp->next;
            nextNode->next = prevNode;
            prevNode = nextNode;
        }
        return nextNode;
}
int main()
{
    Node *head;
    head  = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    cout<<"Display Linked List: ";
    display(head);
    cout<<endl<<"\nAdd AT Head: ";
    Node *head1 = addAtHead(head, 8);
    display(head1);
    addAtEnd(head1, 10);
    cout<<endl<<"\nAdd At End: ";
    display(head1);
    addAfterData(head1, 2, 5);
    cout<<endl<<"\nAdd after Item: ";
    display(head1);
    head1 = deleteHeadNode(head1);
    cout<<"\n\nDelete Head Node: ";
    display(head1);
    deleteEndNode(head1);
    cout<<"\n\nDelete End Node: ";
    display(head1);
    deleteItem(head1,2);
    cout<<"\n\nDelete Item: ";
    display(head1);
    head1 = reverse(head1);
    cout<<"\n\nReverse of Linked List: ";
    display(head1);
    cout<<endl<<endl;
    return 0;
}
