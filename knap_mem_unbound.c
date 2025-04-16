#include<stdio.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
int dp[10][10];
void main()
{
    int n,w,wt[100],val[100];
    printf("enter the  no. of items");
    scanf("%d",&n);
    printf("Enetr the weight of the bag");
    scanf("%d",&w);
    printf("enter the weights and values");
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&wt[i],&val[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            dp[i][j]=-1;
        }
    }
    int ans=ks(n,w,wt,val);
    printf("%d",ans);
}
int ks(int n,int w,int wt[],int val[])
{
    if(n==0||w==0)
    {
        return dp[n][w]=0;
    }
    if(dp[n][w]!=-1)return dp[n][w];
    else if(wt[n-1]<=w)
    {
        return dp[n][w]=max(val[n-1]+ks(n,w-wt[n-1],wt,val),ks(n-1,w,wt,val));
    }
    else 
        return dp[n][w]=ks(n-1,w,wt,val);
}