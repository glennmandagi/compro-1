#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr1[10];
  int max,min,i,j;

  for ( i = 0; i < 10; i++) {
    printf("Input Value : ");
    scanf("%d",&arr1[i] );
  }

  for ( j = 0; j < 10; j++) {

    if (j == arr1[j]) {
      max = arr1[j];
      min = arr1[j];
    }
    else if (arr1[j]>max) {
      max = arr1[j];
    }
    else if (arr1[j]<min) {
      min = arr1[j];
    }
  }
  printf("Max Number : %d\n",max );
  printf("Min Number : %d\n",min );
  return 0;
}
MinPer = person[l].percentage;
MinSum = person[l].sum;
MinPro = person[l].project;
MinMID = person[l].MID;
MinFinal = person[l].Final;
MinGrade = person[l].grade;

// else if (person[l].sum>MaxSum) {
//   MaxSum = person[l].sum;
// }
// else if (person[l].project>MaxPro) {
//   MaxPro = person[l].project;
// }
// else if (person[l].MID>MaxMID) {
//   MaxMID = person[l].MID;
// }
// else if (person[l].Final>MaxFinal) {
//   MaxFinal = person[l].Final;
// }
// else if (person[l].grade>MaxGrade) {
//   MaxGrade = person[l].grade;
// }
//lowest
// if (l == person[l].percentage && l == person[l].sum && l == person[l].project && l == person[l].MID && l == person[l].Final && l == person[l].grade ) {
//   MinPer = person[l].percentage;
//   MinSum = person[l].sum;
//   MinPro = person[l].project;
//   MinMID = person[l].MID;
//   MinFinal = person[l].Final;
//   MinGrade = person[l].grade;
// }
// else if (person[l].percentage<MinPer) {
//   MinPer = person[l].percentage;
// }
// else if (person[l].sum<MinSum) {
//   MinSum = person[l].sum;
// }
// else if (person[l].project<MinPro) {
//   MinPro = person[l].project;
// }
// else if (person[l].MID<MinMID) {
//   MinMID = person[l].MID;
// }
// else if (person[l].Final<MinFinal) {
//   MinFinal = person[l].Final;
// }
// else if (person[l].grade<MinGrade) {
//   MinGrade = person[l].grade;
// }
