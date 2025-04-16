#include<stdio.h>
int fib(int);
int a[100];
void main()
{
    int n,i;
    printf("eter the no.");
    scanf("%d",&n);
    fib(n);
    for(int i=0;i<n;i++)
        printf("    %d",a[i]);
}
int fib(int n)
{    
    for(int i=0;i<n;i++)
   {
        if(i==0)a[i]=0;
        else if(i==1)a[i]=1;
    else
    {
        a[i]=a[i-1]+a[i-2];
        
    }
   }
   
  
}
