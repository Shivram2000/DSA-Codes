#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next;
    int data;
};
void check();
void push();
void display();
void pop();
void peek();
struct node *top=NULL,*temp;
void main()
{
    int ch;
    do{
        printf("\n 1.check:\n 2.push:\n 3.display:\n 4.Pop:\n 5.peek:\n\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:check();
            break;
            case 2:push();
            break;
            case 3:display();
            break;
            case 4:pop();
            break;
            case 5:peek();
            break;
           default:printf("\nInvalid choice");
            exit(0);
        }
    }
      while(ch!=0);
}
void check(){
    if(top==NULL){
        printf("Stack is empty");
    }
}
void push(){
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
      printf("Enter the data:");
        scanf("%d",&x);
        newnode->data=x; 
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

void pop(){
    if(top==NULL){
        printf("Stack is empty");
    }
    else{
        temp=top;
    printf("poped Element is: %d",temp->data);
    top=top->next;
    free(temp);
    }
}
    void peek(){
        if(top==NULL){
            printf("Stack is empty");
        }
        else{
            printf("Top Element: %d",top->data);
        }
    }

