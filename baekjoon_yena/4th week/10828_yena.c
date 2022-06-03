#include <stdio.h>
#include <string.h>
#define MAX 1000

int hight = -1;
int stack[MAX];

void push(int x){
  hight++;
  stack[hight] = x;
}

int pop(){
  if(empty()){
    return -1;
  }else{
    return stack[hight--];
  }
}

int empty(){
  if(hight == -1){
    return 1;
  }else{
    return 0;
  }
}

int top(){
  if(empty())
    return -1;
  else{
    return stack[hight];
  }
}

int main(){
  int n = 0;
  int m = 0;
  char str[5] = {0, };
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%s", str);

        if(!strcmp(str, "push")){
            scanf("%d", &m);
            push(m);
        }else if(!strcmp(str, "pop")){
            printf("%d\n", pop());
        }else if(!strcmp(str, "empty")){
            printf("%d\n",empty());
        }else if(!strcmp(str, "size")){
            printf("%d\n", hight+1);
        }else if(!strcmp(str, "top")){
            printf("%d\n", top());
        }
    }
    return 0;
}
