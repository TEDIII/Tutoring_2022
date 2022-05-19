#include <stdio.h> //10845 ť //pass
#include <stdlib.h>

int N;
int queue[100001];
int size;
int front, back;
char s[10];

int empty() {
    if (front == back) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(int n) {
    queue[back++] = n;
    size++;
}

int pop() {
    if (!empty()) {
        size--;
        return queue[front++];
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
        else if (!strcmp(s, "empty")) {
            printf("%d\n", empty());
        }
        else if (!strcmp(s, "front")) {
            if (!empty()) {
                printf("%d\n", queue[front]);
            }
            else {
                printf("-1\n");
            }
        }
        else if (!strcmp(s, "back")) {
            if (!empty()) {
                printf("%d\n", queue[back - 1]);
            }
            else {
                printf("-1\n");
            }
        }
        else if (!strcmp(s, "size")) {
            printf("%d\n", size);
        }
    }
}