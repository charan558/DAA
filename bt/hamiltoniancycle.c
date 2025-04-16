#include<stdio.h>
#include<stdbool.h>
int a[10];
int adj[10][10];
int n;
bool issafe(int k,int i)
{
    for(int j=0;j<k;j++)
    {
        if(a[j]==i)
        {
            return false;
        }
        if(adj[a[k-1]][i]!=1)
        {
            return false;

        }
        if(k==n-1 && adj[i][a[0]]!=1)
        {
            return false;
        }

    }
    return true;

}
void hc(int n,int k)
{
    if(k==n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);

        }
        printf("\n");
        return;
    }
    if(k==0)
    {
        a[k] = 0;
        hc(n,k+1);
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(issafe(k,i))
            {
                a[k]=i;
                hc(n,k+1);
            
            }
            
        }
    }
    }

int main()
{
    //int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the edges:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            scanf("%d",&adj[i][j]);
        }
    }
     hc(n,0);
}