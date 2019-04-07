#include <stdio.h>

int main(int argc, char const *argv[]) {
  int cat = 1000;
  int month,death;
  death = cat * 0.2;
  cat = cat - death;
  for (int i = 1; i <= 10; i++) {
    cat = cat*2;
  }
  printf("%d\n",cat );
  return 0;
}
