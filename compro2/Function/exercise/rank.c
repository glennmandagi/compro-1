#include <stdio.h>

int fac(int n,int m);

int main() {
  int val,num1,num2;
  printf("Input Num : " );
  scanf("%d",&num1 );
  printf("Input pangkat : " );
  scanf("%d",&num2 );
  val = fac(num1,num2);
  printf("%d\n",val);
  return 0;
}

int fac(int n,int m){
  if (m==0) {
    return (1);
  }
  else {
    return (n*fac(n,m-1));
  }
}
