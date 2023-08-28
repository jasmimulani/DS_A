//dequeue->frist insert last out....

#include<stdio.h>

#include<stdlib.h>

#define n 5

int f=-1,r=-1;
int arr[n];

int lastinsert(int val)
{
   if(r>=n)
   {
     printf("dequeue is full...\n");
   }
  else 
  {
     if(r<0)
     {
      f=r=0;
      arr[r]=val;
     }
     else
     {
      r++;
      arr[r]=val;
     }
  }
}

int firstdelate()
{
    if(f<0)
   {
      printf("dequeu is empty...\n");
   }  
       else
    {
      if(f==r)
       { 
        f= r= -1; 
       }  
      else
     {
       f++;
    }
   } 
}

int firstinsert(int val)
{
   if(f==0)
   {
      printf("error to first insert....\n");
   }
   else if(f<0)
   {
      f=r=0;
      arr[f]=val;   
   
   }
   else
   {
      f--;
      arr[f]=val;
   }   
}

int lastdelate()
{
  if(f>=r)
  {
   printf("error to last delate....\n");
  }
  else if(f==r)
  {
     f=r=0;
     arr[r];
  }
  else{
    r--;
    arr[r];
  }
}

int display()
{
    for(int i=f; i<=r; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
   lastinsert(10);
   lastinsert(20);
   lastinsert(30);
   lastinsert(40);
   display();

   firstdelate();
   display();

   lastdelate();
   lastdelate();
   lastdelate();
   display();

   firstinsert(50);
   firstinsert(60);
   display();
}
