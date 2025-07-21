#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // dùng kiểu bool

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
bool searchDFS(Node* root, int findValue) {
    if (root == NULL) return false;
    if (root->data == findValue) return true;
    return searchDFS(root->left, findValue) || searchDFS(root->right, findValue);
}

int main() {
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4);
    root->left->left = createNode(5);

    int findValue = 3;
    if (searchDFS(root, findValue)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}