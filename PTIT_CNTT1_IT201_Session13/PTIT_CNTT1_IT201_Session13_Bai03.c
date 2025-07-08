#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int top;
    int capacity;
} Stack;

Stack createStack(int maxSize) {
    Stack stack;
    stack.arr = (int*)malloc(maxSize * sizeof(int));
    stack.top = -1;
    stack.capacity = maxSize;
    return stack;
}

void push(Stack *stack, int value) {
    if (stack->top >= stack->capacity - 1) {
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(Stack *stack) {
    if (stack->top == -1) {
        printf("No element in stack\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

void printStack(Stack stack) {
    printf("stack={\n");
    printf("    elements: [");
    for (int i = 0; i <= stack.top; i++) {
        printf("%d", stack.arr[i]);
        if (i < stack.top) printf(", ");
    }
    printf("],\n");
    printf("    top: %d,\n", stack.top);
    printf("    cap: %d\n", stack.capacity);
    printf("}\n");
}

int main() {
    Stack myStack = createStack(5);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    push(&myStack, 40);
    push(&myStack, 50);

    printStack(myStack);

    int value = pop(&myStack);
    if (value != -1) {
        printf("%d\n", value);
    }

    printStack(myStack);

    while (pop(&myStack) != -1); // lấy hết để ngăn xếp rỗng

    free(myStack.arr);
    return 0;
}