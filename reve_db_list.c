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
void reverse_node(struct node*);
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
        newnode->prev=tail;
        tail=newnode;
    }
    printf("Do you want to continue or not (0,1):");
    scanf("%d",&choice);
}
}
count_of_nodes(head);
print_data(head);
reverse_node(head);
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
     void reverse_node(struct node* head)
{
	struct node *current,*nextnode;
	if(head==NULL)
	{
		printf("\n List is empty");
		exit (0);
	}
	else
	{
		current=head;
		while(current!=NULL)
		{
			nextnode=current->next;
			current->next=current->prev;
			current->prev=nextnode;
			current=nextnode;
		}
		current=head;
		head=tail;
		tail=current;
		print_data(head);
	}
}