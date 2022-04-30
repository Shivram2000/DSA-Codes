#include<stdio.h>
#include<stdlib.h>
#define N 20
int stack[N],top=-1;
void check();
void display();
void push();
void pop();
void peek();

void main()
{
    int ch;
    do{
        printf("\n 1.check:\n 2.Display:\n 3.push:\n 4.Pop:\n 5.peek:\n\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:check();
            break;
            case 2:display();
            break;
            case 3:push();
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
     if(top==-1){
     printf("\nStack is empty");
 }
 }
 void display()
 {
     int i;
     printf("Display of stack:");
     for(i=top;i>=0;i--){
         printf("\t%d",stack[i]);
     }
 }
     void push(){
        int x;
        printf("Enter the data: ");
        scanf("%d",&x);
        if(top ==(N-1)){
            printf("Stack is full");
            exit(0);
        }
        else{
            top++;
            stack[top]=x;
        }
     }
 void pop(){
     int y;
     if(top==-1){
         printf("Stack is empty");
         exit(0);
     }
     else{
        y=stack[top];
        top--;
        printf("\n The deleted item:%d",y);
     }
 }
 void peek(){
     if(top==-1){
         check();
     }
     else{
         printf("Top element: %d",stack[top]);
     }
 }