#include<stdio.h>
#define MAX 5
int data[MAX];
int next[MAX];
int head=0;

int main(){
 int i;
 data[0]=10;
 data[1]=30;
 data[2]=20;

 next[0]=2;
 next[1]=-1;
 next[2]=1;
 
 i=head;
 while(i!=-1){
  printf("%d",data[i]);
  i=next[i];
 }
 printf("NULL");
 return 0;
}
