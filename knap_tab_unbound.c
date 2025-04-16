#include<stdio.h>
int a[10][10];
int ks(int n,int w,int wt[],int val[])
{
   
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<w;j++)
    {
        if(j==0||i==0)
        {
            return a[i][j]=0;
        }
        if(wt[i-1]<j)
        {
          return  a[i][j]=max(val[i-1]+a[i][j-wt[i-1]],a[i-1][j]); 
        }
        else
           return a[i][j]=a[i-1][j];
    }
   }
   return a[n][w];
}
int main()
{
    int n,wt[100],val[100],w;
    printf("enter the no of weights");
    scanf("%d",&n);
    printf("enter the weights nad values");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
        scanf("%d",&val[i]);
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<w;j++)
        {
            a[i][j]=-1;
        }
    }
    int c=ks(n-1,w,wt,val);
    printf("%d",c);
}
