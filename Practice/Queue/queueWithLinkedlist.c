#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}; 
struct node *f = NULL;
struct node *r = NULL;

void enqueue(int x)
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = x;
    head->next = NULL;
    if (f == NULL && r == NULL)
    {
        f = r = head;
    }
    else
    {
        r->next = head;
        r = head;
    }
}

void dequeue()
{
    struct node * temp =f;
    f=f->next;
    free(temp);
}
void display()
{
    struct node *temp;
    temp = f;
    if (f == NULL && r == NULL)
    {
        printf("Underflow");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            printf("\n");

            temp = temp->next;
        }
    }
}

void main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    dequeue();
    display();
}
