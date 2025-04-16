#include<stdio.h>
#include<limits.h>
int cc(int n,int w,int wt[]);
int min(int a,int b)
{
    return a<b ? a:b;
}
int a[10][10];
int main()
{
    int n,w,wt[100];
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the weights");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    printf("Entrer the weight of the bag");
    scanf("%d",&w);
    printf("%d",cc(n,w,wt));
    return 0;
}
int cc(int n,int w,int wt[])
{
    if(w==0)
        return 0;
    if(n==0)
        return INT_MAX-1000;
    if(wt[n-1]<=w)
        return min(1+cc(n,w-wt[n-1],wt),cc(n-1,w,wt));
    else  
      return cc(n-1,w,wt);
}
