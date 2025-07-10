#include <stdio.h>
#include <stdlib.h>
struct Queue {
    int *array;
    int front;
    int rear;
    int capacity;
};
struct Queue* createQueue(int size) {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->array = (int*)malloc(size * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->capacity = size;
    return q;
}
int main() {
    int max = 3;
    struct Queue* q = createQueue(max);
    return 0;
}
