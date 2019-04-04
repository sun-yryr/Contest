#include <stdio.h>
int main() {
  int day;
  scanf("%d\n", &day);
  if(22 <= day <= 25) {
	printf("Christmas");
    while(day < 25) {
      printf(" Eve");
      day++;
    }
    printf("\n");
  }
  return 0;
}
