#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char name[10];
  printf("Input Name : ");
  scanf("%s",name );

  strupr(name);
  strrev(name);

  printf("%s\n",name );
  return 0;
}
