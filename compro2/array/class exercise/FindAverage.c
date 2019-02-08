#include <stdio.h>

int main(int argc, char const *argv[]) {
  int value[5],num=0,avg;

  for (int i = 0; i < 5; i++) {
    printf("Input Value %d : ",i);
    scanf("%d",&value[i] );
    num += value[i];
  }

  for (int j = 0; j < 5; j++) {
    printf("%d ",value[j] );
  }
  printf("\n");
  avg =  num / 5;
  printf("average = %d\n",avg );

  return 0;
}
