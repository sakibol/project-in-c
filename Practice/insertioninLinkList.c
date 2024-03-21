#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
void Linkedlist(struct Node * ptr){
    while (ptr != NULL){
        printf("Element is = %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node * intersionAtFirst(struct Node * head,int data){
    
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;
}
struct Node * insertionAtIndex(struct Node * head, int data, int index){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while(i != index -1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next = ptr;
    return head;
}
struct Node * insertionAtEnd(struct Node * head , int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p =head;
    while(p->next != NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next =NULL;
    return head;
}
struct Node * insertionAfterNode(struct Node * head,struct Node * prevNode,int data){
         struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
         ptr->data = data;
         ptr->next=prevNode->next;
         prevNode->next=ptr;
         return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;


    second->data = 4;
    second->next = third;


    third->data = 6;
    third->next = fourth;


    fourth->data = 8;
    fourth->next = NULL;

    
   head = intersionAtFirst(head,1);
   
    head=insertionAtIndex(head,100,1);
    head = insertionAtEnd(head,120);
    head = insertionAfterNode(head,second,300);
    Linkedlist(head);
}