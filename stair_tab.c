#include<stdio.h>
int a[100];
void main()
{
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    stair(n);
    for(int i=0;i<n;i++) 
    	printf("%d",a[i]);
}
int stair(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(i==0||i==1)a[i]=1;
        else
            a[i]=a[i-1]+a[i-2];
    }
}
