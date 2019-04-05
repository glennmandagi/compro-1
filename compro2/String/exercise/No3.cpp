#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  int count;
  char name[30] = "prince SIACHIN";
  if (name[30]=='a'&& name[30]=='2') {
    count++;
    printf("%d\n",count );
  } else if (name[30]=='A' && name[30]=='2') {
    count++;
    printf("%d\n",count );
  }
  return 0;
}
