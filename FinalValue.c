#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num,avr=0,sum=0,i;
  for (i = 1; i <= 3; i++) {
    printf("Input Number : ");
    scanf("%d",&num );
    avr += num;
    sum = avr / 3;
    if (i != sum) {
      printf("_\n");
    }
  }


  return 0;
}
