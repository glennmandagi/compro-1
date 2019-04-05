#include<stdio.h>

int main(int argc, char const *argv[]) {
  int a=5, *pointer1, *pointer2;
  pointer1 = &a;
  pointer2 = pointer1;

  printf("Data in a = %d\n",a);
  printf("Address in a = %p\n",&a);

  printf("Address in pointer1 = %p\n",&pointer1);
  printf("Data in pointer1 = %d\n",*pointer1);

  printf("Address pointer2 = %p\n",&pointer2 );
  printf("Data pointer2 = %d\n",*pointer2 );
  return 0;
}
