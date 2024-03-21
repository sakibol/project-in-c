#include<stdio.h>
#define N 5
int q_arr[N];

int f=-1,r=-1;

void enqueue(int x){
     if( r==N-1){
        printf("Overflow\n");
    }
    else if (f==-1 && r==-1)
    {
       f=r=0;
       q_arr[r]=x; 
    }
    else{
        r++;
        q_arr[r]=x;
    }
    
}

void dequeue(){
    if(f==-1 && r==-1){
        printf("Underflow\n");
    }
    else if (f==r)
    {
        f=r=-1;
    }
    else{
        f++;
    }
    
}

void display(){
    if(f==-1 && r==-1){
        printf("Khali\n");
    }
    
    else{
        int i;
        for(i=f;i<=r;i++){
            printf("%d \n",q_arr[i]);
        }
    }
}

int main(){
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    dequeue();
    enqueue(50);
    display();
}