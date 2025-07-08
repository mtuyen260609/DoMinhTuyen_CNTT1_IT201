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
        printf("Ngăn xếp đầy. Không thể thêm %d\n", value);
        return;
    }
    stack->top++;
    stack->arr[stack->top] = value;
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
    int value;
    printf("nhap phan tu:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &value);
        push(&myStack, value);
    }
    printStack(myStack);
    free(myStack.arr);
    return 0;
}