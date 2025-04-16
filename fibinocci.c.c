 #include<stdio.h>
int fib(int);
void main()
{
     int n;
     printf("enter a no:\n");
     scanf("%d",&n);
     int fib(n);
     printf("the series is\n");
    // for(int i=0;i<n;i++)
     printf("%d\t",fib(n));
}
int fib(int n)
{
     if(n==0)return 0;
     else if(n==1)return 1; 
     else
     {
          return fib(n-1)+fib(n-2);
     }
}
