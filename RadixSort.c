#include<stdio.h>
void modified_countsort(int *,int,int);
void radixsort(int *,int);
int getMax(int *,int);

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
int getMax(int *a,int size)
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
void radixsort(int *a,int size)
{
    int max=getMax(a,size);
    for(int pos=1;max/pos>0;pos=pos*10)
    {
        modified_countsort(a,size,pos);
    }
}
void modified_countsort(int *a,int size,int pos)
{
    int b[100];
    int count[10]={0};
    for(int i=0;i<size;i++)
    {
        ++count[a[i]/pos%10];
    }
    for(int i=1;i<=9;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    for(int i=size-1;i>=0;i--)
    {
        b[--count[a[i]/pos%10]]=a[i];
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
    radixsort(a,size);
    display(a,size);
}
