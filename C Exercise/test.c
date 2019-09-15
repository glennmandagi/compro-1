#include <stdio.h>

int main(int argc, char const *argv[]) {
  int next,input;
  printf("Input Number : ");
  scanf("%d",&input );
  if (input > 1 || input < 50) {
    for (int i = 1; i <= 50; i++) {
      printf("%d \n",i );
    }
  }
  else if (input > 50) {
    printf("Page 2\n");
    for (int i = input; i <= 100; i++) {
      printf("%d \n",i );
    }
  }
  else if (input > 100) {
    printf("Page 3\n");
    for (int i = input; i <= 150; i++) {
      printf("%d \n",i );
    }
  }
  else if (input > 150) {
    printf("Page 4\n");
    for (int i = input; i <= 200; i++) {
      printf("%d \n",i );
    }
  }
  return 0;
}
