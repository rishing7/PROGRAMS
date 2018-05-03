#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head,*first,*second;
    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&first->data);
    head = first;
    second = (struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&second->data);
    first->next = second;
    second->next = NULL;
    printf("%d %d",head->data,second->data);
    return 0;
}
