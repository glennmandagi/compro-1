#include <stdio.h>
#include <stdlib.h>
void VOne();

int main(void) {
  VOne();
  return 0;
}

void VOne() {
  int i,quiz,exer,test,Final,FV,back;
  char again;
  while (1) {

    printf("Input Value : ");
    scanf("%d %d %d %d",&quiz,&exer,&test,&Final );

    FV = 0.10+(0.10*quiz)+(0.15*exer)+(0.30*test)+(0.35*Final);

    printf("%d\n",FV );

    if (FV >= 75) {
      printf("You pass the this class\n" );
    }
    else {
      printf("You've to take this class again in the next term\n");
    }

    printf("You want to input again?\n'Y'or'N\n");
    scanf(" %c",&again );

    if (again == 'y') {
      continue;
    }
    else if (again == 'n') {
      printf("Thank You!!\n");
      break;
    }
  }
  return;
}
