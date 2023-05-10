#include<stdio.h>
void swap(int [],int ,int);
int partition(int [],int ,int);
void display(int *arr,int size)
{
    printf("\n Your Array ::\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void input(int *arr,int size)
{
    printf("\nEnter Elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void quickSort(int *arr,int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partition(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}
int partition(int *arr,int lb,int ub)
{
    int start,end,pivet;
    start=lb;
    end=ub;
    pivet=arr[lb];
    while(start<end)
    {
       while(pivet>=arr[start])
       {
          start++;
       }
       while(pivet<arr[end])
       {
          end--;
       }
       if(start<end)
       {
            swap(arr,start,end);
       }
    }
    swap(arr,lb,end);
    return end;
}
void swap(int *arr,int lb,int ub)
{
    int temp;
    temp=arr[lb];
    arr[lb]=arr[ub];
    arr[ub]=temp;
}
int main()
{
    int size;
    int b[10];
    printf("\n Enter Size of Array :");
    scanf("%d",&size);
    input(b,size);
    quickSort(b,0,size);
    display(b,size);
}
