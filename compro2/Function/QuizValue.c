#include <stdio.h>

int average,test,quiz,i,value,quiz_value;

int main() {
  //find the average of quiz
  printf("Input Quiz : ");
  scanf("%d",&quiz );
  printf("\n");
  for ( i = 1; i <= quiz; i++) {
    printf("Quiz = %d \n",i );
    printf("Input Quiz Value : " );
    scanf("%d",&value);
    test += value;
    average = test / i;
  }
  printf("The Average is %d \n\n",average );
  // find the sum of quiz
  quiz_value = 0.10*average;
  printf("The Sum Of Quiz is %d\n",quiz_value );
  return 0;
}
