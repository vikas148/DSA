#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
void traversal(struct node*ptr)
{
while (ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->link;
}
}
struct node*insertfirst(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->link=head;
    ptr->data=data;
    return ptr;
}
int main()
{
   struct node* head;
   struct node *second;
   struct node *third;
   head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
   head->data=4;
   head->link=second;
   second->data=5;
   second->link=third;
   third->data=6;
   third->link=NULL;
   printf("traversal before insertion\n");
   traversal(head);
   head=insertfirst(head,7);
   printf("traversal after insertion\n");
   traversal(head);
   return 0;
}
