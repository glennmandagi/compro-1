#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

int main(int argc, char const *argv[]) {
  int lowest=0,n;
  struct Node* head = NULL;
  struct Node* newnode;

  printf("Input N : ");
  scanf("%d",&n );

  for (int i = 1; i <= n; i++) {
    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("Input Number : ");
    scanf("%d",&newnode->data );

    if (head == NULL) {
      head = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }

  struct Node* temp = head;

  for (int j = 1; j <= n; j++) {
    if (j == temp->data) {
      lowest = temp->data;
    }
    else if (temp->data > lowest) {
      lowest = temp->data;
    }
  }

  printf("Lowest Number is : %d\n",lowest );

  return 0;
}
