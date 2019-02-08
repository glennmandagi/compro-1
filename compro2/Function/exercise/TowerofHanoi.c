#include <stdio.h>
#include <stdlib.h>
int TOH(int n,int a,int b,int c);

int main() {
  int d;
  printf("Input Disc : ");
  scanf("%d",&d );
  TOH(d,'1','2','3');
  return 0;
}

int TOH(int n,int a,int b,int c){
  if(n==1){
    printf("move top disc from pole %c to %c\n",a,c );
  }
  else {
    TOH(n-1,a,c,b);

    TOH(1,a,b,c);

    TOH(n-1,b,a,c);
  }
}
