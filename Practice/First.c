#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
int main(){
    node *head=NULL;
    node *current=NULL;
    node *temp=NULL;
    int a[5]={15,59,65,45,48};

    for(int i=0;i<5;i++){
        temp=(node *)malloc(sizeof(node));
        temp->data=a[i];
        temp->next=temp;

        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current->next=temp;
            current=current->next;
        }
    }
        node *firstnode=(node *)malloc(sizeof(node));
        firstnode->data=20;
        firstnode->next=head;
        head=firstnode;

        node *last=malloc(sizeof(node));
        last->data=25;
        last->next=NULL;
        current->next=last;

        node *middlenode;
        middlenode=malloc(sizeof(node));
        middlenode->data=55;
        middlenode->next=NULL;

        node *ptr1=head;
        int pos=5;
        pos --;
        while(pos !=1){
            ptr1=ptr1->next;
            pos--;
        }
        middlenode->next=ptr1->next;
    ptr1->next=middlenode;
    
    node *ptr;
    ptr =head;
    while(ptr !=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
  
}