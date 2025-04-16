#include<stdio.h>
int merge(int arr[],int low,int mid,int high);
int divide(int arr[],int low,int high);


int divide(int arr[],int low,int high)
{
    if(low<high)
    {
    int mid=(low+high)/2;
    divide(arr,low,mid);
    divide(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
}

int merge(int arr[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;
    int b[100];
    while(i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
        {
            b[k++]=arr[i++];
        }
        else
        {
            b[k++]=arr[j++];
        }

    }
    if(i>mid)
    {
        while(j<=high)
        {
            b[k++]=arr[j++];
        }
    }
    else{
        while(i<=mid)
        {
            b[k++]=arr[i++];
        }
    }
    for(k=low;k<=high;k++)
    {
        arr[k]=b[k];
    }
    
}
int main()
{
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    divide(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
}