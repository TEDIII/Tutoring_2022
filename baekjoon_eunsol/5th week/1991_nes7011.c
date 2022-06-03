#include <stdio.h> //1991_트리순회 //fail
#include <stdlib.h>

int arr[27];

typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
}Node;

Node* newNode(char data) {
    Node* new = (Node*)malloc(sizeof(Node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
    free(new);
}

Node* setData(Node* root, char data, char ldata, char rdata) {
    root->data = data;
    if (ldata != '.') {
        root->left = newNode(ldata);
    }
    if (rdata != '.') {
        root->right = newNode(rdata);
    }
    return root;
    free(root);
}

void preorder(Node* bt) { //data->left->right
    if (bt != NULL) {
        printf("%c", bt->data);
        preorder(bt->left);
        preorder(bt->right);
    }
}

void inorder(Node* bt) { //left->data->right
    if (bt != NULL) {
        inorder(bt->left);
        printf("%c", bt->data);
        inorder(bt->right);
    }
}

void postorder(Node* bt) { //left->right->data
    if (bt != NULL) {
        postorder(bt->left);
        postorder(bt->right);
        printf("%c", bt->data);
    }
}

int main() {
    Node* bt = newNode(NULL);
    int N;
    char c1, c2, c3;

    scanf("%d", &N);
    getchar();
    while (N--) {
        scanf("%c %c %c", &c1, &c2, &c3);
        getchar();
        setData(bt, c1, c2, c3);
        if (bt != NULL) {
            setData(bt, c1, c2, c3);
        }
    }

    preorder(bt);
    printf("\n");
    inorder(bt);
    printf("\n");
    postorder(bt);
}
