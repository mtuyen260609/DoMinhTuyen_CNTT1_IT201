#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int isPalindrome(char *str) {
    int len = strlen(str);
    Stack s = createStack(len);
    for (int i = 0; i < len; i++)
        s.arr[++s.top] = str[i];
    for (int i = 0; i < len; i++)
        if (str[i] != s.arr[s.top--])
            return 0;
    free(s.arr);
    return 1;
}

int main() {
    char str[1000];
    gets(str);
    printf(isPalindrome(str) ? "true\n" : "false\n");
    return 0;
}