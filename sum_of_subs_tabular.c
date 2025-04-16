#include<stdio.h>
int a[10][10];
int ss(int n,int s,int wt[]);
int main()
{
    int n,s,wt[100];
    printf("enter the no of weights");
    scanf("%d",&n);
    printf("Enter the weight of bag");
    scanf("%d",&s);
    printf("enter the weights");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    int ans=ss(n,s,wt);
    printf("%d",ans);
    return 0;
   
   
}
int ss(int n,int s,int wt[])
{
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            
            if(j==0)
            {
                a[i][j]=1;
                //continue;  
            }
            else if(i==0)
            {
                a[i][j]=0;
                //continue;
            }
            else if(wt[i-1]<=j)
               a[i][j]=a[i-1][j-wt[i-1]]+a[i-1][j];
            else
               a[i][j]=a[i-1][j];
        }
    } 
    return a[n][s];
}