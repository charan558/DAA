#include<stdio.h>
void main()
{
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    stair(n);
    
        printf("%d",stair(n));
    
}
int stair(int n)
{
    if(n<=1)return 1;
    else
       return stair(n-1)+stair(n-2);
}