#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data[20];
  struct Node* link;
};

int main(int argc, char const *argv[]) {
  struct Node* head;


  int input;

  head=(struct Node*)malloc(sizeof(struct Node));

  printf("Input How Much Data User Want : ");
  scanf("%d",&input );

  for (int i = 0; i < input; i++) {
    printf("Input Data %d : ",i );
    scanf("%d",&head->data[i] );
  }

  for (int k = 0; k < input; k++) {
    printf("Node %d = %d\n",k,head->data[k] );
  }

  return 0;
}
