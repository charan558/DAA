//bounded 0/1 knapsack
#include<stdio.h>
int ks(int n,int w,int wt[],int val[]);
int main()
{
    int n,w,wt[100],val[100];
    printf("enter the no.of items");
    scanf("%d",&n); 
    printf("enter the size of the bag");
    scanf("%d",&w);
    printf("enter the weight and value");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
        scanf("%d",&val[i]);
    }
    int ans=ks(n,w,wt,val);
    printf("%d",ans);
    return 0;
}

int ks(int n,int w,int wt[],int val[])
{
    if(n==0||w==0)
    {
        return 0;
    }
    if(wt[n-1]<=w)
    {
       int a= val[n-1]+ks(n-1,w-wt[n-1],wt,val);
       int  b=ks(n-1,w,wt,val);  
       if(a<b)
        return b;
       else
        return a;
    }
    else{
        return ks(n-1,w,wt,val);
    }
}

