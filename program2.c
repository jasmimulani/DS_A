//20,30,40,10...
#include<stdio.h>
int main()
{
    int j,k;
      printf("enter array size:");
      scanf("%d",&j);
    
    int a[j],i; 

    for(i=0; i<j; i++)
    {
        printf("enter element array:");
        scanf("%d",&a[i]);
    } 

    for(i=0; i<j;i++)
    {
        if(i==0)
        {
             k=a[0];
             a[i]=a[j-1];
             a[j-1]=k;
        }
    }
    for(i=0; i<j; i++)
    {
        printf("%d",a[i]);
    }
}