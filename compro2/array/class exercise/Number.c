#include <stdio.h>

int main() {
  int appears=0,sum=0,bfr;
  int num[10]= {10,5,21,4,9,5,5,8,1,12};

  for (int i = 0; i < 10; i++) {
    printf("%d ",num[i] );
  }
  printf("\n");

  //angka genap
  for (int j = 0; j < 10; j++) {
    if (num[j]%2==0 ) {
      printf("%d ",num[j]);
    }
  }
  //angka ganjil
  for (int j = 0; j < 10; j++) {
    if (num[j]%2!=0 ) {
      printf("%d ",num[j]);
    }
  }
  printf("\n");
  //angka yang sama
  for (int k = 0; k < 10; k++) {
    if (num[k]==5) {
      appears++;
      //count 5*3
      sum = appears * num[k];
    }
  }

  printf("%d = %d\n",appears,sum);

  printf("\n");
  return 0;
}
