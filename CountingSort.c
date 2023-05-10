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
int big(int *a,int size)
{
    int max=a[0];
    for(int i=1;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
void countingsort(int *a,int size)
{
    int max=big(a,size);
    int count[10000]={0};
    int b[100];
    for(int i=0;i<size;i++)
    {
        ++count[a[i]];
    }
    for(int i=1;i<=max;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    for(int i=size-1;i>=0;i--)
    {
        b[--count[a[i]]]=a[i];
    }
    for(int i=0;i<size;i++)
    {
        a[i]=b[i];
    }
}
int main()
{
    int a[100],size;
    printf("\n Enter Size ::");
    scanf("%d",&size);
    input(a,size);
    countingsort(a,size);
    display(a,size);
}
