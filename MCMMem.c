
    
#include<stdio.h>
#include<limits.h>

int a[10];
int t[10][10];

int mcm(int i,int j)
{
    if(t[i][j]!=-1)
            return t[i][j];
    if(i==j)
    {
        return t[i][j] = 0;
    }
    else
    {
        int min = INT_MAX;
        for(int k=i;k<j;k++)
        {
            int val = mcm(i,k) + mcm(k+1,j) + a[i-1]*a[k]*a[j];
            if(min>val)
            {
                min = val;
            }
        }
        return t[i][j] = min;
    }
}

void main()
{
    int n;
    printf("Enter the no. of matrices : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            t[i][j] = -1;
        }
    }
    int minOp = mcm(1,n);
    printf("Minimum no of operations : %d\n",minOp);
}