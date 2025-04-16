#include<stdio.h>

int arr[10][10];

void fill(int n,int k)
{
    int c = 0;
    for(int l=n;l>=0;l--,c++)
    {
        for(int i=0;i<=n-c;i++)
        {
            int j = i+c;
            arr[i][j] = k++; 
        }
        //c++;
    }
}

void main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    fill(n,1);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
}