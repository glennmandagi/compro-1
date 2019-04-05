#include <stdio.h>

int main(int argc, char const *argv[]) {
  int ch;

  int arr1[3][6] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,};
  int arr2[3][6] = {6,6,6,5,5,5,4,4,4,3,3,3,2,2,2,1,1,1,};
  int sum[3][6];
  int i,j,a,b;
  //print value
     printf("\n");
     for ( i = 0; i < 3; i++) {
       for ( j = 0; j < 6; j++) {
         printf("%d ",arr1[i][j]);
         if (j==5) {
            printf("\n");
         }
       }
     }
     printf("\n");
     for ( a = 0; a < 3; a++) {
       for ( b = 0; b < 6; b++) {
         printf("%d ",arr2[a][b]);
         if (b==5) {
            printf("\n");
         }
       }
     }
     printf("\n");

     
  printf("1. + \n");
  printf("2. - \n");
  printf("Choose : ");
  scanf("%d",&ch );
  switch (ch) {
    case 1:
    //just in case if user want to input by themselves
    // //Input value
    //   for ( i = 0; i < 3; i++) {
    //     for ( j = 0; j < 6; j++) {
    //       printf("Value[%d][%d] = ",i,j);
    //       scanf("%d",&arr1[i][j]);
    //     }
    //   }
    //   printf("\n");
    //
    // //input Value 2
    //   for ( a = 0; a < 3; a++) {
    //     for ( b = 0; b < 6; b++) {
    //       printf("Value[%d][%d] = ",a,b);
    //       scanf("%d",&arr2[a][b]);
    //     }
    //   }


       printf("\n");

    //count the Value
      for ( i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
          sum[i][j]=arr1[i][j]+arr2[i][j];
          printf("%d ",sum[i][j]);
          if (j==5) {
            printf("\n");
          }

        }
      }
    break;
    case 2:
    //just in case if user want to input by themselves
    // //Input value
    //   for ( i = 0; i < 3; i++) {
    //     for ( j = 0; j < 6; j++) {
    //       printf("Value[%d][%d] = ",i,j);
    //       scanf("%d",&arr1[i][j]);
    //     }
    //   }
    //   printf("\n");
    //
    // //input Value 2
    //   for ( a = 0; a < 3; a++) {
    //     for ( b = 0; b < 6; b++) {
    //       printf("Value[%d][%d] = ",a,b);
    //       scanf("%d",&arr2[a][b]);
    //     }
    //   }

    // //print value
    //    printf("\n");
    //    for ( i = 0; i < 3; i++) {
    //      for ( j = 0; j < 6; j++) {
    //        printf("%d ",arr1[i][j]);
    //        if (j==5) {
    //           printf("\n");
    //        }
    //      }
    //    }
    //    printf("\n");
    //    for ( a = 0; a < 3; a++) {
    //      for ( b = 0; b < 6; b++) {
    //        printf("%d ",arr2[a][b]);
    //        if (b==5) {
    //           printf("\n");
    //        }
    //      }
    //    }
       printf("\n");

    //count the Value
      for ( i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
          sum[i][j]=arr1[i][j]-arr2[i][j];
          printf("%d ",sum[i][j]);
          if (j==5) {
            printf("\n");
          }

        }
      }
  }
  printf("\n");
  return 0;
}
