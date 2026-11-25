#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
};

int main(){
  struct node *n1, *n2, *n3;
  n1=malloc(sizeof(struct node));
  n2=malloc(sizeof(struct node));
  n3=malloc(sizeof(struct node));

  n1->data=10;
  n2->data=20;
  n3->data=30;
  
  n1->next=n2;
  n2->next=n3;
  n3->next=NULL;

  struct node *temp=n1;
  while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
  }
  printf("NULL");
  return 0;
}
