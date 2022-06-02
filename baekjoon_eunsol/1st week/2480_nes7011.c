#include <stdio.h> // 2480_주사위 세개 //pass

int a, b, c;
int ans;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        ans = 10000 + a * 1000;
    }
    else if (a == b && b != c) {
        ans = 1000 + a * 100;
    }
    else if (a == c && a != b) {
        ans = 1000 + a * 100;
    }
    else if (b == c && a != b) {
        ans = 1000 + b * 100;
    }
    else {
        if (a > b && a > c) {
            ans = a * 100;
        }
        else if (b > a && b > c) {
            ans = b * 100;
        }
        else if (c > a && c > b) {
            ans = c * 100;
        }
    }
    printf("%d", ans);
}