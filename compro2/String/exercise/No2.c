#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char s[25],length;
  printf("Input Something : ");
  scanf("%s ",s);
  length = strlen(s);
  if (length > 1) {
    printf("%s\n",length );
  }
  return 0;
}
