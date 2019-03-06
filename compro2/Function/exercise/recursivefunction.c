#include <stdio.h>

int fac(int n);

int main() {
  int val,num;
  printf("Input Num : " );
  scanf("%d",&num);

  val = fac(num);
  printf("%d\n",val);
  return 0;
}

int fac(int n){
  if (n==0) {
    return(1);
  }
  else {
    return(n*fac(n-1));
  }
}
