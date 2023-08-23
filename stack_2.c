#include<stdio.h>
#define n 5
int a[n],top=-1,i,c;
    int insertend(int val)
    {
        if(top>=n-1)
        printf("array is full...\n");

    else{
        top++;
        a[top]=val;
    }
    }
    int display()
    {
        if(top<0)
        printf("array is empty...\n");
      else
      {
        for(int i=0; i<=top; i++)
         printf("\t%d",a[i]);
      }
    }
    int main()
{
    insertend(40);
    insertend(20);
    insertend(30);
    insertend(10);
    insertend(50);
    display();
}