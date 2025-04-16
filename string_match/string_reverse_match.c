#include<stdio.h>
void main()
{
    int n,i,j,m,k,index;
    printf("Enter thenlen of string");
    scanf("%d",&m);
    printf("Enter the len of sub");
    scanf("%d",&n);
    char sup[m];
    char sub[n];
    printf("Enter the string");
    scanf("%s",&sup);
    printf("enter the sub");
    scanf("%s",&sub);
    int f1=0;
    for(i=0;i<m-n;i++)
    {
        if(sup[i]==sub[n-1])
        {
            int f=0;
            k=i;
            for(j=n-1;j>=0;j--)
            {
                if(sub[j]!=sup[k])
                {
                    f=1;
                    break;
                }
                k++;
            }
            if(f==0)
            {
                f1=1;
                index=i;
            }
        }
    }
    if(f1==1)
    {
        printf("string matched");
    }
    else{
        printf("String not matched");
    }
}