#include <stdio.h>
#include <string.h>

struct student{
  char id[10];
  char fname[25];
  char lname[25];
  char letter[10];
  int quiz[10];
  int assignment[10];
  int project,MID,Final,grade,percentage,average,sum;
};

int main(int argc, char const *argv[]) {
  struct student person[15];
  int input,choose;
  int MaxPer,MaxSum,MaxPro,MaxMID,MaxFinal,MaxGrade = 0;
  int MinPer,MinSum,MinPro,MinMID,MinFinal,MinGrade;

  printf("Input Student : ");
  scanf("%d",&input );
  printf("\n");

  int i,j,k,l;
  for ( i = 0; i < input; i++) {
    int count=0,count2=0;
    MaxPer=0;
    MaxSum=0;
    MaxPro=0;
    MaxMID=0;
    MaxFinal=0;
    MaxGrade=0;

    MinPer=0;
    MinSum=0;
    MinPro=0;
    MinMID=0;
    MinFinal=0;
    MinGrade=0;

    printf("Input Id : ");
    scanf("%s",person[i].id);
    printf("Input Name : ");
    scanf("%s",person[i].fname);
    scanf("%s",person[i].lname);
    printf("\n");

    //input assignment
    for ( j = 0; j < 3; j++) {
      printf("Input Assignment%d : ",j );
      scanf("%d",&person[i].assignment[j] );
      count+=person[i].assignment[j];
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
    person[i].MID= person[i].MID * 0.25;
    printf("\n");

    //input Final
    printf("Input Project Value%d : ",i );
    scanf("%d",&person[i].Final );
    fflush(stdin);
    person[i].Final= person[i].Final * 0.25;

    //count Grade
    person[i].grade = person[i].percentage + person[i].sum + person[i].project + person[i].MID + person[i].Final;

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
    printf("\n");
  }
  printf("Highest Value \t\t\t%15d %25d %11d %10d %10d %10d\n",MaxPer,MaxSum,MaxPro,MaxMID,MaxFinal,MaxGrade);
  printf("Lowest Value \t\t\t%15d %25d %11d %10d %10d %10d\n",MinPer,MinSum,MinPro,MinMID,MinFinal,MinGrade);
  return 0;
}
