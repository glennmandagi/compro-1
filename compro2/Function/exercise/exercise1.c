#include <stdio.h>
#include <stdlib.h>
void sl();
void hdr();

int main() {
  hdr();
  printf("Nama : Amir Khan\n");
  sl();

  printf("Department : Information Technology\n");
  sl();

  printf("Hobby : Hang out\n");
  sl();

  return 0;
}

void hdr(){
  printf("Klabat University\n");
  printf("Faculty of Information of Technology\n");
  printf("******************************\n\n");

}

void sl() {
  printf("------------------------------\n");
}
