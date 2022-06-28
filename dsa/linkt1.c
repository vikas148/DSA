//creation of linked list and traversal
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
    
};
void linkedlisttraversal(struct node*ptr)
{
    while (ptr!=NULL )
    {
        printf("\t%d",ptr->data);
        ptr=ptr->link;
    }
    
}
int main()
{
struct node*head;
struct node*second;
struct node*third;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
head->data=7;
head->link=second;
second->data=10;
second->link=third;
third->data=5;
third->link=NULL;
linkedlisttraversal( head);
    return 0;
}
