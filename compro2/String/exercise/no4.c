#include <stdio.h>
#include <string.h>

//palindrome words
int main() {
  char a[30],b[30];
  int c;

  printf("Input Words : ");
  scanf("%s",a );

  strcpy(b,a);
  strrev(b);
  c = strcmp(a,b);
  if ( c == 0 ) {
    printf("Palindrome\n");
  }
  else {
    printf("Not Palindrome\n");
  }
  return 0;
}
