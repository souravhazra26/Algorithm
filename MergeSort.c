#include<stdio.h>

void input(int *a,int size)
{
    printf("\nEnter Elements of Array :: \n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
}
void merge(int *a,int lb,int mid,int ub)
{
    int b[100];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    // For Copy B arrays value in A array
    for(int m=lb;m<=ub;m++)
    {
        a[m]=b[m];
    }
}
void mergesort(int *a,int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
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
int main()
{
    int a[100],size;
    printf("\n Enter Size ::");
    scanf("%d",&size);
    input(a,size);
    mergesort(a,0,size);
    display(a,size);
}
