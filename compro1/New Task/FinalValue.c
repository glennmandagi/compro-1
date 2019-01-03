#include <stdio.h>

int main(int argc, char const *argv[]) {
  int fv,qz,md,fn,i,asg;
  char again;

  while (1) {

    printf("Input Value : ");
    scanf("%d %d %d %d",&qz, &asg, &md, &fn );

    fv = 0.10+(0.10*qz)+(0.15*asg)+(0.30*md)+(0.35*fn);

    printf("Final value from all the calculation is %d\n\n",fv );

    if (fv >= 75) {
      printf("You pass!!\n\n" );
    }
    else {
      printf("You fail..\n\n" );
    }

    printf("Input value again?? : ");
    scanf(" %c",&again );
    printf("\n");
    if (again == 'y') {
      continue;
    }
    else if (again == 'n') {
      printf("Thank You!!\n" );
      break;
    }

  }
  return 0;
}
