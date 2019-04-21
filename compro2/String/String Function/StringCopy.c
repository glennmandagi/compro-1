#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char name[] = "Laura";
  char player[20];
  strcpy(player,name);
  printf("\nValue in Variable Player become '%s'\n\n",player);
  return 0;
}
