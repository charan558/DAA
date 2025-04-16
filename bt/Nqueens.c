 #include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int a[10];

void print(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
bool issafe(int k,int i)
{
    for(int j=0;j<k;j++)
    {
        if(a[j]==i)
        {
            return false;
        }
        else if(abs(k-j)==abs(i-a[j]))//TO CHECK TO NOT MATCH DIAGONOL QUEENS
        {
            return false;
        }
    }
    return true;
}
void nq(int n,int k)
{
    if(n==k)
    {
        print(n);
        return;
        
    }
    for(int i=0;i<n;i++)
    {
        if(issafe(k,i))
        {
            a[k]=i;
            nq(n,k+1);
        }
    }
}
void main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    nq(n,0);

}
