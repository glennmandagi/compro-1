#include <stdio.h>

// int func(int x, int y);

// int func(int x, int y){
//   if (x<y){
//     return -1;
//   } else if (x == y) {
//     return 1;
//   } else {
//     return (x-func(x -4,y));
//   }
// }

int main(int argc, char const *argv[]) {
  int a,b,n;

  printf("Input N : ");
  scanf("%d",&n );

  // printf("Input A & B : ");
  // scanf("%d %d",&a,&b );
  //
  // printf("%d\n",func(a,b) );

  for (int k = 1; k <= n; k++) {
    printf("%d %d %d\n",k,k,k );
  }
  return 0;
}
