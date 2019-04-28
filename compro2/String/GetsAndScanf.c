// C gets function example
#include <stdio.h>

int main()
{
	char name[50];
  int choose,input;
  printf("Choose : ");
  scanf("%d",&input );
  if (input == 1) {
    printf("\n Please Enter your Full Name: \n");
  	gets(name);

  	printf("=============\n");
  }else if (input == 2) {
		printf("\n Please Enter your Full Name: \n");
		scanf("%s",&name );
  }

  printf("%s\n", name);

	return 0;
}
