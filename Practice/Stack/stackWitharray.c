#include<stdio.h>
#define MAX 6
int s_arr[MAX];
int top=-1;

void push(int x){
    if(top == MAX -1){
        printf("Stack Overflow");
    }
    else {
        top++;
        s_arr[top]=x;
    }
}
void pop(){
    int temp;
    if(top==-1){
        printf("Stack Underflow");

    }
    else{
        temp = s_arr[top];
        top--;
    }
}

void display(){
    if(top==MAX-1){
        printf("Stack Overflow");
    }
    else
    {
        for(int i=top;i>=0;i--){
            printf("%d\n",s_arr[i]);
        }
    }

}
void main(){
    push(5);
    push(6);
    push(7);
    push(8);
    push(10);
    push(11);
    pop();
    display();
}