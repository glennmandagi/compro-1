#include <stdio.h>

int main() {
  int r1,r2,r3,res,r_t;
  loop:
  printf("Input : ");
  scanf("%d",&res );

  switch (res) {
    case 1:
      printf("Input R1 : ");
      scanf("%d",&r1 );
      printf("Input R2 : ");
      scanf("%d",&r2 );
      printf("Input R3 : ");
      scanf("%d",&r3 );
      r_t = r1 + r2 + r3 ;
      printf("R_T = %d\n\n",r_t );
    break;
    default:
      printf("Wrong Input \n\n");
  }
  goto loop;
  return 0;
}
