//self refential node
#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node*ptr;

};
int main()
{
    struct node a,b,c,d;
    a.ch ='A';
    a.data = 50;
    a.ptr = NULL;

    b.ch = 'a';
    b.data = 105;
    b.ptr = NULL;

    c.ch='B';
    c.data = 250;
    c.ptr = NULL;

    d.ch='b';
    d.data = 350;
    d.ptr = NULL;
  //  printf("A: data: %d\tchar: %c",a.data, a.ch);
   // printf("\nB: data: %d\tchar: %c",b.data, b.ch);
    a.ptr=&b;
    b.ptr=&c;
    c.ptr=&a;
    //c.ptr=&d;
    //d.ptr=&c;

    printf("B: data: %d\tchar: %c\n",a.ptr->data,a.ptr->ch);
    printf("A: data: %d\tchar: %c\n",b.ptr->data,a.ptr->ch);
    printf("c: data: %d\tchar: %c\n",c.ptr->data,c.ptr->ch);
   // printf("d: data: %d\tchar: %c\n",d.ptr->data,d.ptr->ch);
}
