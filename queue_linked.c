#include<stdio.h>
#include<stdlib.h>
struct node{
 struct node *next;
 int data;
};
void isempty();
void display();
void enqueue();
void dequeue();
void peek();
struct node *front=NULL;
struct node *rear=NULL;
struct node *temp;
void main()
{
    int ch;
    do{
        printf("\n 1.Isempty:\n 2.Display:\n 3.enqueue:\n 4.dequeue:\n 5.peek:\n\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:isempty();
            break;
            case 2:display();
            break;
            case 3:enqueue();
            break;
            case 4:dequeue();
            break;
            case 5:peek();
            break;
           default:printf("\nInvalid choice");
            exit(0);
        }
    }
      while(ch!=0);
}

void isempty(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty");
    }
}
void display(){
    
    if(front==NULL && rear==NULL){
        printf("Queue is Empty");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
void enqueue(){
         struct node *newnode;
         newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data you want to insert: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue(){
        temp=front;
    if(front==NULL&& rear==NULL){
        printf("Queue is Empty");
    }
    else{
        printf("The dequeued element :%d",front->data);
        front=front->next;
        free(temp);
    }
}
void peek(){
        if(front==NULL&& rear==NULL){
            printf("queue is empty");
        }
        else{
            printf("The front element:%d",front->data);
        }
}

