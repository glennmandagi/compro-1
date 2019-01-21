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

      //Question four
      printf("Question 4.\n\n");
      printf("What's your truly desire?\n");
      printf("1.Money \t");
      printf("2.Love \t ");
      printf("3.Happiness \t ");
      printf("4.Power \n\n");
      printf("Choose Your Answer : ");
      scanf("%d",&answer);
      if (answer == 1) {
        value = 15;
      }
      else if (answer == 2) {
        value = 20;
      }
      else if (answer == 3) {
        value = 40;
      }
      else if (answer == 4) {
        value = 25;
      }
      printf("%d\n\n",value );
      sum += value;

      //Question five
      printf("Question 5.\n\n");
      printf("Choose the quality you like in people\n");
      printf("1.Focused \t");
      printf("2.Excellence \t");
      printf("3.Flexible \t");
      printf("4.Brave \n\n");
      printf("Choose Your Answer : ");
      scanf("%d",&answer);
      if (answer == 1) {
        value = 10;
      }
      else if (answer == 2) {
        value = 25;
      }
      else if (answer == 3) {
        value = 20;
      }
      else if (answer == 4) {
        value = 45;
      }
      printf("%d\n\n",value );
      sum += value;

      //Question six
      printf("Question 6.\n\n");
      printf("What's your favorite weather?\n");
      printf("1.Winter \t");
      printf("2.Fall \t");
      printf("3.Summer \t");
      printf("4.Rainy \n\n");
      printf("Choose Your Answer : ");
      scanf("%d",&answer);
      if (answer == 1) {
        value = 20;
      }
      else if (answer == 2) {
        value = 10;
      }
      else if (answer == 3) {
        value = 45;
      }
      else if (answer == 4) {
        value = 25;
      }
      printf("%d\n\n",value );
      sum += value;

      //Question seven
      printf("Question 7.\n\n");
      printf("What does a perfect day look like to you?\n");
      printf("1.Spend time together with family\n");
      printf("2.Go out with Girl/Boyfriend\n");
      printf("3.Take a rest after a hard day\n");
      printf("4.Holiday\n\n");
      printf("Choose Your Answer : ");
      scanf("%d",&answer);
      if (answer == 1) {
        value = 25;
      }
      else if (answer == 2) {
        value = 10;
      }
      else if (answer == 3) {
        value = 45;
      }
      else if (answer == 4) {
        value = 20;
      }
      printf("%d\n\n",value );
      sum += value;

      //Question eight
      printf("Question 8.\n");
      printf("What's makes you feel happy?\n");
      printf("1.Play a game\n" );
      printf("2.Listen to music\n");
      printf("3.Go out for holiday\n");
      printf("4.Hang out to the party\n");
      printf("Choose Your Answer : ");
      scanf("%d",&answer);
      if(answer == 1) {
        value = 15;
      }
      else if (answer == 2) {
        value = 40;
      }
      else if (answer == 3) {
        value =  20;
      }
      else if (answer == 4) {
        value = 25;
      }
      printf("%d\n\n",value );
      sum += value;

      val += sum; //count every sum
      if (val >= 120 && val <= 205) {
        printf("Your Hidden power is your speed\n\n");
      }
      else if (val >= 260 && val <= 399) {
        printf("You've a hidden psyshic power\n\n");
      }
      else if (val >= 400 && val <= 450) {
        printf("Your power is your ability to read people like a book\n\n");
      }
    }
  } while(choose != 2);
  printf("%d\n",val );
  printf("Thank You\n\n" );
  return 0;
}
