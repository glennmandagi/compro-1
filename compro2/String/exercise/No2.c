#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char s[25],length;
  int count;
  printf("Input Something : ");
  scanf("%s",s);
  length = strlen(s);
  if (length > 1) {
    count++;
    printf("%d\n",count );
  }
  return 0;
}
