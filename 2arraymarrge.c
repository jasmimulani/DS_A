#include<stdio.h>
#include<conio.h>
int main()
{
     int m,n;
     printf("enter value m:");
     scanf("%d",&m);
     printf("enter value n:");
     scanf("%d",&n);

      int arry1[m],arry2[n],arry[m+n],i;
      for(i=0; i<m; i++){
         
         printf("enter a number[%d]",i);
         scanf("%d",&arry1[i]);
     }

          printf("\n");

          for(i=0; i<n; i++)
     {
         printf("enter a number[%d]",i);
         scanf("%d",&arry2[i]);
     } 
     printf("\n");

     for(i=0; i<m; i++)
     {
        arry[i]=arry1[i];
     } 
     for(i=0; i<n; i++)
     {
        arry[i+m]=arry2[i];
     }
     for(i=0; i<n+m; i++)
     {
        printf("%d ",arry[i]);
     }
}