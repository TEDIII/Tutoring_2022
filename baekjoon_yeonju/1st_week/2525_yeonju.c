#include <stdio.h>

int main(){
    int a, b;
    int c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    a += c/60;
    b += c%60;
    if(b>=60){
        a += b/60;
        b = b%60;
    }
    if (a>=24){
        a = a%24;
    }
    printf("%d %d", a, b);
}