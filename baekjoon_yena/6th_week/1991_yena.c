#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node {
    char data;
    struct Node *left;
    struct Node *right;
}node;
 
node* New(char x) {
    node* newNode = (node*)malloc(sizeof(node));
 
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = x;
 
    return newNode;
}
 
void preorder(node* t) {
    if (t == NULL)
        return;
    
    printf("%c", t->data);
    preorder(t->left);
    preorder(t->right);
}
 
void inorder(node* t) {
    if (t == NULL)
        return;
    
    inorder(t->left);
    printf("%c", t->data);
    inorder(t->right);
}
 
void postorder(node* t) {
    if (t == NULL)
        return;
    
    postorder(t->left);
    postorder(t->right);
    printf("%c", t->data);
}
 
int main() {
    node * root[27];
    int num;
    char a, b, c, arr[81][2];
 
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        scanf(" %c %c %c", &a, &b, &c);
        arr[i][0] = b;    arr[i][1] = c;
        root[i] = New(a);
    }
 
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (arr[i][0] == root[j]->data)
                root[i]->left = root[j];
            if (arr[i][1] == root[j]->data)
                root[i]->right = root[j];
        }
    }
 
    preorder(root[0]);
    printf("\n");
    inorder(root[0]);
    printf("\n");
    postorder(root[0]);
 
    return 0;
}
