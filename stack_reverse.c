#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
void push ();
void display();
void reverse();
struct node *top=NULL, *temp;
void main()
{
int ch;
    do{
        printf("\n 1.Push:\n 2.Display:\n 3.Reverse:\n\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2:display();
            break;
            case 3:reverse();
            break;
            default :printf("\nInvalid choice");
            exit(0);
        }
    }
    while(ch!=0);
    }
    void push(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
      printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=top;
        top=newnode;
    }
    void display(){
    temp=top;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else{
     while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
       }
    }
}
void reverse(){
  struct node *prev;
  struct node *current;
  struct node *next;
    prev=NULL;
    current=top;
    next=top;
    printf("After Reverse stack :");
    while(next!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
top=prev;
temp=top;
    display();
}