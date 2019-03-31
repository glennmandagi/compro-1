#include <stdio.h>

int main(int argc, char const *argv[]) {
  int kl,ls,option,rebuke,longs,wide;
  printf("=======================\n");
  printf("two-dimentional figure\n");
  printf("=======================\n");
  do {
    printf("1. Square \n");
    printf("2. Rectangle \n");
    printf("3. Exit \n");
    printf("Choose Option : ");
    scanf("%d",&option);
    printf("\n");
    if (option == 1) {
      printf("Square \n");
      printf("======================\n");
      printf("Input Rebuke : ");
      scanf("%d",&rebuke);
      ls = rebuke*rebuke;
      kl = 4*rebuke;
      printf("Square area and around is : %d and %d \n\n",ls,kl);
    } else if (option == 2) {
      printf("Rectangle \n");
      printf("======================\n");
      printf("Input Long : ");
      scanf("%d",&longs);
      printf("Input Wide : ");
      scanf("%d",&wide);
      ls = longs*wide;
      kl = 2*(longs+wide);
      printf("large and around is : %d and %d \n\n",ls,kl);
    }

  } while(option !=3);
  printf("Thank You!!\n\n");
  return 0;
}
