#include <stdio.h>
#include <math.h>
int callback(int a);

int main() {
  int num;
  int result;
  printf("Input Num : ");
  scanf("%d",&num );

  result = callback(num);

  printf("Sum = %f\n",(double)result );
  return 0;
}

int callback(int a) {

  if (a==1) {
    return (double)1/2;
  }
  else {
    return 1/pow(2,a)+callback(a-1);
  }

}
