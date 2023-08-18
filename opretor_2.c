#include<stdio.h>
#include<stdio.h>
int main()
{
    int a=1, b=2, c=1;

    c=--a && b && c; 
    printf("\n a:%d, b:%d,c:%d",a,b,c);

    c=a && --b && c;
    printf("\na:%d, b:%d,c:%d",a,b,c);

    c=--a && --b && c;
    printf("\na:%d, b:%d,c:%d",a,b,c);

    c=++a && b && c;
    printf("\na:%d, b:%d,c:%d",a,b,c);

    c=a && ++b && c;
    printf("\na:%d, b:%d,c:%d",a,b,c);

    c=++a && ++b && c;
    printf("\na:%d, b:%d,c:%d",a,b,c);

    c=--a ||  b || c;
   printf("\n a:%d, b:%d,c:%d",a,b,c);

    c=a || --b || c;
   printf("\n a:%d, b:%d,c:%d",a,b,c);

   c=--a || --b || c;
   printf("\n a:%d, b:%d,c:%d",a,b,c);

    c=++a || b ;
   printf("\n a:%d, b:%d,c:%d",a,b,c);

   c=a || ++b;
   printf("\n a:%d, b:%d,c:%d",a,b,c);

   c=++a || ++b; 
   printf("\n a:%d, b:%d,c:%d",a,b,c);
}   