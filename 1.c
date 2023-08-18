#include<stdio.h>
int main()
{
    int a=1, b=2, c=1,d;

    d=--a && b && c; //=> 0210
    printf("\n a:%d, b:%d,c:%d,d:%d",a,b,c,d);

    d=a && --b && c;//0210
    printf("\na:%d, b:%d,c:%d,d:%d",a,b,c,d);

    d=--a && --b && c;//1111
    printf("\na:%d, b:%d,c:%d,d:%d",a,b,c,d);

    d=++a && b && c;//0110
    printf("\na:%d, b:%d,c:%d,d:%d",a,b,c,d);

    d=a && ++b && c;//0110
    printf("\na:%d, b:%d,c:%d,d:%d",a,b,c,d);

    d=++a && ++b && c;//1211
    printf("\na:%d, b:%d,c:%d,d:%d",a,b,c,d);

    d=--a ||  b || c;//0211
   printf("\n a:%d, b:%d,c:%d,d:%d",a,b,c,d);

    d=a || --b || c;//0111
   printf("\n a:%d, b:%d,c:%d,d:%d",a,b,c,d);

   d=--a || --b || c;//1111
   printf("\n a:%d, b:%d,c:%d,d:%d",a,b,c,d);

    d=++a || b || c;//0111
   printf("\n a:%d, b:%d,c:%d,d:%d",a,b,c,d);

   d=a || ++b || c;//0211
   printf("\n a:%d, b:%d,c:%d,d:%d",a,b,c,d);

   d=++a || ++b || c;//1211
   printf("\n a:%d, b:%d,c:%d,d:%d",a,b,c,d);

}