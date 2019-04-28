#include <stdio.h>

struct description{
  char ID[10];
  char name[30];
  long salary;
};

int main(int argc, char const *argv[]) {
  struct description student;
  printf("Input ID : ");
  gets(student.ID);
  printf("Input name : ");
  gets(student.name);
  printf("Input Salary : ");
  gets(student.salary);

  printf("ID : %s",student.ID);
  printf("Name  : %s",student.name);
  printf("Salary : %ld",student.salary);
  return 0;
}
