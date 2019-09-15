#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

int main(int argc, char const *argv[]) {
  struct Node* head = NULL;
  struct Node* new;

  int sum;

  for (int i = 1; i <=3; i++) {
    new = (struct Node*)malloc(sizeof(Node));
    printf("Enter a Value : ");
    scanf("%d",&new->data );

    new->next = NULL;

    if (head==NULL) {
      head = new;
    } else {
      new->next = head;
      head = new;
    }
  }

  return 0;
}
