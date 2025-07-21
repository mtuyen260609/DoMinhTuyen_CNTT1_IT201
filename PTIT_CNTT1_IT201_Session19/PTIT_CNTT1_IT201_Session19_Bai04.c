#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Không thể cấp phát bộ nhớ.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

int main() {
    //        2
    //       / \
    //      3   4
    //     /
    //    5

    Node* root = createNode(2);
    root->left = createNode(3);
    root->left->left = createNode(5);
    root->right = createNode(4);

    printf("Duyet cay theo Trung thu tu (Inorder):\n");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
