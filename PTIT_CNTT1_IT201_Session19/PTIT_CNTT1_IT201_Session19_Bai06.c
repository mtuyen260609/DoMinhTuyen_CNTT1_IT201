#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node* createNode(int value) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}
bool searchBFS(Node* root, int value) {
    if (root == NULL) return false;
    Node* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;
    while (front < rear) {
        Node* current = queue[front++];
        if (current->data == value) {
            return true;
        }
        if (current->left) {
            queue[rear++] = current->left;
        }
        if (current->right) {
            queue[rear++] = current->right;
        }
    }

    return false;
}

int main() {
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4);
    root->left->left = createNode(5);

    int findValue = 3;

    if (searchBFS(root, findValue)) {
        printf("true\n");
    }else {
        printf("false\n");
    }
    return 0;
}