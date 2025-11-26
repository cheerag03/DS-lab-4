#include <stdio.h>
#define MAX 1000

int q[MAX], f=0, r=0;

void push(int x){
    q[r++]=x;
    int k=r-f-1;
    while(k--) q[r++]=q[f++];
}

int pop(){
    return f<r ? q[f++] : -1;
}

int main(){
    int ch,x;
    while(scanf("%d",&ch)==1){
        if(ch==1){ scanf("%d",&x); push(x); }
        else if(ch==2) printf("%d\n", pop());
        else break;
    }
    return 0;
}
