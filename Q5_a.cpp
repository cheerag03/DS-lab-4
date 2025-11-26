#include <stdio.h>
#define MAX 1000

int q1[MAX], q2[MAX], f1=0,r1=0,f2=0,r2=0;

void enq1(int x){ q1[r1++]=x; }
int deq1(){ return f1<r1?q1[f1++]:-1; }
void enq2(int x){ q2[r2++]=x; }
int deq2(){ return f2<r2?q2[f2++]:-1; }

void push(int x){
    enq2(x);
    while(f1<r1) enq2(deq1());
    while(f2<r2) enq1(deq2());
    f2=r2=0;
}

int pop(){ return deq1(); }

int main(){
    int ch,x;
    while(scanf("%d",&ch)==1){
        if(ch==1){ scanf("%d",&x); push(x); }
        else if(ch==2) printf("%d\n",pop());
        else break;
    }
    return 0;
}
