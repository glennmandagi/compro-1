#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {
  //int a =10;
  FILE *document;
  document = fopen("/Users/javascript/student.txt","r+");

  fprintf(document,"Hallo\nSaya file");
  fclose(document);
  return 0;
}
