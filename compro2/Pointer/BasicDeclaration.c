#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = 5;
  int b;
  int *pointer;
  pointer = &a;
  b = *pointer;
  printf("Data in A = %d\n",a );
  printf("Address in &a = %p\n",&a );
  printf("Data in *(&a) = %d\n",*(&a));

  printf("address in pointer = %p\n",&pointer);
  printf("Data in *pointer = %d\n",*pointer );
  return 0;
}
