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

int main() {
    int value;
    printf("Nhap gia tri Node: ");
    scanf("%d", &value);
    Node* node = createNode(value);
    printf("\nnode = {\n");
    printf("   data: %d,\n", node->data);
    printf("   left->%s,\n", node->left == NULL ? "NULL" : "...");
    printf("   right->%s\n", node->right == NULL ? "NULL" : "...");
    printf("}\n");
    return 0;
}
