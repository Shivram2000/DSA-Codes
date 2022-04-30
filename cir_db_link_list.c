#include <stdio.h> 
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void count_of_nodes(struct node*,struct node*);
void print_data(struct node*,struct node*);
struct node *head,*tail,*temp;
int main()
{
int choice;
struct node *newnode;
printf("Do you want to insert the nodes or not (1,0): ");
scanf("%d",&choice);
while(choice)
{
    newnode=(struct node*)malloc(sizeof(struct node));
   if(newnode==NULL)
   {
    printf("Memory alloction failed");
    exit(0);
   }
    else
    {
    printf("Enter the value of node:");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
     if(head==NULL)
     {
         head=tail=newnode;
         head->next=newnode;
         head->prev=head;
     }
     else
     {
         tail->next=newnode;
         newnode->prev=tail;
         newnode->next=head;
         head->prev=newnode;
         tail=newnode;
     }
    printf("\nDo you want to continue or not(1,0): ");
    scanf("%d",&choice);
    }
}
count_of_nodes(head,tail);
printf("\nDisplay of linked list:\n");
print_data(head,tail);
    return 0;
}
void count_of_nodes(struct node *head,struct node *tail){
    int count=0;
     if(head==NULL){
         printf("\nlist is empty\n");
         exit(0);
     }
         temp=head;
         while(temp!=tail)
         {
         count++;
         temp=temp->next;
         }
        count++;
       printf("The total no of node in list: %d",count);
}
void print_data(struct node *head, struct node *tail){
    if (head==NULL){
        printf("List is empty");
        exit(0);
    }
    else{
    temp=head;
    while(temp!=tail)
     {
        printf("%d\t",temp->data);
        temp=temp->next;
     }
        printf("%d\t",temp->data);
   }
}