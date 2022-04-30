#include <stdio.h> 
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void count_of_nodes(struct node*);
void print_data(struct node*);
void del_at_pos(struct node*);
struct node *tail,*temp;
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
    newnode->next=NULL;
     if(tail==NULL)
     {
         tail=temp=newnode;
         tail->next=newnode;
     }
     else
     {
         newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
     }
    printf("\nDo you want to continue or not(1,0): ");
    scanf("%d",&choice);
    }
}
count_of_nodes(tail);
printf("\nDisplay of linked list:\n");
print_data(tail);
del_at_pos(tail);
print_data(tail);

    return 0;
}
void count_of_nodes(struct node *head){
    int count=0;
     if(tail==NULL){
         printf("\nlist is empty\n");
         exit(0);
     }
     else{
         temp=tail->next;
         while(temp->next!=tail->next){
         count++;
         temp=temp->next;
     }
        count++;
     }
       printf("The total no of node in list: %d",count);
}
void print_data(struct node *head){
    if (tail==NULL){
        printf("List is empty");
        exit(0);
    }
   else{
    temp=tail->next;
    while(temp->next!=tail->next)
     {
        printf("%d\t",temp->data);
        temp=temp->next;
     }
        printf("%d\t",temp->data);
   }
    }
    void del_at_pos(struct node *head)
    {
        int pos,i=1;
        struct node *temp1;
        printf("\nEnter the position you want to delete:");
        scanf("%d",&pos);
        temp=tail->next;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        temp1=temp->next;
        temp->next=temp1->next;
        free(temp1);
        temp1=NULL;
        printf("\nDisplay of linked list after deletion:\n");
    }
