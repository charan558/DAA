#include<stdio.h>
int ss(int n,int s,int wt[]);
int main()
{
    int n,s,wt[100];
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("Enter the weights");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    printf("Enter the weight of the bag");
    scanf("%d",&s);
   printf("%d\t",ss(n,s,wt));
    return 0;
}
int ss(int n,int s,int wt[])
{
    if(s==0)
        return 1;
    if(n==0)
        return 0;
    if(wt[n-1]<=s)
    {
        return ss(n,s-wt[n-1],wt)+ss(n-1,s,wt);
    }
    else
        return ss(n-1,s,wt);
}
