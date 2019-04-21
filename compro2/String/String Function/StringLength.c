#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char s[30],a[30];
  int length;
  printf("Input String : ");
  gets(a);
  strcpy(s,a);
  length = strlen(s);
  printf("%d\n",length );

  return 0;
}
