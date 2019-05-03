#include <stdio.h>
#include <string.h>

struct student{
  char id[10];
  char fname[25];
  char lname[25];
  char letter[10];
  int quiz[4];
  int assignment[4];
  int project,MID,Final,grade,percentage,average,sum,fail;
};

int main(int argc, char const *argv[]) {
  struct student person[10];
  int input,choose,temp,fail;
  int MaxPer,MaxSum,MaxPro,MaxMID,MaxFinal,MaxGrade = 0;
  int MinPer,MinSum,MinPro,MinMID,MinFinal,MinGrade;


  printf("Input Student : ");
  scanf("%d",&input );
  printf("\n");

  int i,j,k,h,l;
  for ( i = 0; i < input; i++) {
    int count=0,count2=0;
    fail=0;
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

    //count highest and lowest number of all person
    for ( l = 0; l < input; l++) {
      //highest
      if (person[l].percentage > MaxPer && person[l].sum > MaxSum && person[l].project > MaxPro && person[l].MID > MaxMID && person[l].Final > MaxFinal && person[l].grade > MaxGrade) {
          MaxPer = person[l].percentage;
          MaxSum = person[l].sum;
          MaxPro = person[l].project;
          MaxMID = person[l].MID;
          MaxFinal = person[l].Final;
          MaxGrade = person[l].grade;
      }
    }
    //default number for minimum treshold
    MinPer = person[0].percentage;
    MinSum = person[0].sum;
    MinPro = person[0].project;
    MinMID = person[0].MID;
    MinFinal = person[0].Final;
    MinGrade = person[0].grade;
    for ( l = 0; l < input; l++) {
      //lowest
      if (person[l].percentage < MinPer && person[l].sum < MinSum && person[l].project < MinPro && person[l].MID < MinMID && person[l].Final < MinFinal && person[l].grade < MinGrade) {
          MinPer = person[l].percentage;
          MinSum = person[l].sum;
          MinPro = person[l].project;
          MinMID = person[l].MID;
          MinFinal = person[l].Final;
          MinGrade = person[l].grade;
      }
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
        if (person[i].grade >=91 && person[i].grade <=100) {
          printf("%10d|%10s|\n",person[i].grade,"A" );
        }
        else if (person[i].grade >=85 && person[i].grade <=90) {
          printf("%10d|%10s|\n",person[i].grade,"A-" );
        }
        else if (person[i].grade >=82 && person[i].grade <=84) {
          printf("%10d|%10s|\n",person[i].grade,"B+" );
        }
        else if (person[i].grade >=78 && person[i].grade <=81) {
          printf("%10d|%10s|\n",person[i].grade,"B" );
        }
        else if (person[i].grade >=75 && person[i].grade <=77) {
          printf("%10d|%10s|\n",person[i].grade,"B-" );
        }
        else if (person[i].grade >=70 && person[i].grade <=74) {
          printf("%10d|%10s|\n",person[i].grade,"C+" );
        }
        else if (person[i].grade >=67 && person[i].grade <=69) {
          printf("%10d|%10s|\n",person[i].grade,"C" );
        }
        else if (person[i].grade >=60 && person[i].grade <=66) {
          printf("%10d|%10s|\n",person[i].grade,"C-" );
        }
        else if (person[i].grade >=40 && person[i].grade <=59) {
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
      printf("\n\n");
      for ( i = 0; i < input; i++) {
        if (person[i].grade >=91 && person[i].grade <=100) {
          printf("%5d %17s\n",person[i].grade,"A" );
        }
        else if (person[i].grade >=85 && person[i].grade <=90) {
          printf("%5d %19s\n",person[i].grade,"A-" );
        }
        else if (person[i].grade >=82 && person[i].grade <=84) {
          printf("%5d %19s\n",person[i].grade,"B+" );
        }
        else if (person[i].grade >=78 && person[i].grade <=81) {
          printf("%5d %18s\n",person[i].grade,"B" );
        }
        else if (person[i].grade >=75 && person[i].grade <=77) {
          printf("%5d %19s\n",person[i].grade,"B-" );
        }
        else if (person[i].grade >=70 && person[i].grade <=74) {
          printf("%5d %19s\n",person[i].grade,"C+" );
        }
        else if (person[i].grade >=67 && person[i].grade <=69) {
          printf("%5d %18s\n",person[i].grade,"C" );
        }
        else if (person[i].grade >=60 && person[i].grade <=66) {
          printf("%5d %19s\n",person[i].grade,"C-" );
        }
        else if (person[i].grade >=40 && person[i].grade <=59) {
          printf("%5d %18s\n",person[i].grade,"D" );

        }
      }
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
        if (person[i].grade >=91 && person[i].grade <=100) {
          printf("%10d|%10s|\n",person[i].grade,"A" );
        }
        else if (person[i].grade >=85 && person[i].grade <=90) {
          printf("%10d|%10s|\n",person[i].grade,"A-" );
        }
        else if (person[i].grade >=82 && person[i].grade <=84) {
          printf("%10d|%10s|\n",person[i].grade,"B+" );
        }
        else if (person[i].grade >=78 && person[i].grade <=81) {
          printf("%10d|%10s|\n",person[i].grade,"B" );
        }
        else if (person[i].grade >=75 && person[i].grade <=77) {
          printf("%10d|%10s|\n",person[i].grade,"B-" );
        }
        else if (person[i].grade >=70 && person[i].grade <=74) {
          printf("%10d|%10s|\n",person[i].grade,"C+" );
        }
        else if (person[i].grade >=67 && person[i].grade <=69) {
          printf("%10d|%10s|\n",person[i].grade,"C" );
        }
        else if (person[i].grade >=60 && person[i].grade <=66) {
          printf("%10d|%10s|\n",person[i].grade,"C-" );
        }
        else if (person[i].grade >=40 && person[i].grade <=59) {
          printf("%10d|%10s|\n",person[i].grade,"D" );
        }
      }
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n\n");

      printf("Highest Value \t\t\t%15d %25d %11d %10d %10d %10d\n",MaxPer,MaxSum,MaxPro,MaxMID,MaxFinal,MaxGrade);
      printf("Lowest Value \t\t\t%15d %25d %11d %10d %10d %10d\n",MinPer,MinSum,MinPro,MinMID,MinFinal,MinGrade);
      printf("Fail \t\t\t%22d\n",fail );
    break;
  }
  return 0;
}
