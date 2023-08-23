//20,30,40,50,10
#include<stdio.h>
int main()
{
     int j,k;
     printf("enter array size:");
     scanf("%d",&j);

     int a[j],i;

      for(i=0; i<j; i++)
      {
         printf("enter element size:");
         scanf("%d",&a[i]);
      }

      k=a[0];

      for(i=0; i<j; i++)
      {
         a[i]=a[i+1];
      }

      a[j-1]=k;

      for(i=0; i<j; i++)
      {
        printf("%d",a[i]);
      }
}