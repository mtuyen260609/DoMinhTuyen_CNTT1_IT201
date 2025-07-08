#include <stdio.h>
#include <stdlib.h>

// Cấu trúc ngăn xếp
typedef struct {
    int *arr;
    int top;
    int capacity;
} Stack;
Stack createStack(int maxSize) {
    Stack stack;
    stack.arr = (int *)malloc(maxSize * sizeof(int));
    stack.top = -1;
    stack.capacity = maxSize;
    return stack;
}
void push(Stack *stack, int value) {
    if (stack->top >= stack->capacity - 1) return;
    stack->arr[++stack->top] = value;
}
int pop(Stack *stack) {
    if (stack->top == -1) return -1;
    return stack->arr[stack->top--];
}
void reverseArray(int *array, int n) {
    Stack s = createStack(n);
    for (int i = 0; i < n; i++) {
        push(&s, array[i]);
    }
    for (int i = 0; i < n; i++) {
        array[i] = pop(&s);
    }
    free(s.arr);
}
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
}
int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    printArray(arr, n);
    free(arr);
    return 0;
}