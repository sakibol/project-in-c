#include<stdio.h>
#define  N 5
int stack[N];
int top=-1;

void push(int x){
    if(top == N-1){
        printf("Overflow\n");
    }
    else{
        top ++;
        stack[top]=x;
    }
}

int pop(){
    int value;
    value=stack[top];
    top--;
    return value;
}

void print(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){
    push(5);
    push(6);
    push(7);
    push(8);
    pop();
    push(55);
    push(66);
    print();
}