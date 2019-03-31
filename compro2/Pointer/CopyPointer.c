#include<stdio.h>

int main(int argc, char const *argv[]) {
  int a, *pointer1, *pointer2;
  pointer1 = &a;
  pointer2 = pointer1;

  printf("Data in a = %d\n",a);
  printf("Address in a = %p\n",&a);

  printf("Address in pointer1 = %p\n",pointer1);
  printf("Data in pointer1 = %d\n",*pointer1);
  return 0;
}
