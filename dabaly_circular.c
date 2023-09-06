#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
 struct node *head=NULL;
 void display()
 {
    struct node *ptr=head;
    if(head==NULL)
      printf("list is empty......");
    else
    {
        while(ptr->next!=head)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("%d ",ptr->data);
    }
      printf("\n");
 }
 void insertend(int val)
 {
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));

    temp->data=val;
    temp->prev=NULL;

    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return; 
    }
    while(ptr->next!=head)
    {
      ptr = ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    temp->prev=ptr;
    return;
 }
 void deletend()
 {
  struct node *ptr=head;
  struct node *p;
  if(head->next==NULL)
  {
    head=NULL;
    free(ptr);
    return;
  }
 }
 void insertfrist(int val)
 {
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));

    temp->data=val;
    temp->prev=NULL;

    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return; 
    }
    while(ptr->next!=head)
    {
      ptr = ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    temp->next=head;
    head=temp;
    return;
 }
  void deletfrist()
  {
    struct node *ptr=head;
    head=ptr->next;
    free(ptr);
  }

 void insertmid(int val, int p)
 {
   struct node *ptr=head;
   struct node *temp=malloc(sizeof(struct node));
   temp->data=val;
   temp->prev=NULL;
   while(ptr->data!=p)
     ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
    temp->prev=ptr;
 }

 void deletmid(int pos)
 {
     struct node *ptr=head;
     struct node *p;
     while(ptr->data!=pos)
     {
      p=ptr;
      ptr=ptr->next;
     }
     p->next=ptr->next;
     free(ptr);
 }
 int main()
 {
    insertend(10);
     insertend(20);
      insertend(30);
       insertend(40);
        insertend(50);
          display();

      insertmid(60,20);
      display();   

 }