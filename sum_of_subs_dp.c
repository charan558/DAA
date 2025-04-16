#include<stdio.h>
int dp[10][10];
int ss(int n,int s,int wt[]);
int main()
{
    int n,s,wt[100];
    printf("entrer the no of weights");
    scanf("%d",&n);
    printf("enter the weight of the bag");
    scanf("%d",&s);
    printf("enter the weights");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
             dp[i][j]=-1;
    }
    int ans=ss(n,s,wt);
    printf("%d",ans);
    return 0;
}
int ss(int n,int s,int wt[])
{
  if(s==0)
     return dp[n][s]=1;
   if(n==0)
      return dp[n][s]=0;
    if(dp[n][s]!=-1)
       return dp[n][s];
    if(wt[n-1]<=s)
       return dp[n][s]=ss(n-1,s-wt[n-1],wt)+ss(n-1,s,wt);
    else
         return dp[n][s]=ss(n-1,s,wt);
    
   
}