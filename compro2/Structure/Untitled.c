#include <stdio.h>

int main(int argc, char const *argv[]) {
  int id;
  char name[22];
  printf("Input ID : ");
  gets(id);
  printf("Input Name : ");
  gets(name);

  printf("|ID| \t |Name|\n");
  printf("%d \t %s \n",id,name );
  return 0;
}
