//Linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node node;

int main() {
    node* head = NULL;
    node* current = NULL;
    node* temp = NULL;


    int a[5] = {15, 16, 17, 18, 19};

    for (int i = 0; i < 5; i++) {
        temp = (node*)malloc(sizeof(node));
        temp->data = a[i];
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = current->next;
        }
    }

    node* firstNode = NULL;
    firstNode = (node*)malloc(sizeof(node));
    firstNode->data = 1;
    firstNode->next = head;
    head = firstNode;

    node* middleNode = NULL;
    middleNode = (node*)malloc(sizeof(node));
    middleNode->data = 2;  // Corrected data value for the middleNode
    middleNode->next = NULL;
    node* ptr = NULL;
    ptr = head;
    int pos = 3;
    pos--;
    while (pos != 1) {
        ptr = ptr->next;
        pos--;
    }
    middleNode->next = ptr->next;
    ptr->next = middleNode;

    node* lastNode = NULL;
    lastNode = (node*)malloc(sizeof(node));
    lastNode->data = 3;
    lastNode->next = NULL;
    current->next = lastNode;


// first node delete
    node* firstdel = NULL;
    firstdel = head;
    if(firstdel != NULL)
    {
      head = head -> next;
      free(firstdel);
      firstdel= NULL;
    }

//last node delete
    node *lastdel= NULL;
    lastdel= head;
    while(lastdel->next->next != NULL){
        lastdel= lastdel->next;
    }
    free(lastdel->next);
    lastdel-> next =NULL;

    //middle delete
    node *delpre = head;
    node *delcur = head;
    int delpos= 3;
    while(delpos != 1)
    {
        delpre = delcur;
        delcur = delcur->next;
        delpos--;
    }
    delpre->next = delcur->next;
    free(delcur);
    delcur= NULL;



// Print the linked list
    node* ptr1 = NULL;
    ptr1= head;
    while (ptr1 != NULL) {
        printf("%d\n", ptr1->data);
        ptr1 = ptr1->next;
    }


    return 0;
}