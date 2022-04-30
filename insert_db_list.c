/*WAP to insert a node at a particular location of a double linked list?*/
#include <stdio.h> 
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void count_of_nodes(struct node*);
void print_data(struct node*);
void add_at_pos(struct node*);
struct node *tail,*head,*temp; 
int main()
{
struct node *newnode;
int choice;
printf("Do you want to insert the first node or not (0,1) :");
scanf("%d",&choice);
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL){
    printf("\nMemory allocation failed");
    exit(0);
}
else{
    printf("Enter the data of the linked list: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
    printf("Do you want to continue or not (0,1):");
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
    if(head==NULL){
        printf("\nList is empty\n");
        exit(0);
     }
      temp=head;
      while(temp!=NULL){
          count++;
          temp=temp->next;
      }
      printf("The total no of nodes is: %d",count);
     }
     void print_data(struct node *head){
         if(head==NULL){
             printf("\nlinked list is empty\n");
             exit(0);
         }
         temp=head;
         printf("\nDisplay the linked list:\n");
         while(temp!=NULL){
         printf("%d\t",temp->data);
         temp=temp->next;
     }
     }
void add_at_pos(struct node *head){
    int pos;
    int i=1;
    printf("\nEnter the position at which you want to insert node: ");
    scanf("%d",&pos);
    struct node *ptr;
    temp=head;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to be inserted in linked list: ");
    scanf("%d",&ptr->data);
    ptr->prev=NULL;
    ptr->next=NULL;
    while(i<pos-1){
    temp=temp->next;
    i++;
     }
    ptr->prev=temp;
    ptr->next=temp->next;
    temp->next=ptr;
    ptr->next->prev=ptr;
    printf("\n Display of linked list ater insertion of a node:\n");
}