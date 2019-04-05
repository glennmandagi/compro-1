#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char name[10],input;
  printf("Choose : ");
  scanf("%d",&input);
  if (input == 1) {
    printf("Input Name : ");
    scanf("%s",name );
    printf("%s\n",name );
  } else if (input == 2) {
    gets(name);
  }
  printf("\n");

  return 0;
}
