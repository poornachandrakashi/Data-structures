#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

int main(){
  struct node *p,*head,*prev;
  int i,n;
  printf("Enter the number of Elements:");
  scanf("%d",&n);
  head = NULL;
  for(i =0;i<n;i++){
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value node  %d:",i);
    scanf("%d",&p ->data);
    p->next = NULL;
    if(head == NULL){
      head = p;
    }
    else{
      prev -> next=p;
    }
    prev = p;
  }
  struct node *temp;
  temp = head;
while(temp){
  printf("%d\n",temp->data);
  temp= temp->next;
}
if(head){
  printf("All the nodes are deleted!!!");
}
else{
  printf("All the nodes still exits :)");
}
  // printf("%d",p->data);
  return 0;
}
