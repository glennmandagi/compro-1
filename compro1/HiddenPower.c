// this program to reveal what's your hidden power
#include <stdio.h>
#include <stdlib.h>

int main() {
  int exit,value=0,sum=0,answer,choose,val=0;

  printf("What's Your Hidden Power\n\n");
  do {

    printf("1. Let's find out your true power\n");
    printf("2. Exit\n\n");

    printf("Choose number 1. to continue or 2. to exit the program : ");
    scanf("%d",&choose );
    printf("\n");
    if (choose == 1) {

      //Question one
      printf("Question 1.\n\n");
      printf("Choose the color you like\n");
      printf("1.White,Gray,Blue \t");
      printf("2.Yellow,Orange,Red \t");
      printf("3.Pink,Brown,Green \t");
      printf("4.Black,Gray,Dark-Green \t\n\n");
      printf("Choose Your Answer : ");
      scanf("%d",&answer );
      //the value condition
      if (answer == 1) {
        value = 25;
      }
      else if (answer == 2) {
        value = 15;
      }
      else if (answer == 3) {
        value = 10;
      }
      else if (answer == 4) {
        value = 50;
      }
      printf("%d\n\n\n",value );
      sum += value;

      //Question two
      printf("Question 2.\n\n");
      printf("Which animal do you like the most?\n");
      printf("1.Jaguar\t");
      printf("2.Leopard\t ");
      printf("3.Cat\t\t");
      printf("4.Lion\n\n");
      printf("Choose Your Answer : ");
      scanf("%d",&answer );
      //the value condition
      if (answer == 1) {
        value = 15;
      }
      else if (answer == 2) {
        value = 10;
      }
      else if (answer == 3) {
        value = 50;
      }
      else if (answer == 4) {
        value = 25;
      }
      printf("%d\n\n",value );
      sum += value;


      //Question three
      printf("Question 3.\n\n");
      printf("What's your favorite music?\n");
      printf("1.Classical\t");
      printf("2.Rock\t");
      printf("3.Jazz\t");
      printf("4.Pop\t");
      printf("5.Country\n\n");
      printf("Choose Your Answer : ");
      scanf("%d",&answer);
      if (answer == 1) {
        value = 30;
      }
      else if (answer == 2) {
        value = 20;
      }
      else if (answer == 3) {
        value = 15;
      }
      else if (answer == 4) {
        value = 10;
      }
      else if (answer == 5) {
        value = 25;
      }
      printf("%d\n\n",value );
      sum += value;

      // //Question four
      // printf("Question 3.\n\n");



      val += sum;
    }
  } while(choose != 2);
  printf("%d\n",val );
  printf("Thank You\n\n" );
  return 0;
}
