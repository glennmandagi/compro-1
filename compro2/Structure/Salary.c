#include <stdio.h>

struct employee{
  char ID[6];
  char name[20];
  char address[50];
  long salary;
  long T;
}casher1,casher2,ob,mgr;

int main(int argc, char const *argv[]) {
  int ch;
  printf("Choose : ");
  scanf("%d",&ch );
  if (ch == 1) {
    printf("Input Name : " );
    scanf("%s",casher1.name );
    printf("Input ID : " );
    scanf("%s",casher1.ID );
    printf("Input Salary : " );
    scanf("%d",&casher1.salary);
    printf("Input T : " );
    scanf("%d",&casher1.T );
    printf("\n");
    casher1.salary = casher1.salary + casher1.T;

    printf("ID : %s\n",casher1.ID );
    printf("Name : %s\n",casher1.name );
    printf("Salary : %d\n",casher1.salary );
  }
  else if(ch == 2) {
    printf("Input Name : " );
    scanf("%s",casher2.name );
    printf("Input ID : " );
    scanf("%s",casher2.ID );
    printf("Input Salary : " );
    scanf("%d",&casher2.salary);
    printf("Input T : " );
    scanf("%d",&casher2.T );
    printf("\n");
    casher2.salary = casher2.salary + casher2.T;

    printf("ID : %s\n",casher2.ID );
    printf("Name : %s\n",casher2.name );
    printf("Salary : %d\n",casher2.salary );
  }
  else if (ch == 3) {
    printf("Input Name : " );
    scanf("%s",ob.name );
    printf("Input ID : " );
    scanf("%s",ob.ID );
    printf("Input Salary : " );
    scanf("%d",&ob.salary);
    printf("Input T : " );
    scanf("%d",&ob.T );
    printf("\n");
    ob.salary = ob.salary + ob.T;

    printf("ID : %s\n",ob.ID );
    printf("Name : %s\n",ob.name );
    printf("Salary : %d\n",ob.salary );

  }
  else if (ch == 4) {
    printf("Input Name : " );
    scanf("%s",mgr.name );
    printf("Input ID : " );
    scanf("%s",mgr.ID );
    printf("Input Salary : " );
    scanf("%d",&mgr.salary);
    printf("Input T : " );
    scanf("%d",&mgr.T );
    printf("\n");
    mgr.salary = mgr.salary + mgr.T;

    printf("ID : %s\n",mgr.ID );
    printf("Name : %s\n",mgr.name );
    printf("Salary : %d\n",mgr.salary );
  }


  return 0;
}
