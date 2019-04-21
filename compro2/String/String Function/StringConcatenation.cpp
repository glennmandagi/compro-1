#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char Word1[] = "Prince";
  char Word2[] = "Laura";
  strcat(Word1,Word2);
  printf("%s\n",Word1);
  return 0;
}
