#include<stdio.h>
#include<limits.h>
int tb[10][10];
int cc(int n,int w,int wt[]);
int min( int a ,int b)
{
    return a<b?a:b;
}
int main()
{
    int n,w,wt[100];
    printf("enter the size");
    scanf("%d",&n);
    printf("Enter the weights");
    for( int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    printf("Enter the weight of the bag");
    scanf("%d",&w);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            tb[i][j]=-1;
        }
    }
    printf("%d",cc(n,w,wt));
    return 0;
}
int cc(int n,int w,int wt[])
{
    int a[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(j==0)
                tb[i][j]=0;
            if(i==0)
                tb[i][j]=INT_MAX-1000;
            if(wt[i-1]<=j)
                tb[i][j]=min(1+tb[i][j-wt[i-1]],tb[i-1][j]);
            else
                tb[i][j]=tb[i-1][j];
        }
    }
    return t[n][w];
}
