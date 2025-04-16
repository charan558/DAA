#include<stdio.h>
int main()
{
    int n,i,j,k,t;
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sorted array elements\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
       
    }
     for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    printf("enter the key : ");
    scanf("%d",&k);
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==k)
        {
            printf("item is found at %d\n",mid);
            break;
        }
        else if(a[mid]<k)
       
        {
        low=mid+1;
      
        //break;
        }
        else 
     
        {
        high=mid-1;
            
            //break;
        }

    }
}
