#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char name[20];
  strcpy(name,"prince");
  strupr(name);
  printf("%s\n",name );
  return 0;
}
