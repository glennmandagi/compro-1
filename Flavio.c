#include <stdio.h>
#include <conio.h>

int main() {
  int n = 0,i;
  printf("Input N : ");
  scanf("%d",&n );
  i = 1;
  do {
    printf("* ");
    i++;
  } while(i<n);
  getche();
  return 0;
}
