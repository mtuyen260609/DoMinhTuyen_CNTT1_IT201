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

int peekStack(Stack* s) {
    if (s->top == NULL) {
        printf("Ngăn xếp trống\n");
        return -1;
    }
    return s->top->data;
}

int main() {
    Stack* newStack = createStack();

    pushStack(newStack, 5);
    pushStack(newStack, 4);
    pushStack(newStack, 3);
    pushStack(newStack, 2);
    pushStack(newStack, 1);

    printStack(newStack);
    int topValue = peekStack(newStack);
    if (topValue != -1) {
        printf("%d\n", topValue);
    }

    Stack* emptyStack = createStack();
    printStack(emptyStack);
    topValue = peekStack(emptyStack);
    if (topValue != -1) {
        printf("%d\n", topValue);
    }

    return 0;
}