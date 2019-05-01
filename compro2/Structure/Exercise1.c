#include <stdio.h>

struct student{
  char id[10];
  char fname[25];
  char lname[25];
  int quiz[6];
  int average;
  float percentage;
};

int main(int argc, char const *argv[]) {
  struct student person[10];
  int input,count=0;
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
    for ( j = 0; j < 6; j++) {
      printf("Input Quiz%d : ",j );
      scanf("%d",&person[j].quiz[i]);
      count+=person[j].quiz[i];
    }
    person[i].average = count/6;
    person[i].percentage = person[i].average*0.15;
    printf("\n");
  }

  printf("+--------+----------------+------------------------------------------------------+\n");
  printf("|%8s|%16s|%5s|%5s|%5s|%5s|%5s|%5s|%5s|%5s|\n", "NIM", "Name", "Quiz1","Quiz2","Quiz3","Quiz4","Quiz5","Quiz6" ,"Average","Percentage");
  printf("+--------+----------------+------------------------------------------------------+\n");
  fflush(stdin);
  for ( i = 0; i < input; i++) {
    printf("|%8s|%8s %-7s|", person[i].id,person[i].fname, person[i].lname );
    for ( j = 0; j < 6; j++) {
      //printf("|%8s|%16s|\n",person[i].id,strcat(person[i].fname, person[i].lname));
      printf("%5d|",person[j].quiz[i]);

    }
    printf("%7d|%10.1f|",person[i].average,person[i].percentage );
    printf("\n");
  }
  printf("+--------+----------------+------------------------------------------------------+\n");

  return 0;
}
