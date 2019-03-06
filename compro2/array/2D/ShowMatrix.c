#include <stdio.h>

int main(int argc, char const *argv[]) {
  int val[2][3];
  int i,j;
  for ( i = 0; i < 2; i++) {
    for ( j = 0; j < 3; j++) {
      printf("Value[%d][%d] = ",i,j);
      scanf("%d",&val[i][j]);

    }
  }

   for ( i = 0; i < 2; i++) {
     for ( j = 0; j < 3; j++) {
       printf("%d ",val[i][j] );
       if (j==2) {
          printf("\n");
       }
     }
   }
  printf("\n");
  return 0;
}
