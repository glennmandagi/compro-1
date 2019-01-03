#include <stdio.h>
#include <stdlib.h>

int main(){
  char characterName[20];
  int characterAge;
  printf("Input Name : ");
  scanf("%s",characterName );
  printf("Input Age : ");
  scanf("%d",&characterAge);
  printf("There once was a man name %s\n",characterName );
  printf("And the age of that man is %d\n",characterAge );
}
