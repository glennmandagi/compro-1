#include <stdio.h>
main()
{
char employeeName[5][20],employeeSalary[5];
int i;
int maxSalary=0, maxEmpl=-1;
for(i=0;i<5;i++)
 {
 printf("Enter details of employee no. %d :",i+1);
 scanf("%s",employeeName[i]);  // ** missing )
 scanf("%d",&employeeSalary[i]);
 if(employeeSalary[i]>maxSalary)
    {
    maxSalary=employeeSalary[i];
    maxEmpl=i;
    }
 }
printf("Employee %s has the max salary %d", employeeName[maxEmpl],employeeSalary[maxEmpl]);
}
