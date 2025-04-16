#include<stdio.h>
int dp[10][10];
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int knapsack(int n,int w,int wt[],int val[])
{
    if(n==0||w==0)
    {
        return dp[n][w]=0;
    }
    if(dp[n][w]!=-1)
    {
        return dp[n][w];
    }
    if(wt[n-1]<=w)
    {
        return dp[n][w]=maximum((val[n-1]+knapsack(n-1,w-wt[n-1],wt,val)),(knapsack(n-1,w,wt,val)));
    }	
    else{
        return dp[n][w]=knapsack(n-1,w,wt,val);
    }
}
int main()
{
    int n,w;
    printf("enter the no of items");
    scanf("%d",&n);
    printf("Enter the capacity of the bag");
    scanf("%d",&w);
    int wt[n],val[n];
    printf("Enter the weight nad values of item");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
        scanf("%d",&val[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            dp[i][j]=-1;
        }
    }
    int ans=knapsack(n,w,wt,val);
    printf("%d",ans);
    return 0;
}
