#include<stdio.h>
dp[10][10];
void main()
{
    int n,w,wt[100];
    printf("enter the no . of items");
    scanf("%d",&n);
    printf("Enter the weight of the bag");
    scanf("%d",&w);
    printf("Enter the weights");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            dp[i][j]=-1;
        }
    }
    int ans=ss(n,w,wt);
    printf("%d",ans);
}
int ss(int n,int w,int wt[])
{
    if(w==0)return dp[n][w]=1;
    if(n==0) return dp[n][w]=0;
    if(dp[n][w]!=-1)return dp[n][w];
    else if(wt[n-1]<=w)
    {
        return dp[n][w]=ss(n,w-wt[n-1],wt)+ss(n-1,w,wt);
    }
    else 
    return dp[n][w]=ss(n-1,w,wt);
}
