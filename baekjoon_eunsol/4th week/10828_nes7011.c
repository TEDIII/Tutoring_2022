#include <stdio.h> //10828 스택 //pass
#include <stdlib.h>

int N;
int top = -1;
int stack[100001];
char s[10];
int size;

int empty() {
    if (top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(int n) {
    stack[++top] = n;
    size++;
}

int pop() {
    if (empty() == 0) {
        size--;
        return stack[top--];
    }
    else {
        return -1;
    }
}

int main() {
    scanf("%d", &N);
    while (N--) {
        scanf("%s", s);
        if (!strcmp(s, "push")) {
            int num;
            scanf("%d", &num);
            push(num);
        }
        else if (!strcmp(s, "pop")) {
            printf("%d\n", pop());
        }
        else if (!strcmp(s, "top")) {
            if (!empty()) {
                printf("%d\n", stack[top]);
            }
            else {
                printf("%d\n", top);
            }
        }
        else if (!strcmp(s, "size")) {
            printf("%d\n", size);
        }
        else if (!strcmp(s, "empty")) {
            printf("%d\n", empty());
        }
    }
}
