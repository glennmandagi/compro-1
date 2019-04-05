#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char s1[10] = "C";
  char s2[] = "C++";
  char s3[10] = "C#";

  printf("%d\n",strcmp(s1,s2));
  printf("%d\n",strcmp(s2,s3));
  printf("%d\n",strcmp(s1,s3));
  return 0;
}
