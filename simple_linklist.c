//simple link list
#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*next;
};
  struct node*head = NULL;

  void display()
  {
     struct node*ptr=head;
     if(head == NULL)
      printf("list is empty../n");
   else
   {
      while(ptr !=NULL)
      {
         printf("%d ",ptr -> data);
         ptr=ptr->next;
      }
   }
   printf("\n");
  } 
  void insertend(int val)
  {
      struct node *ptr = head;
      struct node  *temp = malloc(sizeof(struct node));

      temp -> data = val;
      temp -> next = NULL;

      if (head == NULL)
      {
         head = temp;
         return;
      }
      while(ptr -> next != NULL)
      {
         ptr = ptr -> next;
      }
      ptr -> next = temp;
      return;
  }
  void deletend()
  {
    struct  node *ptr = head;
    struct  node *p;
    if (head -> next == NULL)
    {
      head=NULL;
      free(ptr);
      return;
    }
    while(ptr -> next != NULL)
    {
      p = ptr;
      ptr = ptr -> next;
    }
     p-> next = NULL;
     free(ptr);
     return;
  }
  int main()
  {
   insertend(10);
   insertend(20);
   insertend(30);
   insertend(40);
   insertend(50);
   insertend(60);

   display();

   deletend();
   deletend();
   deletend();
   deletend();

   display();
  }