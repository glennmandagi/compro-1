#include <stdio.h>
#include <stdlib.h>

int Tnum();
char hrLine();
void printLine();

int avr,sum=0;
char character;

int main() {

  Tnum(); // call Tnum function
  printf("\n");
  return 0;
}

//function to input number and character
int Tnum(){
  int input;

  for (int i = 1; i <= 3; i++) {
    printf("Input Number : ");
    scanf("%d",&input);
    avr += input;
    sum = avr/3;
  }
  printf("\n");
  printf("Input Character : ");
  scanf(" %c",&character);
  printLine();
  return (sum);
}

// function to print length of the line
void printLine(){
  for (int j = 1; j <= sum; j++) {
    hrLine();
  }
}

// function to print Line
char hrLine(){
  printf("%c",character);
  return (character);
}
