#include <stdio.h>

int main(int argc, char const *argv[]) {
  int ec,ex,option,night,price;
  do {
    printf("1. Economy \n");
    printf("2. Excecutive \n");
    printf("3. Exit \n\n");

    printf("Choose option : ");
    scanf("%d",&option );
    if (option == 1) {
      printf("Economy Class\n\n");
      printf("Input Night : ");
      scanf("%d",&night );
      if (night == 1) {
        printf("Price is Rp.400.000/night \n\n");
      }else if (night >1) {
        price = 300000*night;
        printf("The Price is %d \n",price );
      }
    }
    else if (option == 2) {
      printf("Excecutive Class\n\n");
      printf("Input Night : ");
      scanf("%d",&night );
      if (night == 1) {
        printf("Price is Rp.500.000/night \n\n");
      } else if (night > 1 ) {
        price = 400000 * night;
        printf("The Price is %d \n",price );
      }
    }
  } while(option!=3);
  printf("Thank You ! \n");
  return 0;
}
