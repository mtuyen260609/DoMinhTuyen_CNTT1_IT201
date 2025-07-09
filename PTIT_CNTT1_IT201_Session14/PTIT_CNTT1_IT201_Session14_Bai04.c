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

int popStack(Stack* s) {
    if (s->top == NULL) {
        printf("Ngăn xếp trống\n");
        return -1;
    }
    Node* temp = s->top;
    int value = temp->data;
    s->top = temp->next;
    free(temp);
    return value;
}

int main() {
    Stack* newStack = createStack();
    pushStack(newStack, 5);
    pushStack(newStack, 4);
    pushStack(newStack, 3);
    pushStack(newStack, 2);
    pushStack(newStack, 1);

    printStack(newStack);
    popStack(newStack);
    printStack(newStack);
    Stack* emptyStack = createStack();
    printStack(emptyStack);
    popStack(emptyStack);

    return 0;
}