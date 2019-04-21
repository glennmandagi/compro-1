#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int h,len,a=0,i=0,u=0,e=0,o=0;
  char c[30],b[30];
  printf("Input String : ");
  scanf("%s",c );
  strcpy(b,c);
  len = strlen(b);
  for (h = 0; h < len; h++) {
    if (c[h] == 'a') {
      a++;
    }
    if (c[h] == 'i') {
      i++;
    }
    if (c[h] == 'u') {
      u++;
    }
    if (c[h] == 'e') {
      e++;
    }
    if (c[h] == 'o') {
      o++;
    }
  }
  printf("%d\n",a );
  printf("%d\n",i );
  printf("%d\n",u );
  printf("%d\n",e );
  printf("%d\n",o );
  return 0;
}
