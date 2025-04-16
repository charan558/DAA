#include<stdio.h>
#include<math.h>
#include<limits.h>
struct node
{
    int x,y;
};
void main()
{
int n,i,j,ind;
printf("Enter the size");
scanf("%d",&n);
struct node p[n];
printf("Enter the values");
for(i=0;i<n;i++)
{
    scanf("%d %d",&p[i].x,&p[i].y);
}
double max_avg=INT_MIN;
for(i=0;i<n;i++)
{
    double sum=0;
    for(j=0;j<n;j++)
    {
         sum+=sqrt((pow((p[j].x-p[i].x),2))+(pow((p[j].y-p[i].y),2)));
    }
   double  avg=sum/(n-1);
    if(max_avg<avg)
    {
        max_avg=avg;
        printf("%lf\n",max_avg);
        ind=i;
    }
}
printf("%lf    %d    %d",max_avg,p[ind].x,p[ind].y);
}