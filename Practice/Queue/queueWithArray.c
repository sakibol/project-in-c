#include<stdio.h>
#define N 5

int q_arr[N];
int f=-1, r =-1;

void enqueue(int x){
    if (f==-1 && r==-1){
        f=r=0;
        q_arr[r]=x;
    }
    else if ( r ==N-1){
        printf("Overflow");
    }
    else{
        r++;
        q_arr[r]=x;
    }
}

void dequeue(){
   if(f==-1 && r==-1){
    printf("Underflow");
   }
   else if ( f == r){
    f = r= -1;
   }
   else{
    f++;
   }

}
 void display (){
    int temp = f;
    if(f==-1 && r==-1){
        printf("Underflow");
    }
    else {
        for(int i=f;i<=r;i++){
        printf("%d\n",q_arr[i]);
        }
    }
 }
 void main(){
    enqueue(5);
    enqueue(15);
    enqueue(25);
    enqueue(35);
    enqueue(45);
    dequeue();
    display();
 }