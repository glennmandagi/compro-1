#include<stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char input[30],output[30],ch;
  int no[30]=count,i,appears;

  printf("Input Words : ");
  // scanf("%s",input );
  gets(input);

  strcpy(output,input);
  count = strlen(output);

  for ( i = 0; i < count; i++) {
    ch = input[i] - 'a';
    no[i]++;
  }
  return 0;
}
