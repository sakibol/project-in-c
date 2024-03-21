#include <stdio.h>
#define N 10

struct Student {
    int studentID;
    float marks;
    char section;
};

struct Student stack[N];
int top = -1;

void push(int studentID, float marks, char section) {
    if (top == N - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top].studentID = studentID;
        stack[top].marks = marks;
        stack[top].section = section;
    }
}

void display() {
    if (top == -1)
        printf("Underflow\n");
    else {
        printf("Student Records:\n");
        for (int i = 0; i <= top; i++) {
            printf("Student ID: %d, Marks: %.2f, Section: %c\n", stack[i].studentID, stack[i].marks, stack[i].section);
        }
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        top--;
    }
}

void peak() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        printf("Top Student Record: ID: %d, Marks: %.2f, Section: %c\n", stack[top].studentID, stack[top].marks, stack[top].section);
    }
}

int main() {
    push(1001, 85.5, 'A');
    push(1002, 72.0, 'B');
    push(1003, 90.0, 'C');
    display();
    pop();
    peak();
    printf("After pop the elements: \n");
    display();
    return 0;
}