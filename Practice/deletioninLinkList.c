#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;

};
int main(){
    int a[5]={5,6,7,8,9};
    struct Node * head=NULL;
    struct Node * temp=NULL;
    struct Node * current=NULL;


for(int i =0;i<=4;i++){
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = a[i];
    temp->next = temp;

if(head == NULL){
    head = temp;
    current=temp;
}
else{
    current->next=temp;
    current=current->next;
}
}
struct Node * first;
first=(struct Node *)malloc(sizeof(struct Node));
first->data = 30;
first->next=head;
head=first;

struct Node * last;
last=(struct Node *)malloc(sizeof(struct Node));
last->data = 50;
last->next=NULL;
current->next=last;

struct Node*ptr;
ptr=head;
struct Node* middlenode = malloc (sizeof(struct Node));
middlenode->data = 12;
middlenode->next = NULL;
struct Node* tr;
tr=head;
int pos=3;
pos --;
while(pos != 1){
    tr = tr->next;
    pos --;
}
middlenode->next=tr->next;
tr->next=middlenode; 

while(ptr !=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}