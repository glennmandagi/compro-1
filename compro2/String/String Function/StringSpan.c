#include <stdio.h>
#include <string.h>

int main ()
{
  int i;
  char strtext[20] = "19th";
  char cset[20] = "123456789";

  i = strspn (strtext,cset);
  if (i>1) {
    printf ("The Initial Number Has %d digits.\n",i);
    
  }

  return 0;
}
