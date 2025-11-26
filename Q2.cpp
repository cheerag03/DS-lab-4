#include <stdio.h>
#define MAX 100

int cq[MAX], front=-1, rear=-1;

int isEmpty(){ return front==-1; }
int isFull(){ return (front==0 && rear==MAX-1) || (rear+1)%MAX==front; }

void enqueue(int x){
    if(isFull()) printf("Overflow\n");
    else{
        if(front==-1) front=0;
        rear = (rear+1)%MAX;
        cq[rear]=x;
    }
}

int dequeue(){
    if(isEmpty()) return -1;
    int t=cq[front];
    if(front==rear) front=rear=-1;
    else front = (front+1)%MAX;
    return t;
}

int peek(){ return isEmpty()?-1:cq[front]; }

void display(){
    if(isEmpty()){ printf("Empty\n"); return; }
    int i=front;
    while(1){
        printf("%d ",cq[i]);
        if(i==rear) break;
        i=(i+1)%MAX;
    }
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
