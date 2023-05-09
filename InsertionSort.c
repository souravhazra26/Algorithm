#include<stdio.h>
void input(int *arr,int size)
{
    printf("\nEnter Elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void insertionSort(int *arr,int size)
{
    int j,temp;
    for(int i=1;i<size;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
{
    int size;
    int b[10];
    printf("\n Enter Size of Array :");
    scanf("%d",&size);
    input(b,size);
    insertionSort(b,size);
    display(b,size);

}
