#include <stdio.h>
#include <string.h>

struct student{
  char id[10];
  char fname[25];
  char lname[25];
  char letter[10];
  int quiz[3];
  int assignment[3];
  int project;
  int MID;
  int Final;
  int grade;
  int percentage;
  int average;
  int sum;
};

int main(int argc, char const *argv[]) {
  struct student person[10];
  int input,count=0,count2=0,choose;

  printf("Input Student : ");
  scanf("%d",&input );
  printf("\n");

  int i,j,k;
  for ( i = 0; i < input; i++) {
    printf("Input Id : ");
    scanf("%s",person[i].id);
    printf("Input Name : ");
    scanf("%s",person[i].fname);
    scanf("%s",person[i].lname);
    printf("\n");

    //input assignment
    for ( j = 0; j < 3; j++) {
      printf("Input Assignment%d : ",j );
      scanf("%d",&person[j].assignment[i] );
      count+=person[j].assignment[i];
      person[i].average = count/3;
    }
    person[i].percentage = person[i].average*0.20;

    printf("\n");
    //input quiz
    for ( k = 0; k < 4; k++) {
      printf("Input Quiz%d : ",k );
      scanf("%d",&person[k].quiz[i] );
      count2+=person[k].quiz[i];
      person[i].average = count2/4;
    }
    person[i].sum = person[i].average*0.10;
    printf("\n");

    //input Project
    printf("Input Project Value%d : ",i );
    scanf("%d",&person[i].project );
    person[i].project= person[i].project * 0.15;
    printf("\n");

    //input MID
    printf("Input Project Value%d : ",i );
    scanf("%d",&person[i].MID );
    fflush(stdin);
    person[i].MID= person[i].MID * 0.25;
    printf("\n");

    //input Final
    printf("Input Project Value%d : ",i );
    scanf("%d",&person[i].Final );
    fflush(stdin);
    person[i].Final= person[i].Final * 0.25;

    //count Grade
    person[i].grade = person[i].percentage + person[i].sum + person[i].project + person[i].MID + person[i].Final;

    printf("\n");
  }

  printf("Choose : " );
  scanf("%d",&choose );

  switch (choose) {
    case 1:
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      printf("|%8s|%16s|%20s|%25s|%10s|%10s|%10s|%10s|%10s|\n", "NIM", "Name", "Assignment 20%","Quiz 10%","Project 15%","MID 25%","Final 25%","Grade","Huruf");
      printf("|\t |\t\t  |%4s|%4s|%4s|%5s|","I","II","III","20%");
      printf("%4s|%4s|%4s|%4s|%5s|","I","II","III","IV","10%");
      printf("%11s|%10s|%10s|","15%","25%","25%" );
      printf("%10s|%10s|\n"," "," ");
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      for ( i = 0; i < input; i++) {
        printf("|%8s|%8s %-7s|", person[i].id,person[i].fname, person[i].lname );

        // count assignment
        for ( j = 0; j < 3; j++) {
          printf("%4d|",person[j].assignment[i]);
        }
        printf("%5d|",person[i].percentage);

        // count the quiz
        for ( k = 0; k < 4; k++) {
          printf("%4d|",person[k].quiz[i]);
        }
        printf("%5d|",person[i].sum);

        //print the Project
        printf("%11d|",person[i].project );
        //print the MID
        printf("%10d|",person[i].MID );
        //print the Final
        printf("%10d|",person[i].Final );
        //print Grade
        if (person[i].grade <=100) {
          printf("%10d|%10s|\n",person[i].grade,"A" );
        }
        else if (person[i].grade >84) {
          printf("%10d|%10s|\n",person[i].grade,"A-" );
        }
        else if (person[i].grade >81) {
          printf("%10d|%10s|\n",person[i].grade,"B+" );
        }
        else if (person[i].grade >77) {
          printf("%10d|%10s|\n",person[i].grade,"B" );
        }
        else if (person[i].grade >74) {
          printf("%10d|%10s|\n",person[i].grade,"B-" );
        }
        else if (person[i].grade >69) {
          printf("%10d|%10s|\n",person[i].grade,"C+" );
        }
        else if (person[i].grade >66) {
          printf("%10d|%10s|\n",person[i].grade,"C" );
        }
        else if (person[i].grade >59) {
          printf("%10d|%10s|\n",person[i].grade,"C-" );
        }
        else if (person[i].grade >39) {
          printf("%10d|%10s|\n",person[i].grade,"D" );

        }
      }
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
    break;

    case 2:
      printf("%5s %14s\n","Final Value","Grade" );
      printf("=============%6s=========\n"," ");
      printf("%5s %17s\n","91-100","A" );
      printf("%5s %19s\n","85-90","A-" );
      printf("%5s %19s\n","82-84","B+" );
      printf("%5s %18s\n","78-81","B" );
      printf("%5s %19s\n","75-77","B-" );
      printf("%5s %19s\n","70-74","C+" );
      printf("%5s %18s\n","67-69","C" );
      printf("%5s %19s\n","60-66","C-" );
      printf("%5s %18s\n","40-59","D" );
    break;

    case 3:
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      printf("|%8s|%16s|%20s|%25s|%10s|%10s|%10s|%10s|%10s|\n", "NIM", "Name", "Assignment 20%","Quiz 10%","Project 15%","MID 25%","Final 25%","Grade","Huruf");
      printf("|\t |\t\t  |%4s|%4s|%4s|%5s|","I","II","III","20%");
      printf("%4s|%4s|%4s|%4s|%5s|","I","II","III","IV","10%");
      printf("%11s|%10s|%10s|","15%","25%","25%" );
      printf("%10s|%10s|\n"," "," ");
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      for ( i = 0; i < input; i++) {
        printf("|%8s|%8s %-7s|", person[i].id,person[i].fname, person[i].lname );

        // count assignment
        for ( j = 0; j < 3; j++) {
          printf("%4d|",person[j].assignment[i]);
        }
        printf("%5d|",person[i].percentage);

        // count the quiz
        for ( k = 0; k < 4; k++) {
          printf("%4d|",person[k].quiz[i]);
        }
        printf("%5d|",person[i].sum);

        //print the Project
        printf("%11d|",person[i].project );
        //print the MID
        printf("%10d|",person[i].MID );
        //print the Final
        printf("%10d|",person[i].Final );

        //print Grade
        if (person[i].grade <=100) {
          printf("%10d|%10s|\n",person[i].grade,"A" );
        }
        else if (person[i].grade >84) {
          printf("%10d|%10s|\n",person[i].grade,"A-" );
        }
        else if (person[i].grade >81) {
          printf("%10d|%10s|\n",person[i].grade,"B+" );
        }
        else if (person[i].grade >77) {
          printf("%10d|%10s|\n",person[i].grade,"B" );
        }
        else if (person[i].grade >74) {
          printf("%10d|%10s|\n",person[i].grade,"B-" );
        }
        else if (person[i].grade >69) {
          printf("%10d|%10s|\n",person[i].grade,"C+" );
        }
        else if (person[i].grade >66) {
          printf("%10d|%10s|\n",person[i].grade,"C" );
        }
        else if (person[i].grade >59) {
          printf("%10d|%10s|\n",person[i].grade,"C-" );
        }
        else if (person[i].grade >39) {
          printf("%10d|%10s|\n",person[i].grade,"D" );

        }
      }
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n\n");

      printf("Highest Value \t\t\t%15d %25d %11d %10d %10d\n",person[i].percentage,person[i].sum,person[i].project,person[i].MID,person[i].Final);
      printf("Lowest Value \t\t\t%15d %25d %11d %10d %10d\n",person[i].percentage,person[i].sum,person[i].project,person[i].MID,person[i].Final);
    break;
  }
  return 0;
}
