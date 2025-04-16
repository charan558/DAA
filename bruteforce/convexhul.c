#include<stdio.h>
#include<math.h>
#include<limits.h>
    struct node{
         int x,y;
    };
    int main()
    {
        int n,i,j,k;
        printf("enter the size:");
        scanf("%d",&n);
        struct node p[n];
        printf("enter the points\n");
        for(i=0;i<n;i++){
            scanf("%d%d",&p[i].x,&p[i].y);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int a=p[j].y-p[i].y;
                int  b=p[i].x-p[j].x;
                int c=p[i].x*p[j].y-p[i].y*p[j].x;
                int noofpospoints=0;
                int noofnegpoints=0;
                for(k=0;k<n;k++){
                    int val=(a*p[k].x)+(b*p[k].y)-(c);//straight line equation
                    if(val>0){
                        noofpospoints++;
                    }
                    else if(val<0){
                        noofnegpoints++;
                    }
                }
                if(noofpospoints==0 || noofnegpoints==0){
                printf("(%d,%d)(%d,%d) are edge points\n",p[i].x,p[i].y,p[j].x,p[j].y);
            }
        }
        }
    }
    
