#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*top=NULL;
struct node*temp;

void push(int x){
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=top;
    top=new;
}

int pop(){
    temp=top;
    if(top==0){
        printf("Khali");
    }
    else{
        top=top->next;
        free(temp);
    }
}

void display(){
    temp=top;
    if(top==0){
        printf("Khali\n");
    }
    else{
        while(temp !=0){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}

int main(){
    push(5);
    push(6);
    push(6855);
    push(7);
    push(56);
    pop();
    display();
}
