#include<stdio.h>

int main(int argc, char const *argv[]) {
  int profit = 1400;
  int clients = 15;
  int bonus;

  if (profit>1000) {
    if (clients>15) {
      bonus = 100;
    }
    else {
      bonus = 25;
    }
  }
  printf("%d\n",bonus);
  return 0;
}
