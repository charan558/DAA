#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool issafe();
int a[10];

void main(){
    int n;
    printf("enter n value = ");
    scanf("%d",&n);
    per(n,0);
}

void per(int n,int k){
    if(n==k){
        print(n);
        return;
    }
    for(int i=0;i<n;i++){
        if(issafe(k,i))
        {
            a[k]=i;
            per(n,k+1);
        } 
    }
}
bool issafe(int k, int i){
    for(int j=0;j<k;j++){
        if(a[j]==i)
        {
            return false;
        }
    }
    return true;
}

void print(int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}


