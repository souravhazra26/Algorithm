#include<stdio.h>
void input(int *arr,int size)
{
    printf("\nEnter Elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void bubbleSort(int *arr,int size)
{
    int flag=0;
    for(int i=0;i<size-1;i++)
    {
        int temp;
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=1;
            } 
        }
        if(flag==0)
        {
            printf("\n We saved Some Iterations :) \n");
            break;
        }
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
int main()
{   int size;
    int b[10];
    printf("\n Enter Size of Array :");
    scanf("%d",&size);
    input(b,size);
    bubbleSort(b,size);
    display(b,size);
}
