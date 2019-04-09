#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int total=0,discount=0;
  char choose;

  printf("Input Size : ");
  scanf(" %c",&choose);

  if (choose == 's' || choose == 'S') {
    if (total >50 && total <=75) {
      discount=0.5;
      printf("Discount = %d\n",discount);
    }
  }
  else if (choose == 'l' || choose == "L") {
    if (total >= 100) {
      discount = 0.10;
      printf("Discount = %d\n",discount);
    }
  }
  return 0;
}
