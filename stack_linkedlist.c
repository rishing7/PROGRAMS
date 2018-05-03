#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL;
void push(int item)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory is overflow");
        return;
    }
    temp->next=NULL;
    temp->data=item;
    temp->next=top;
    top=temp;
    return;
}
void pop()
{
    int item;
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    temp=top;
    top=top->next;
    item=temp->data;
    free(temp);
    printf("popped element is:%d",item);
    return;
}
void display()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack is empty");
        return;
    }
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return;
}
int main()
{
    int choice,item;
    do
    {
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the number to be inserted");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
        }
    }while(choice<4);
    return 0;
}
