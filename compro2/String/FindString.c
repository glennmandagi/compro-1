#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char a[20],b[20],c[20];
  int len;
  printf("Input : ");
  gets(a);
  strcpy(b,a);
  printf("Find : ");
  gets(c);

  if (strstr(b,c)) {
    printf("We found it! \n" );
  } else {
    printf("Not found \n");
  }

  return 0;
}
