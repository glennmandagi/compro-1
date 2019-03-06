#include<stdio.h>

int main(int argc, char const *argv[]) {
  int x;
  float num;
  char r[10];

  printf("Input : ");
  scanf("%d %f %s",&x,&num,r);

  printf("%d %.2f %s\n",x,num,r );
  return 0;
}
