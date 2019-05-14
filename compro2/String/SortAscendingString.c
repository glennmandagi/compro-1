#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char character,input[100], output[100];
  int n,i,count[20];

  printf("Input String : ");
  scanf("%s",input );

  n = strlen(input);

  for ( i = 0; i < n; i++) {
    for (int j = 'a'; j <= 'z'; j++) {
      count[j]++;
    }
  }

  for ( i = 0; i < n; i++) {
    printf("%d\n",count[i]);
  }

}
