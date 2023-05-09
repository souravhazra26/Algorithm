#include<stdio.h>
void input(int *arr,int size)
{
    printf("\nEnter Elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int *arr,int size)
{
    printf("\n Your Array ::\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void selectionSort(int *arr, int size)
{
    int min;
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=1+i;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
int main()
{
    int size;
    int b[10];
    printf("\n Enter Size of Array :");
    scanf("%d",&size);
    input(b,size);
    selectionSort(b,size);
    display(b,size);
}
