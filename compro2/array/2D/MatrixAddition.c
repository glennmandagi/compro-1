#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num1=0,num2=0,ch=0;

  printf("1.2x2\n");
  printf("2.3x3\n");
  printf("3.4x4\n");
  printf("4.5x5\n");

  printf("Choose : ");
  scanf("%d",&ch );

  if (ch == 1) {
    num1=2;
    num2=2;
  }
  else if (ch==2) {
    num1=3;
    num2=3;
  }
  else if (ch==3) {
    num1=4;
    num2=4;
  }
  else if (ch==4) {
    num1=5;
    num2=5;
  }

  int arr1[num1][num2];
  int arr2[num1][num2];
  int sum[num1][num2];
  int i,j,a,b;

//Input value
  for ( i = 0; i < num1; i++) {
    for ( j = 0; j < num2; j++) {
      printf("Value[%d][%d] = ",i,j);
      scanf("%d",&arr1[i][j]);
    }
  }
  printf("\n");

//input Value 2
  for ( a = 0; a < num1; a++) {
    for ( b = 0; b < num2; b++) {
      printf("Value[%d][%d] = ",a,b);
      scanf("%d",&arr2[a][b]);
    }
  }

//print value
   printf("\n");
   for ( i = 0; i < num1; i++) {
     for ( j = 0; j < num2; j++) {
       printf("%d ",arr1[i][j]);
       if (j==ch) {
          printf("\n");
       }
     }
   }
   printf("\n");
   for ( a = 0; a < num1; a++) {
     for ( b = 0; b < num2; b++) {
       printf("%d ",arr2[a][b]);
       if (b==ch) {
          printf("\n");
       }
     }
   }
   printf("\n");

//count the Value
  for ( i = 0; i < num1; i++) {
    for (int j = 0; j < num2; j++) {
      sum[i][j]=arr1[i][j]+arr2[i][j];
      printf("%d ",sum[i][j]);
      if (j==ch) {
        printf("\n");
      }

    }
  }
  printf("\n");
  return 0;
}
