#include<stdio.h>
int a[10][10];
void main()
{
    int n,w,wt[100];
    printf("Enter the no. of items");
    scanf("%d",&n);
    printf("enter the size of the bag");
    scanf("%d",&w);
    printf("Enter the weights");
    for ( int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    for (int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            a[i][j]=-1;
        }
    }
    int ans=ss(n,w,wt);
    printf("%d",ans);
}
int ss(int n,int w,int wt[])
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(j==0) a[i][j]=1;
            if(i==0)a[i][j]=0;
            else if(wt[i-1]<=j)
            {
                a[i][j]=a[i][j-wt[n-1]]+a[i-1][j];
            }
            else
                a[i][j]=a[i-1][j];
        }
    }
    return a[n][w];
}
