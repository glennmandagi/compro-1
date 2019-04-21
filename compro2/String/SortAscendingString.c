#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char character,input[100], output[100];
  int n,count[20];

  printf("Input String : ");
  scanf("%s",input );

  n = strlen(input);

  for (int i = 0; i < n; i++) {
    for (int j = 'a'; j <= 'z'; j++) {
      count[j]++;
    }
  }
  printf("%d\n",count);

}
