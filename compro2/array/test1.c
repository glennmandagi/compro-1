#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[4],b[4],sum[4],i,j,h;

  for ( i = 0; i < 4; i++) {
    printf("Input Value A : ");
    scanf("%d",&a[i]);

    printf("Input Value B : ");
    scanf("%d",&b[i]);
  }
  printf("\n");
  // for ( j = 0; j < 4; j++) {
  //   printf("Input Value B : ");
  //   scanf("%d",&b[j] );
  // }

  for ( i = 0; i < 4; i++) {
    sum[i]=a[i]+b[i];
  }

  for ( i = 0; i < 4; i++) {
    printf("%d \n",sum[i] );
  }
  return 0;
}
