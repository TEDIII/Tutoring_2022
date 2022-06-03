#include <stdio.h>

int main(void){
    int h, m, t;

    scanf("%d %d", &h, &m);
    scanf("%d", &t);
    
    int ans = m+t;
    m = ans % 60;
    h = h+ans/60;
    if(h==24){
        h=0;
    }else if(h>23){
        h = h-24;
    }
    printf("%d %d", h, m);
    return 0;
}
