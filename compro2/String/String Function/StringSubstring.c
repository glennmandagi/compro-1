#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="This is a string program";
  char *pch;
  pch = strstr (str," ");
  strncpy (pch,"*",6);
  printf("%s\n",str );
  return 0;
}
