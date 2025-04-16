#include<stdio.h>
#include<math.h>
#include<limits.h> 
struct node
{
    int x,y;
};
void main()
{
    int n,i,j,ind1,ind2;
    printf("Enter the size");
    scanf("%d",&n);
    struct node p[n];
    printf("enter the values");
    for(i=0;i<n;i++)
    {
       
            scanf("%d %d",&p[i].x,&p[i].y);
        
    }
    double d,avg=INT_MAX;
    for(int i=0;i<n;i++)
    {
         for(j=i+1;j<n;j++)
        {
            d=sqrt((pow((p[j].x-p[i].x),2))+(pow((p[j].y-p[i].y),2)));
        
        if(avg>d)
        {
            avg=d;
            ind1=i;
            ind2=j;
        }
        }
    }
    printf(" %lf \n(%d %d)  (%d  %d)",avg,p[ind1].x,p[ind2].x,p[ind1].y,p[ind2].y);
}
