#include <stdio.h>
#include <stdlib.h>
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
void printStackInfo(Stack stack) {
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
void printStackLIFO(Stack stack) {
    for (int i = stack.top; i >= 0; i--) {
        printf("%d\n", stack.arr[i]);
    }
}
int main() {
    Stack s = createStack(5);
    s.arr[0] = 10;
    s.arr[1] = 20;
    s.arr[2] = 30;
    s.arr[3] = 40;
    s.arr[4] = 50;
    s.top = 4;
    printStackInfo(s);
    printStackLIFO(s);
    free(s.arr);
    return 0;
}
