#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

struct node*f=NULL;
struct node*r=NULL;
struct node*temp;

void enqueue(int x){
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node*));
    new->data=x;
    new->next=NULL;

    if(f==0 && r==0){
        f=r=new;
    }
    else{
        r->next=new;
        r=new;
    }
}

void dequeue(){
        if(f==0 && r==0){
            printf("Underflow");
        }
        else{
            temp=f;
            f=f->next;
            free(temp);
        }
}

void display(){
    temp=f;
    if(f==0 && r==0){
        printf("Underflow\n");
    }
    else{
        while(temp !=0){
           printf("%d\n",f->data);
            f=f->next;
        }
    }
}

int main(){
    enqueue(50);
    enqueue(10);
    enqueue(90);
    enqueue(66);
    dequeue();
    display();
}
