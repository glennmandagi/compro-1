#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]= "Prince Siachin Pasombaran";
  char str2[40];
  char str3[40];

  strncpy ( str2, str1, sizeof(str2) );

  strncpy ( str3, str2, 22 );

  puts (str1);
  puts (str3);

  return 0;
}
