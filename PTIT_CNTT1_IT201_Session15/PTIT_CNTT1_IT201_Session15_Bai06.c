#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int *array;
    int front;
    int rear;
    int capacity;
} Queue;

Queue* createQueue(int size) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->array = (int*)malloc(size * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->capacity = size;
    return q;
}

void enqueue(Queue* q, int value) {
    if (q->rear < q->capacity - 1) {
        q->array[++q->rear] = value;
    }
}

int checkIncreasing(Queue* q) {
    for (int i = q->front; i < q->rear; i++) {
        if (q->array[i + 1] - q->array[i] != 1)
            return 0;
    }
    return 1;
}

int main() {
    int n, x;
    scanf("%d", &n);
    Queue* q = createQueue(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        enqueue(q, x);
    }

    if (checkIncreasing(q)) {
        printf("True\n");
    }else {
        printf("False\n");
    }
    return 0;
}