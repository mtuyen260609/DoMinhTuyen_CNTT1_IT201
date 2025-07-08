#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char *arr;
    int top;
    int capacity;
} Stack;
Stack createStack(int maxSize) {
    Stack stack;
    stack.arr = (char *)malloc(maxSize * sizeof(char));
    stack.top = -1;
    stack.capacity = maxSize;
    return stack;
}
int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}
int isValidBracket(char *expr) {
    int len = strlen(expr);
    Stack s = createStack(len);
    for (int i = 0; i < len; i++) {
        char c = expr[i];
        if (c == '(' || c == '[' || c == '{') {
            s.arr[++s.top] = c;
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.top == -1 || !isMatching(s.arr[s.top--], c)) {
                free(s.arr);
                return 0;
            }
        }
    }
    int result = (s.top == -1);
    free(s.arr);
    return result;
}
int main() {
    char expr[1000];
    gets(expr);
    printf(isValidBracket(expr) ? "true\n" : "false\n");
    return 0;
}