// C gets function example
#include <stdio.h>

int main()
{
	char name[50];
  int choose;
  printf("Choose : ");
  scanf("%d",&input );
  if (input == 1) {
    printf("\n Please Enter your Full Name: \n");
  	gets(name);

  	printf("=============\n");
  }

  printf("%s", name);

	return 0;
}
