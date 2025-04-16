#include<stdio.h>
int dp[10];
int stair(int n,int dp[]);
void main()
{
    int n;
    printf("Eneter the no.");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        dp[i]=-1;
    }
    stair(n);
    printf("%d",stair(n));
}
int stair(int n)
{
    if(n<=1) return dp[n]=1;
    if(dp[n]!=-1) return dp[n];
    else
        return dp[n]=stair(n-1)+stair(n-2);
}
