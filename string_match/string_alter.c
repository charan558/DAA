#include<stdio.h>
void main()
{
    int m,n,i,j,k,index;
    printf("enter the len of string");
    scanf("%d",&m);
    printf("Enter the len of sub");
    scanf("%d",&n);
    char sup[m];
    char sub[n];
    printf("Enter the string");
    scanf("%s",&sup);
    printf("enter the sub string");
    scanf("%s",&sub);
    int f1=0;
    for(i=0;i<m-n+1;i++)
    {
        if(sup[i]==sub[0])
        {
            k=i;
            int f=0;
            for(j=0;i<n;j++)
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
            }
        }
    }
    if(f1==1)
    {
        printf("string matched");
    }
    else{
        printf("string not matched");
    }


}