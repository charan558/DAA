#include<stdio.h>
int a[100];
int main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[i]=-1;
    }
    fib(n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
}
int fib(int n)
{
    if(a[n]!=-1)
        return a[n];
    if(n==0||n==1)
    {
        a[n]=n;
        return a[n];
    }
    else
    {   
        a[n]=fib(n-1)+fib(n-2);
        return a[n];
    }

}
