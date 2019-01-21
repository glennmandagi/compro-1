#include <stdio.h>
#include <stdlib.h>

void Tnum();
void hrLine();
void printLine();

int avr,sum=0;
char Char;

int main() {

  Tnum();
  hrLine();
  printf("\n");
  return 0;
}


void Tnum(){
  int input;
  char character;

  for (int i = 1; i <= 3; i++) {
    printf("Input Number : ");
    scanf("%d",&input);
    avr += input;
    sum = avr/3;
  }
  printf("\n");
  printf("Input Character : \n");
  scanf(" %c",&character);
  printLine();

}


void printLine(){
  for (int j = 1; j < sum; j++) {
    hrLine();
  }
}


void hrLine(){
  printf("-");
}
