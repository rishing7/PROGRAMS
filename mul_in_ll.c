#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL,*rem;
int main()
{
    struct node *newnode1,*newnode2,*temp,*mul,*s0,*s1;
    int r;
    newnode1=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element in the first node:");
    scanf("%d",&newnode1->data);
    newnode2=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element in the second node:");
    scanf("%d",&newnode2->data);
    head=newnode1;
    newnode1->link=newnode2;
    newnode2->link=NULL;
    mul=(struct node*)malloc(sizeof(sizeof(struct node)));
    printf("Enter the element by which u want to multiply:");
    scanf("%d",&mul->data);
    temp=head;
    s0=(struct node*)malloc(sizeof(struct node));
    s0->data=(newnode2->data)*(mul->data);
    s1->data=(newnode1->data)*(mul->data);
    if(s0->data>=10)
    {
        r=s0->data%10;
        rem=(struct node*)malloc(sizeof(struct node));
        rem->data=r;
    }
    s1->data=s1->data+rem->data;
    while(temp!=head)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
    printf("\n\t%d\n",mul->data);
    printf("%d",s1->data);
    printf("%d\t",s0->data);
    return 0;
}
