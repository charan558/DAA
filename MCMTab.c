
    
#include<stdio.h>
#include<limits.h>

int a[10];
int mcm(int n)
{
    int m[n+1][n+1];
    for(int l=0;l<n;l++)
    {
        for(int i=0;i<n-l;i++) 
        {
            int j = i+l;
            if(i==j)
            {
                m[i][j] = 0;
            }
            else
            {
                int min = INT_MAX;
                for(int k=i;k<j;k++)
                {
                    int val = m[i][k] + m[k+1][j] + a[i-1]*a[k]*a[j];
                    if(val<min)
                    {
                        min = val;
                    }
                }
                m[i][j] = min;
            }
        }

    }
    return m[1][n];
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
    int minOp = mcm(n);
    printf("Minimum no of operations : %d\n",minOp);
}
