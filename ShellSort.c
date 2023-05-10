#include<stdio.h>
void input(int *a,int size)
{
    printf("\nEnter Elements of Array :: \n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
}
void display(int *a,int size)
{
    printf("\n Your Arrays Elements :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
void swap(int *a,int j,int i)
{
    int temp;
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
} 
void shellsort(int *a,int size)
{
    for(int gap=size/2;gap>=1;gap=gap/2)
    {
        for(int j=gap;j<size;j++)
        {
            for(int i=j-gap;i>=0;i=i-gap)
            {
                if(a[gap+i]>a[i])
                {
                    break;
                }
                else
                {
                    swap(a,i+gap,i);
                }
            }
        }
    }
}
int main()
{
    int a[100],size;
    printf("\n Enter Size ::");
    scanf("%d",&size);
    input(a,size);
    shellsort(a,size);
    display(a,size);
}
