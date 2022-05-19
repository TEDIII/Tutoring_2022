#include <stdio.h> //2525 //pass

int A, B, C;
int hour, min;
int main(){
  scanf("%d %d", &A, &B);
  scanf("%d", &C);

  hour = A;
  min = B+C;
  while(min >= 60){
    min -= 60;
    hour += 1;
    if(hour >= 24){
      hour -= 24;
    }
  }
  printf("%d %d", hour, min);
  return 0;
}
