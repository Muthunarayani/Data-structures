#include <stdio.h>
#include<stdlib.h>                  // if we are not using typedef we have to specify the struct keyword in everywhere

typedef struct Node{
    int data;
    struct Node* next;
}Node;
struct Node* head;
void Insert(int x)
{
      Node* temp = ( Node*) malloc(sizeof( Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(){
    Node* temp = head;
    printf("List is:");
    while(temp != NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
 int n,i,x;
 printf("How many elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 printf("enter number:");
 scanf("%d",&x);
 Insert(x);
 Print();
}
}
