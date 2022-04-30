#include<stdio.h>
#include<stdlib.h>
#define N 10
int queue[N] ,front=-1,rear=-1;
void isempty();
void display();
void enqueue();
void dequeue();
void peek();
void isfull();
void main()
{
    int ch;
    do{
        printf("\n 1.isempty:\n 2.Display:\n 3.enqueue:\n 4.dequeue:\n 5.peek:\n 6.Isfull: \n\nEnter choice: ");
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
            case 6:isfull();
            break;
           default:printf("\nInvalid choice");
            exit(0);
        }
    }
      while(ch!=0);
}

void isempty(){
    if(front==-1 && rear==-1){
        printf("queue is empty");
    } 
}
void display(){
    int i;
    i=front;
    if(front==-1 && rear==-1){
        printf("queue is Empty");
    }
    else{
        while(i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }
}
void enqueue(){
    int x;
    printf("Enter the data you want to insert: ");
    scanf("%d",&x);
    if(((rear+1)%N)==front){
        printf("queue is full");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("The dequeued element :%d",queue[front]);
        front=(front+1)%N;
    }
}
void peek(){
        if(front==-1 && rear==-1){
            printf("queue is empty");
        }
        else{
            printf("The front element:%d",queue[front]);
        }
}
void isfull(){
    if(((rear+1)%N)==front){
        printf("queue is full");
    }
}
 
