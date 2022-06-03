#include<stdio.h>
#include<string.h>
#define SIZE 1000

//시간초과 에러.. :(

int queue[SIZE];
int front = -1, rear = -1;

void push(int data) {
    rear++;
    queue[rear] = data;
}

int pop() {
    if(front == rear) {
        return -1;
    } else {
        return queue[front++];
    }
}

int size() {
    return rear - front;
}

int empty() {
    if(front == rear) {
        return 1;
    } else {
        return 0;
    }
}

int frontc() {
    if(front == rear) {
        return -1;
    } else {
        return queue[front + 1];
    }
}

int rearc() {
    if(front == rear) {
        return -1;
    } else {
        return queue[rear];
    }
}

int main() {
    int str;
    scanf("%d", &str);

    for(int i=0; i<str; i++) {
        char s[5] = {0, };
        scanf("%s", s);

        if(!strcmp(s, "push")) {
            int data;
            scanf("%d", &data);
            push(data);
        } else if(!strcmp(s, "pop")) {
            printf("%d\n", pop());
        } else if(!strcmp(s, "size")) {
            printf("%d\n", size());
        } else if(!strcmp(s, "empty")) {
            printf("%d\n", empty());
        } else if(!strcmp(s, "front")) {
            printf("%d\n", frontc());
        } else if(!strcmp(s, "rear")){
            printf("%d\n", rearc());
        }
    }

    return 0;
}
