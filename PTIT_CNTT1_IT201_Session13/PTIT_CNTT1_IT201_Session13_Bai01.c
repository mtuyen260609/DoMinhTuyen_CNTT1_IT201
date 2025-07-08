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
int main() {
    Stack myStack = createStack(5);
    free(myStack.arr);
    return 0;
}
