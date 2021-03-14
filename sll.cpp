#include<bits/stdc++.h>

using namespace std;

class Node{
  public:
    int data;
    Node *next;
};

void display(Node *head){
  while(head){
    printf("%d\n",head->data);
    head = head->next;
  }
if(head){
while(head){
    printf("%d\n",head->data);
    head = head->next;
  }
}
else{
  printf("Deleted");
}

  return 0;

}

//To create a simple linked list
int main(){
  Node *head = NULL;
  Node *second = NULL;
  Node *third = NULL;

  //Allocating the nodes
  head = new Node();
  second =new Node();
  third = new Node();

  //Assigning data to the first node
  head -> data =1;
  head->next = second;

  second ->data = 2;
  second -> next =third;

  third -> data = 3;
  third -> next =NULL;

  //Traversing the nodes
  struct node *temp;
  // temp = head;
display(head);
return 0;
}

void display(Node *head){
  while(head){
    printf("%d\n",head->data);
    head = head->next;
  }
if(head){
while(head){
    printf("%d\n",head->data);
    head = head->next;
  }
}
else{
  printf("Deleted");
}

  return 0;

}