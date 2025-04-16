  #include<stdio.h>
void main()
{
    int m,n,i,j,index,count=0;
    printf("Enter the length of the string");
    scanf("%d",&m);
    printf("Enter the len of sub");
    scanf("%d",&n);
    char sup[m];
    char sub[n];
    printf("enter the string");
    scanf("%s",&sup);
    printf("Enter the sub string\n");
    scanf("%s",&sub);
    int f1=0;
    for(i=0;i<m-n+1;i++)
    {
        int f=0;
        if(sup[i]==sub[0])
        {
            for(j=0;j<n;j++)
            {
                if(sub[j]!=sup[i+j])
                {
                    f=1;
                    break; //terminates j loop
                }
            }
            if(f==0)
            {
                f1=1;
                index=i;
                count++;
            }
        }
    }
    if(f1==0)
    {
       printf("string is not matched");
    }
    else
    {
        printf("%d  %d    %d  string matched",index,index+(n-1),count);
    }
}
