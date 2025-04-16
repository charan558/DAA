#include<stdio.h>
void main()
{
    int m,n,i,j,k,index;
    printf("Enter the len of the string");
    scanf("%d",&m);
    printf("enter the len of sub");
    scanf("%d",&n);
    char* sup[m];
    char* sub[n];
    printf("Enter the string");
    scanf("%s",&sup);
    printf("enter the sub");
    scanf("%s",&sub);
    int f1=0,skip=0;
    for(i=0;i<m-n;i++)
    {
       if(sup[i]==sub[0])
       {
        int f=0;
        k=i+skip;
        for(j=0;i<n;j++)
        {
            if(sub[j]!=sup[k])
            {
                f=1;
                break;
            }
            skip++;
            k=skip+k+1;
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
        printf("string is matched");

    }
    else
    {
        printf("string is not matched");
    }

}