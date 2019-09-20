#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* link;
};

int main(int argc, char const *argv[]) {
  int sum = 0;
  int max_data;

  //user input how much thr data that user want
  printf("Input how much data you want : ");
  scanf("%d",&max_data );

  struct Node* newnode;
  struct Node* head = NULL;

  for (int i = 1; i <= max_data; i++) {
    
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Input New Node : ");
    scanf("%d",&newnode->data );
    newnode->link = NULL;

    if (head==NULL) {
      head = newnode;
    } else {
      newnode->link = head;
      head = newnode;
    }

  }

  struct Node* temp=head;


  for (int j = 1; j <= max_data; j++) {
    sum = sum + temp->data;
    temp = temp->link;
  }



  printf("%d\n",sum );



  return 0;
}
