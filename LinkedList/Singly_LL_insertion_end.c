#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void main()
{
    struct node *n1,*n2,*n3;
    n1=malloc(sizeof(struct node));
    n2=malloc(sizeof(struct node));
    n3=malloc(sizeof(struct node));

    n1->data=1;
    n2->data=2;
    n3->data=3;

    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;

    struct node *newnode=malloc(sizeof(struct node));
    printf("enter your data that you want to insert at the end");
    scanf("%d",&newnode->data);
    struct node *temp=n1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
     temp->next=newnode;
     newnode->next = NULL;

    temp=n1;
    printf("The Final Linkedlist after insertion at the end\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
