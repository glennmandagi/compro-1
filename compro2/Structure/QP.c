#include <stdio.h>

struct student{
  char id[10];
  char name[30];
  int quiz[10];
  int average;
  int percentage;
  int sum;
}person;

int main() {

  int  i;
  for ( i = 1; i <= 3; i++) {
    printf("Input ID person%d : ",i);
    scanf("%s",person.id);
    printf("Input Name person%d : ",i);
    scanf("%s",person.name);

  }

  // for ( i = 0; i < 5; i++) {
  //   printf("Input Quiz%d person1 : ",i );
  //   scanf("%d",person.quiz);
  // }

  printf("|NIK| \t |Name|\n");

  for ( i = 1; i <= 3; ++i) {
    puts(person.id);
    puts(person.name);
    printf("\n");
  }
  return 0;
}
