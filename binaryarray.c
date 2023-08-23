#include<stdio.h>
int binary(int array[],int x)
{
    int l=0;
    int h=9;

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(array[mid]==x)
        {
            return mid+1;
        } 
          else if(array[mid]<x)
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
     return -1;
}
int main()
{
    int array[]={2,4,6,8,10,12,14,16,18,20};
    int x;
    printf("\t2,4,6,8,10,12,14,16,18,20\n");

    printf("enter a element to search in array is avalibale:");
    scanf("%d",&x);

    int position=binary(array,x);

    if(position!=-1)
    {
        printf("element %d found at index %d\n",x,position);
    }
    else{
        printf("element %d not found in this array\n",x);
    }
}


