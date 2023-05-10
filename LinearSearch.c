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
int main()
{
    int a[10]={1,8,3,4,75,66,2,6,10,88},size;
    printf("\n Enter Array Size ::");
    scanf("%d",&size);
    linear(a,size);
}
