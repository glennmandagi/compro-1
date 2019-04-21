#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  int upper=0,lower=0;
  char name[80];
  printf("Input Character : ");
  gets(name);
  for (int i = 0; name[i]!='\0'; i++) {
    if (name[i]>='a' && name[i]<='z') {
      upper++;

    } else if (name[i]>='A' && name[i]<='Z') {
      lower++;
    }

  }
  printf("%d\n",upper );
  printf("%d\n",lower );

  return 0;
}
