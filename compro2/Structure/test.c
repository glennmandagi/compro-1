#include <stdio.h>
#include <string.h>

struct description {
  char id[30];
  char name[40];
  int quiz,average,percentage;
}people1;

int main() {
  int i,j,h,l;

  for ( i = 0; i < 3; i++) {
    for ( j = 1; j ==1; j++) {
      printf("Input Name %d : ",i );
      scanf("%s",people1.name );
    }
    for ( h = 1; h ==1; h++) {
      printf("Input ID %d : ",i );
      scanf("%s",people1.id );
    }
    continue;
  }
  for ( i = 0; i < 3; i++) {
    for ( h = 1; h ==1; h++) {
      printf("ID : %s\n",people1.id );
    }
    for ( l = 1; l ==1; l++) {
      printf("Name : %s\n",people1.name );
    }
  }

  return 0;
}
