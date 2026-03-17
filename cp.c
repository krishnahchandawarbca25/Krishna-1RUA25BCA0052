#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void reverse()
{
    struct node *prev=NULL;
    struct node *current=head;
    struct node *next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    printf("Original list: ");
    display();
    reverse();
    printf("\nReversed list: ");
    display();
}
