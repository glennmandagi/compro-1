#include<stdio.h>

int main(int argc, char const *argv[]) {
  int cel,fah;

  printf("Input Temperature : ");
  scanf("%d",&cel );

  fah = cel*1.8+32;
  printf("%d\n",fah );
  return 0;
}
