#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char name[20];
  char a;
  strcpy(name,"PRINCE");
  strlwr(name);
  printf("%s\n",name );
  return 0;
}
