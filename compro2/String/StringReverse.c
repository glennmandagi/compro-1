#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char mssg[10] = "test";

  strrev(mssg);
  printf("%s\n",mssg);
  return 0;
}
