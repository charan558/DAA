/*0/1 knapsack bounded repetition not allowed*/

#include<stdio.h>
#include<limits.h>
int wt[10],val[10],a[10],max=0,w;
void check(int n)
{
    int vs=0,ws=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            ws+=wt[i];
            vs+=val[i];
        }
    }
    if(ws<=w)
    {
        max = max>vs ? max : vs;        
    }
}

void ks(int n,int itemno)
{
    if(n==itemno)
    {
        check(n);
        return;
    }
    for(int i=0;i<2;i++)
    {
        a[itemno]=i;
        ks(n,itemno+1);
    }
}
void main()
{
    int n;
    printf("enter no of wts:");
    scanf("%d",&n);
    printf("enter weights,its values:\n");
    for(int i=0;i<n;i++)
    {
        printf("item no %d wt and val :",i);
        scanf("%d%d",&wt[i],&val[i]);
    }
    printf("enter capacity of bag:");
    scanf("%d",&w);
    ks(n,0);
    printf("max value :%d",max);
}