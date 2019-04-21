#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[40];
  char str2[40];
  strcpy (str1,"Selamat Datang di ");
  strcpy (str2,"Universitas Klabat");
  strncat (str1, str2, 6);
  puts (str1);
  return 0;
}
