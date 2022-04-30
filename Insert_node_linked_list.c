#include <stdio.h> 
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void count_of_nodes(struct node*);
void print_data(struct node*);
void add_at_pos(struct node*);
struct node *head,*temp;
int main()
{
struct node *newnode;
char choice;
printf("Do you want to enter the first node or not (1,0): ");
scanf("%d",&choice);
while(choice)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nMemory allocation failed");
        exit(0);
    }
    else{
        printf("Enter the data of the linked list: ");
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        if (head==NULL)
        {
            head=temp=newnode;
        }
        else{
            temp->link=newnode;
            temp=newnode;
        }
    printf("Do you want to continue or not (1,0) :");
    scanf("%d",&choice);
   }
}
    count_of_nodes(head);
    print_data(head);
    add_at_pos(head);
    print_data(head);
    return 0;
}
void count_of_nodes(struct node *head)
{
    int count=0;
    if(head==NULL)
    {
        printf("\nThe linked list is empty:\n");
        exit(0);
    }
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    printf("\n The number of nodes in linked list is : %d",count);
    }
void print_data(struct node *head)
{
    if(head==NULL){
        printf("\nLinked list is empty\n");
        exit(0);
      }
      temp=head;
      printf("\nDisplay the linked list: \n");
      while(temp!=NULL){
          printf("%d\t",temp->data);
          temp=temp->link;
      }
}
      void add_at_pos(struct node*head)
      {
      temp=head;
      struct node *ptr=(struct node*)malloc(sizeof(struct node)); 
      int pos;
      printf("\nEnter the position at where u want to inserted: ");
      scanf("%d",&pos);
      printf("\nEnter the value of the linked list: ");
      scanf("%d",&ptr->data);
      ptr->link=NULL;
      pos--;
      while(pos!=1){
          temp=temp->link;
          pos--;
      }
         ptr->link=temp->link;
         temp->link=ptr;
}


    
      
