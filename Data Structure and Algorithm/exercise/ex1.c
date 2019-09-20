#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

int main(int argc, char const *argv[]) {

  int max_data;
  struct Node* head = NULL;
  struct Node* new_node;

  printf("Input Max Data : ");
  scanf("%d",&max_data );
  printf("\n");

  //input node
  for (int i = 1; i <= max_data; i++) {
    //allocate memory for the node
    new_node = (struct Node*)malloc(sizeof(struct Node));
    printf("Input New Node : ");
    scanf("%d",&new_node->data);
    if (head == NULL) {
      head = new_node;
    } else {
      new_node->next = head;
      head = new_node;
    }
  }

  struct Node* temp = head;

  while (temp!=NULL) {

      if (temp->data%2 != 0 && temp->data%5 == 0){
        printf("Multiple of 5 = %d\n",temp->data);
      }
      temp = temp->next;
  }

  return 0;
}
