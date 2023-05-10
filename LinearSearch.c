#include<stdio.h>
void linear(int *a,int n)
{
    int find,i;
    printf("\n Enter Searched Element ::");
    scanf("%d",&find);
    for(i=0;i<n;i++)
    {
        if(find==a[i])
        {
            printf("\n Element Is Found");
            break;
        }
    }
    if(i==n)
    {
        printf("\n Element Is not Found");
    }
}
void input(int *a,int size)
{
    printf("\n Enter Elements :: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int a[10],size;
    printf("\n Enter Array Size ::");
    scanf("%d",&size);
    input(a,size);
    linear(a,size);
}
