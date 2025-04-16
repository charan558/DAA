#include<stdio.h>
void main()
{
    int m,n,i,j,k,count=0,index;
    printf("enter the len of the string");
    scanf("%d",&m);
    printf("enter the len of sub string");
    scanf("%d",&n);
    char sup[m];
    char sub[n];
    printf("Enter the string");
    scanf("%s",&sup);
    printf("enter the sub");
    scanf("%s",&sub);
    int f1=0;
    for(i=0;i<m-n+1;i++)
    {
        if(sup[i]==sub[0])
        {
            k=i;
            int f=0;
            for(j=0;j<n;j++)
            {
                if(sub[j]!=sup[k])
                {
                    f=1;
                    break;
                }
                k=k+2;
                
            }
            if(f==0)
                {
                    f1=1;
                    index=i;
                    count++;
                }
        }
    }
    if(f1==1)
    {
        printf(" string matched from %d to %d and matched times =%d",index,index+(n-1),count);
    }
    else{
        printf("string not matched");
    }
}