//dublay link list
#include<stdio.h>
#include<stdlib.h>
   struct node
{
   int data;
   struct node *next;
   struct node *prev;
};
  struct node *head = NULL;

  void display()
  {
     struct node *ptr=head;
     if(head == NULL)
      printf("list is empty../n");
   else
   {
      while(ptr !=NULL)
      {
         printf("%d ",ptr -> data);
         ptr = ptr -> next;
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
      temp->  prev = NULL;

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
      temp -> prev = ptr;
      return;
  }
  void deletend()
  {
    struct  node *ptr = head;
    struct  node *p;
    if (head -> next == NULL)
    {
      head = NULL;
      free(ptr);
      return;
    }
    while(ptr -> next != NULL)
    {
      p = ptr;
      ptr = ptr -> next;
    }
     p -> next = NULL;
     free(ptr);
     return;
  }
   void fristinsert(int val)
   {
     struct node *ptr = head;
      struct node  *temp = malloc(sizeof(struct node));

      temp -> data =val;

      if(head == NULL)
      {
        head = temp;
        temp -> next = NULL;
        temp -> prev = NULL;
        return;
      }  
        temp -> next = ptr;
        ptr -> prev = temp;
        head = temp;
        return;
   }
   void fristdelete()
   {
    struct node *ptr =head;

    if(head = ptr ->next)
    {
        free(ptr);
    }
   }
   void midinsert(int val,int pos)
   {
       struct node *ptr=head;
       struct node  *temp = malloc(sizeof(struct node));
       temp -> data = val;

      
      while(ptr -> data !=pos)
      {
         ptr = ptr -> next;
         
      }
      temp -> next = ptr -> next;
      ptr -> next = temp;
      return;
   }
   void deleteMid(int pos)
{
    struct node *ptr = head;
    struct node *p ;
    while(ptr -> data != pos){
        p = ptr;
        ptr = ptr -> next;
    }
    p -> next = ptr -> next;
    free(ptr);
    return;
}

  int main()
  {
   insertend(10);
      insertend(20);
         insertend(30);
            display();
              fristinsert(40);
                fristinsert(50);
              display();
          midinsert(90,40);
       midinsert(100,40);
    display();
  deleteMid(10);
display();

  }  