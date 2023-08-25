#include<stdio.h>
#define n 5
int a[n],f=-1,r=-1;
int insertend(int val)
{
    if(r < 0)
    {
        f = r = 0;
        a[r]=val;
    }
    else if((r+1)%n==f)
    {
        printf("queue is full..\n");
    }
    else
    {
        r = (r+1) % n;
         a[r]=val;
    }
}
int delate()
{
    if(r<0)
    printf("queue is empty...\n");
else if(f==r)
{
    f=r=-1;
}
else
    f=(f+1)%n;
}
int display()
{
    int i = f;
    if(f<0)
  {  
      printf("queue is empty...");
  }
    else
    {
        do
        {
            printf("%d ",a[i]);
             i = (i+1) % n;
        }
        while(i != (r+1)%n);
    }
    printf("\n");
  }  
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertend(60);
    delate();
    display();
}