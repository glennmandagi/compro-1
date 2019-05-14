#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
  char id[10];
  char fname[25];
  char lname[25];
  char letter[10];
  int quiz[4];
  int assignment[4];
  int project,MID,Final,grade,percentage,average,sum;
};

int main() {
  FILE *doc;
  doc = fopen("/Users/javascript/student.txt","w+");
  struct student person[10];
  char first[20],last[20],press;
  int input,choose,fail,freq=0,temp;
  int MaxPer,MaxSum,MaxPro,MaxMID,MaxFinal,MaxGrade;
  int MinPer,MinSum,MinPro,MinMID,MinFinal,MinGrade;
  again:
  printf("Input Student : ");
  scanf("%d",&input );
  printf("\n");

  int i,j,k,h,l,g;
  for ( i = 0; i < input; i++) {
    int count=0,count2=0;
    MaxPer=0;
    MaxSum=0;
    MaxPro=0;
    MaxMID=0;
    MaxFinal=0;
    MaxGrade=0;

    fail=0;
    printf("Input Id : ");
    scanf("%s",person[i].id);
    printf("Input Name : ");
    scanf("%s",person[i].fname);
    scanf("%s",person[i].lname);
    strcpy(first,person[i].fname);
    strcpy(last,person[i].lname);
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
      if (person[i].percentage == MaxPer && person[i].sum == MaxSum && person[i].project == MaxPro && person[i].MID == MaxMID && person[i].Final == MaxFinal && person[i].grade == MaxGrade) {
          MaxPer = person[i].percentage;
          MaxSum = person[i].sum;
          MaxPro = person[i].project;
          MaxMID = person[i].MID;
          MaxFinal = person[i].Final;
          MaxGrade = person[i].grade;
      }
      else if (person[i].percentage > MaxPer && person[i].sum > MaxSum && person[i].project > MaxPro && person[i].MID > MaxMID && person[i].Final > MaxFinal && person[i].grade > MaxGrade) {
        MaxPer = person[i].percentage;
        MaxSum = person[i].sum;
        MaxPro = person[i].project;
        MaxMID = person[i].MID;
        MaxFinal = person[i].Final;
        MaxGrade = person[i].grade;
      }
    }
    //default number for minimum treshold
    //compare the number from first to last person
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

    //count fail
    for ( h = 0; h < input; h++) {
      if (person[h].grade < 67) {
        fail++;
      }
    }
  }

  printf("Choose : " );
  scanf("%d",&choose );

  switch (choose) {
    case 1:
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      fprintf(doc,"+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      printf("|%8s|%16s|%20s|%25s|%10s|%10s|%10s|%10s|%10s|\n", "NIM", "Name", "Assignment 20%","Quiz 10%","Project 15%","MID 25%","Final 25%","Grade","Huruf");
      fprintf(doc,"|%8s|%16s|%20s|%25s|%10s|%10s|%10s|%10s|%10s|\n", "NIM", "Name", "Assignment 20%","Quiz 10%","Project 15%","MID 25%","Final 25%","Grade","Huruf");
      printf("|\t |\t\t  |%4s|%4s|%4s|%5s|","I","II","III","20%");
      fprintf(doc,"|\t |\t\t  |%4s|%4s|%4s|%5s|","I","II","III","20%");
      printf("%4s|%4s|%4s|%4s|%5s|","I","II","III","IV","10%");
      fprintf(doc,"%4s|%4s|%4s|%4s|%5s|","I","II","III","IV","10%");
      printf("%11s|%10s|%10s|","15%","25%","25%" );
      fprintf(doc,"%11s|%10s|%10s|","15%","25%","25%" );
      printf("%10s|%10s|\n"," "," ");
      fprintf(doc,"%10s|%10s|\n"," "," ");
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      fprintf(doc,"+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      for ( i = 0; i < input; i++) {
        printf("|%8s|%8s %-7s|", person[i].id,first,last );
        fprintf(doc,"|%8s|%8s %-7s|", person[i].id,first,last );

        // count assignment
        for ( j = 0; j < 3; j++) {
          printf("%4d|",person[j].assignment[i]);
          fprintf(doc,"%4d|",person[j].assignment[i]);
        }
        printf("%5d|",person[i].percentage);
        fprintf(doc,"%5d|",person[i].percentage);

        // count the quiz
        for ( k = 0; k < 4; k++) {
          printf("%4d|",person[k].quiz[i]);
          fprintf(doc,"%4d|",person[k].quiz[i]);
        }
        printf("%5d|",person[i].sum);
        fprintf(doc,"%5d|",person[i].sum);

        //print the Project
        printf("%11d|",person[i].project );
        fprintf(doc,"%11d|",person[i].project );
        //print the MID
        printf("%10d|",person[i].MID );
        fprintf(doc,"%10d|",person[i].MID );
        //print the Final
        printf("%10d|",person[i].Final );
        fprintf(doc,"%10d|",person[i].Final );
        //print Grade
        if (person[i].grade >=91 && person[i].grade <=100) {
          printf("%10d|%10s|\n",person[i].grade,"A" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"A" );
        }
        else if (person[i].grade >=85 && person[i].grade <=90) {
          printf("%10d|%10s|\n",person[i].grade,"A-" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"A-" );
        }
        else if (person[i].grade >=82 && person[i].grade <=84) {
          printf("%10d|%10s|\n",person[i].grade,"B+" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"B+" );
        }
        else if (person[i].grade >=78 && person[i].grade <=81) {
          printf("%10d|%10s|\n",person[i].grade,"B" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"B" );
        }
        else if (person[i].grade >=75 && person[i].grade <=77) {
          printf("%10d|%10s|\n",person[i].grade,"B-" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"B-" );
        }
        else if (person[i].grade >=70 && person[i].grade <=74) {
          printf("%10d|%10s|\n",person[i].grade,"C+" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"C+" );
        }
        else if (person[i].grade >=67 && person[i].grade <=69) {
          printf("%10d|%10s|\n",person[i].grade,"C" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"C" );
        }
        else if (person[i].grade >=60 && person[i].grade <=66) {
          printf("%10d|%10s|\n",person[i].grade,"C-" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"C-" );
        }
        else if (person[i].grade >=40 && person[i].grade <=59) {
          printf("%10d|%10s|\n",person[i].grade,"D" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"D" );

        }
      }
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      fprintf(doc,"+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
    break;

    case 2:
      printf("%5s %14s\n","Final Value","Grade" );
      fprintf(doc,"%5s %14s\n","Final Value","Grade" );
      printf("=============%6s=========\n"," ");
      fprintf(doc,"=============%6s=========\n"," ");
      printf("%5s %17s\n","91-100","A" );
      fprintf(doc,"%5s %17s\n","91-100","A" );
      printf("%5s %19s\n","85-90","A-" );
      fprintf(doc,"%5s %19s\n","85-90","A-" );
      printf("%5s %19s\n","82-84","B+" );
      fprintf(doc,"%5s %19s\n","82-84","B+" );
      printf("%5s %18s\n","78-81","B" );
      fprintf(doc,"%5s %18s\n","78-81","B" );
      printf("%5s %19s\n","75-77","B-" );
      fprintf(doc,"%5s %19s\n","75-77","B-" );
      printf("%5s %19s\n","70-74","C+" );
      fprintf(doc,"%5s %19s\n","70-74","C+" );
      printf("%5s %18s\n","67-69","C" );
      fprintf(doc,"%5s %18s\n","67-69","C" );
      printf("%5s %19s\n","60-66","C-" );
      fprintf(doc,"%5s %19s\n","60-66","C-" );
      printf("%5s %18s\n","40-59","D" );
      fprintf(doc,"%5s %18s\n","40-59","D" );
      printf("\n\n");
      fprintf(doc,"\n\n");
      for ( i = 0; i < input; i++) {
        if (person[i].grade >=91 && person[i].grade <=100) {
          printf("%5d %17s\n",person[i].grade,"A" );
          fprintf(doc,"%5d %17s\n",person[i].grade,"A" );
        }
        else if (person[i].grade >=85 && person[i].grade <=90) {
          printf("%5d %19s\n",person[i].grade,"A-" );
          fprintf(doc,"%5d %19s\n",person[i].grade,"A-" );
        }
        else if (person[i].grade >=82 && person[i].grade <=84) {
          printf("%5d %19s\n",person[i].grade,"B+" );
          fprintf(doc,"%5d %19s\n",person[i].grade,"B+" );
        }
        else if (person[i].grade >=78 && person[i].grade <=81) {
          printf("%5d %18s\n",person[i].grade,"B" );
          fprintf(doc,"%5d %18s\n",person[i].grade,"B" );
        }
        else if (person[i].grade >=75 && person[i].grade <=77) {
          printf("%5d %19s\n",person[i].grade,"B-" );
          fprintf(doc,"%5d %19s\n",person[i].grade,"B-" );
        }
        else if (person[i].grade >=70 && person[i].grade <=74) {
          printf("%5d %19s\n",person[i].grade,"C+" );
          fprintf(doc,"%5d %19s\n",person[i].grade,"C+" );
        }
        else if (person[i].grade >=67 && person[i].grade <=69) {
          printf("%5d %18s\n",person[i].grade,"C" );
          fprintf(doc,"%5d %18s\n",person[i].grade,"C" );
        }
        else if (person[i].grade >=60 && person[i].grade <=66) {
          printf("%5d %19s\n",person[i].grade,"C-" );
          fprintf(doc,"%5d %19s\n",person[i].grade,"C-" );
        }
        else if (person[i].grade >=40 && person[i].grade <=59) {
          printf("%5d %18s\n",person[i].grade,"D" );
          fprintf(doc,"%5d %18s\n",person[i].grade,"D" );
        }
      }
    break;

    case 3:
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      fprintf(doc,"+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      printf("|%8s|%16s|%20s|%25s|%10s|%10s|%10s|%10s|%10s|\n", "NIM", "Name", "Assignment 20%","Quiz 10%","Project 15%","MID 25%","Final 25%","Grade","Huruf");
      fprintf(doc,"|%8s|%16s|%20s|%25s|%10s|%10s|%10s|%10s|%10s|\n", "NIM", "Name", "Assignment 20%","Quiz 10%","Project 15%","MID 25%","Final 25%","Grade","Huruf");
      printf("|\t |\t\t  |%4s|%4s|%4s|%5s|","I","II","III","20%");
      fprintf(doc,"|\t |\t\t  |%4s|%4s|%4s|%5s|","I","II","III","20%");
      printf("%4s|%4s|%4s|%4s|%5s|","I","II","III","IV","10%");
      fprintf(doc,"%4s|%4s|%4s|%4s|%5s|","I","II","III","IV","10%");
      printf("%11s|%10s|%10s|","15%","25%","25%" );
      fprintf(doc,"%11s|%10s|%10s|","15%","25%","25%" );
      printf("%10s|%10s|\n"," "," ");
      fprintf(doc,"%10s|%10s|\n"," "," ");
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      fprintf(doc,"+--------+----------------+------------------------------------------------------------------------------------------------------+\n");
      for ( i = 0; i < input; i++) {
        printf("|%8s|%8s %-7s|", person[i].id,person[i].fname, person[i].lname );
        fprintf(doc,"|%8s|%8s %-7s|", person[i].id,person[i].fname, person[i].lname );

        // count assignment
        for ( j = 0; j < 3; j++) {
          printf("%4d|",person[j].assignment[i]);
          fprintf(doc,"%4d|",person[j].assignment[i]);
        }
        printf("%5d|",person[i].percentage);
        fprintf(doc,"%5d|",person[i].percentage);

        // count the quiz
        for ( k = 0; k < 4; k++) {
          printf("%4d|",person[k].quiz[i]);
          fprintf(doc,"%4d|",person[k].quiz[i]);
        }
        printf("%5d|",person[i].sum);
        fprintf(doc,"%5d|",person[i].sum);

        //print the Project
        printf("%11d|",person[i].project );
        fprintf(doc,"%11d|",person[i].project );
        //print the MID
        printf("%10d|",person[i].MID );
        fprintf(doc,"%10d|",person[i].MID );
        //print the Final
        printf("%10d|",person[i].Final );
        fprintf(doc,"%10d|",person[i].Final );

        //print Grade
        if (person[i].grade >=91 && person[i].grade <=100) {
          printf("%10d|%10s|\n",person[i].grade,"A" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"A" );
        }
        else if (person[i].grade >=85 && person[i].grade <=90) {
          printf("%10d|%10s|\n",person[i].grade,"A-" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"A-" );
        }
        else if (person[i].grade >=82 && person[i].grade <=84) {
          printf("%10d|%10s|\n",person[i].grade,"B+" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"B+" );
        }
        else if (person[i].grade >=78 && person[i].grade <=81) {
          printf("%10d|%10s|\n",person[i].grade,"B" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"B" );
        }
        else if (person[i].grade >=75 && person[i].grade <=77) {
          printf("%10d|%10s|\n",person[i].grade,"B-" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"B-" );
        }
        else if (person[i].grade >=70 && person[i].grade <=74) {
          printf("%10d|%10s|\n",person[i].grade,"C+" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"C+" );
        }
        else if (person[i].grade >=67 && person[i].grade <=69) {
          printf("%10d|%10s|\n",person[i].grade,"C" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"C" );
        }
        else if (person[i].grade >=60 && person[i].grade <=66) {
          printf("%10d|%10s|\n",person[i].grade,"C-" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"C-" );
        }
        else if (person[i].grade >=40 && person[i].grade <=59) {
          printf("%10d|%10s|\n",person[i].grade,"D" );
          fprintf(doc,"%10d|%10s|\n",person[i].grade,"D" );
        }
      }
      printf("+--------+----------------+------------------------------------------------------------------------------------------------------+\n\n");
      fprintf(doc,"+--------+----------------+------------------------------------------------------------------------------------------------------+\n\n");

      printf("Highest Value \t\t\t%15d %25d %11d %10d %10d %10d\n",MaxPer,MaxSum,MaxPro,MaxMID,MaxFinal,MaxGrade);
      fprintf(doc,"Highest Value \t\t\t%15d %25d %11d %10d %10d %10d\n",MaxPer,MaxSum,MaxPro,MaxMID,MaxFinal,MaxGrade);
      printf("Lowest Value \t\t\t%15d %25d %11d %10d %10d %10d\n",MinPer,MinSum,MinPro,MinMID,MinFinal,MinGrade);
      fprintf(doc,"Lowest Value \t\t\t%15d %25d %11d %10d %10d %10d\n",MinPer,MinSum,MinPro,MinMID,MinFinal,MinGrade);
      printf("Fail \t\t\t%23d\n",fail );
      fprintf(doc,"Fail \t\t\t%23d\n",fail );
    break;

    case 4:
      for ( i = 0; i < input; i++) {
        freq=1;
        for ( j = i+1; j < input; j++) {
          if (person[j].grade == person[i].grade) {
            freq++;
            person[j].grade = 0;
          }

        }
        if (person[i].grade >=91 && person[i].grade <=100) {
          printf("Grade %s %d people, %d is %d\n","A" ,freq,person[i].grade,freq);
          fprintf(doc,"Grade %s %d people, %d is %d\n","A" ,freq,person[i].grade,freq);
        }
        else if (person[i].grade >=85 && person[i].grade <=90) {
          printf("Grade %s %d people, %d is %d\n","A-",freq,person[i].grade,freq );
          fprintf(doc,"Grade %s %d people, %d is %d\n","A-",freq,person[i].grade,freq );
        }
        else if (person[i].grade >=82 && person[i].grade <=84) {
          printf("Grade %s %d people, %d is %d\n","B+",freq,person[i].grade,freq );
          fprintf(doc,"Grade %s %d people, %d is %d\n","B+",freq,person[i].grade,freq );
        }
        else if (person[i].grade >=78 && person[i].grade <=81) {
          printf("Grade %s %d people, %d is %d\n","B" ,freq,person[i].grade,freq);
          fprintf(doc,"Grade %s %d people, %d is %d\n","B" ,freq,person[i].grade,freq);
        }
        else if (person[i].grade >=75 && person[i].grade <=77) {
          printf("Grade %s %d people, %d is %d\n","B-",freq,person[i].grade,freq );
          fprintf(doc,"Grade %s %d people, %d is %d\n","B-",freq,person[i].grade,freq );
        }
        else if (person[i].grade >=70 && person[i].grade <=74) {
          printf("Grade %s %d people, %d is %d\n","C+",freq,person[i].grade,freq );
          fprintf(doc,"Grade %s %d people, %d is %d\n","C+",freq,person[i].grade,freq );
        }
        else if (person[i].grade >=67 && person[i].grade <=69) {
          printf("Grade %s %d people, %d is %d\n","C" ,freq,person[i].grade,freq);
          fprintf(doc,"Grade %s %d people, %d is %d\n","C" ,freq,person[i].grade,freq);
        }
        else if (person[i].grade >=60 && person[i].grade <=66) {
          printf("Grade %s %d people, %d is %d\n","C-",freq,person[i].grade,freq );
          fprintf(doc,"Grade %s %d people, %d is %d\n","C-",freq,person[i].grade,freq );
        }
        else if (person[i].grade >=40 && person[i].grade <=59) {
          printf("Grade %s %d people, %d is %d\n","D" ,freq,person[i].grade,freq);
          fprintf(doc,"Grade %s %d people, %d is %d\n","D" ,freq,person[i].grade,freq);
        }
      }
    break;

    case 5:
      printf("Sort Ascending\n");
      fprintf(doc,"Sort Ascending\n");
      for ( i = 0; i < input-1; i++) {
        temp = 0;
        for ( j = 0; j < input-i-1; j++) {
          if (person[j].grade > person[j+1].grade) {
            temp = person[j].grade;
            person[j].grade = person[j+1].grade;
            person[j+1].grade = temp;
          }
        }
      }
      for ( i = 0; i < input; i++) {
        printf("%d\n",person[i].grade );
        fprintf(doc,"%d\n",person[i].grade );
      }
    break;
    default:
      printf("Some Code not Working\n\n");
      fprintf(doc,"Some Code not Working\n\n");
  }
  printf("\nWant to input again?? 'Y' or 'N'\n");
  fprintf(doc,"\nWant to input again?? 'Y' or 'N'\n");
  scanf(" %c",&press );
  if (press == 'y') {
    goto again;
  }
  fclose(doc);
  return 0;
}
