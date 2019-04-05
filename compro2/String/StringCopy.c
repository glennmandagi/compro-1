#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char name[] = "Laura";
  char player[20];
  strcpy(player,name);

  for (int i = 0; name[i]!='\0'; i++) {
    printf("Name [%d] = %c\n",i,name[i] );
  }
  printf("Value in Variable Player become '%s'\n",player);
  return 0;
}
