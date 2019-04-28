#include <stdio.h>
#include <string.h>

struct student{
  char name[25];
  char id[10];
  int quiz;
  int average;
  int percentage;
};

int main(int argc, char const *argv[]) {
  struct student person1;
  struct student person2;
  struct student person3;
  int i,sum = 0;

  strcpy(person1.id,"101");
  strcpy(person1.name,"Jhonny Deep");
  strcpy(person2.id,"102");
  strcpy(person2.name,"Tom Cruise");
  strcpy(person3.id,"103");
  strcpy(person3.name,"Will Smith");

  //input quiz all person
  for ( i = 1; i <= 6; i++) {
    printf("Input Person1 Quiz%d : ",i);
    scanf("%d",&person1.quiz);

    sum += person1.quiz;
    person1.average = sum / 6;
    person1.percentage =  person1.average * 0.15;
  }
  printf("\n" );
  for ( i = 1; i <= 6; i++) {
    printf("Input Person2 Quiz%d : ",i);
    scanf("%d",&person2.quiz);

    sum += person2.quiz;
    person2.average = sum / 6;
    person2.percentage =  person2.average * 0.15;
  }
  printf("\n");
  for ( i = 1; i <= 6; i++) {
    printf("Input Person3 Quiz%d : ",i);
    scanf("%d",&person3.quiz);

    sum += person3.quiz;
    person3.average = sum / 6;
    person3.percentage =  person3.average * 0.15;
  }

  printf("\n");

  //print description table
  printf("|NIM| \t  |Name| \t\t ");
  for ( i = 1; i <= 6; i++) {
    printf("|Quiz%d| ",i );
  }
  printf("\t|Average|\t|Percentage|\n");

  //print output
    //person 1
  printf("|%s| \t |%s| \t\t",person1.id,person1.name);
  for ( i = 1; i <= 6; i++) {
    printf("   |%d| \t",person1.quiz);
  }
  printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        |%d|\t |%d|\n",person1.average,person1.percentage );


    //person2
  printf("|%s| \t |%s| \t\t",person2.id,person2.name);
  for ( i = 1; i <= 6; i++) {
    printf("   |%d| \t",person2.quiz);
  }
  printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        |%d|\t |%d|\n",person2.average,person2.percentage );


    //person3
  printf("|%s| \t |%s| \t\t",person3.id,person3.name);
  for ( i = 1; i <= 6; i++) {
    printf("   |%d| \t",person3.quiz);
  }
  printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        |%d|\t |%d|\n",person3.average,person3.percentage );

  return 0;
}
