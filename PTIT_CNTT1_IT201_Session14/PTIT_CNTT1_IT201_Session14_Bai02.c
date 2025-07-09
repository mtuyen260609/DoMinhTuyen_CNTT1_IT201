#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

Stack* createStack() {
    Stack* newStack = (Stack*)malloc(sizeof(Stack));
    newStack->top = NULL;
    return newStack;
}

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void pushStack(Stack* s, int value) {
    Node* newNode = createNode(value);
    newNode->next = s->top;
    s->top = newNode;
}

void printStack(Stack* s) {
    printf("stack = {\n   ");
    Node* current = s->top;
    if (current == NULL) {
        printf("NULL");
    } else {
        while (current != NULL) {
            printf("%d->", current->data);
            current = current->next;
        }
        printf("NULL");
    }
    printf("\n}\n");
}

int main() {
    Stack* myStack = createStack();
    pushStack(myStack, 5);
    pushStack(myStack, 4);
    pushStack(myStack, 3);
    pushStack(myStack, 2);
    pushStack(myStack, 1);
    printStack(myStack);
    int value;
    printf("Nhap so nguyen duong can them vao stack: ");
    scanf("%d", &value);

    if (value > 0) {
        pushStack(myStack, value);
        printStack(myStack);
    } else {
        printf("Chi chap nhan so nguyen duong.\n");
    }
    return 0;
}