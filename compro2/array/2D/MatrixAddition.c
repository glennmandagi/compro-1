#include <stdio.h>

int main(int argc, char const *argv[]) {
  int val[2][3];
  int count,add[2][3];
  int i,j,a,b;

//Input value
  for ( i = 0; i < 2; i++) {
    for ( j = 0; j < 3; j++) {
      printf("Value[%d][%d] = ",i,j);
      scanf("%d",&val[i][j]);
    }
  }
  printf("\n");

//input Value 2
  for ( a = 0; a < 2; a++) {
    for ( b = 0; b < 3; b++) {
      printf("Value[%d][%d] = ",a,b);
      scanf("%d",&val[a][b]);
    }
  }

//print value
for (int c = 0; c < m; c++) {
   for (int d = 0; d < q; d++) {
     for (int k = 0; k < p; k++) {
       count = count + val[c][k]*val[k][d];
     }

     add[c][d] = sum;
     sum = 0;
   }
 }
   printf("\n");
   // for ( a = 0; a < 2; a++) {
   //   for ( b = 0; b < 3; b++) {
   //     printf("%d ",val[a][b]);
   //     if (b==2) {
   //        printf("\n");
   //     }
   //   }
   // }

//count the Value
  for ( i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      sum[i][j]=val[i][j]+val[i][j];
    }
  }
  printf("\n");
  return 0;
}
