#include<stdio.h>
int a[10][10];
int max(int x,int y)
{
   return (x>y)? x:y;
        
}
int knapsack(int n,int w,int wt[],int val[])
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0 ||j==0)
            {
                a[i][j]=0;
            }
            if(wt[i-1]<=j)
            {
                a[i][j]=max(val[i-1]+a[i-1][j-wt[i-1]],a[i-1][j]);
            }
            else
            {
                a[i][j]=a[i-1][j];
            }
        }
    }
    return a[n][w];
}
int main()
{
    int n,i,j,w;
    printf("Enter the no of iteams");
    scanf("%d",&n);
    printf("Entrr the capacity of the bag");
    scanf("%d",&w);
    printf("Enter the weights and values ");
    int wt[n];
    int val[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
        scanf("%d",&val[i]);
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<w;j++)
            a[i][j]=-1;
    int ans=knapsack(n,w,wt,val);
    printf("%d",ans);
}