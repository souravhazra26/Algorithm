#include<stdio.h>
int binary(int *arr,int data,int size)
{
    int right,left;
    right=size-1;
    left=0;
    int mid;
    while(left<right)
    {
        mid=(right+left)/2;
        if(arr[mid]==data)
        {
            return mid;
        }
        else if(arr[mid]>data)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
}
int main()
{
    int data;
    int ar[]={1,2,3,4,5,6}; // Array Must be Ascending or Descending.
    printf("\nEnetr Search Element :");
    scanf("%d",&data);
    int pos=binary(ar,data,6);
    printf("\nThe Position Of the Element :%d",pos+1);
}
