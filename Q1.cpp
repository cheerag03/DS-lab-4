#include <stdio.h>
#define MAX 100

int q[MAX], front=-1, rear=-1;

int isEmpty(){ return front==-1; }
int isFull(){ return rear==MAX-1; }
void enqueue(int x){
    if(isFull()) printf("Overflow\n");
    else{
        if(front==-1) front=0;
        q[++rear]=x;
    }
}
int dequeue(){
    if(isEmpty()) return -1;
    int t=q[front++];
    if(front>rear) front=rear=-1;
    return t;
}
int peek(){ return isEmpty()?-1:q[front]; }
void display(){
    if(isEmpty()){ printf("Empty\n"); return; }
    for(int i=front;i<=rear;i++) printf("%d ",q[i]);
    printf("\n");
}

int main(){
    int ch,x;
    while(scanf("%d",&ch)==1){
        if(ch==1){ scanf("%d",&x); enqueue(x); }
        else if(ch==2) printf("%d\n",dequeue());
        else if(ch==3) printf("%d\n",isEmpty());
        else if(ch==4) printf("%d\n",isFull());
        else if(ch==5) display();
        else if(ch==6) printf("%d\n",peek());
        else break;
    }
    return 0;
}
