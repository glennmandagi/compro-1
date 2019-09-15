#include <stdio.h>
#include <string.h>
int callback(int n[100]);

int main() {
  char string[100];
  int result;
  printf("Input string : ");
  gets()

  result = callback(num);

  printf("Sum = %d\n",result );
  return 0;
}

int callback(int n[100]) {

  if (n>='a' && n<='z') {
    return n;
  }
  else {
    return (n+callback(n-1));
  }

}
