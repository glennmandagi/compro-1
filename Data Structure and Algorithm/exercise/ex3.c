#include <stdio.h>
#include <stdlib.h>

struct Node{
  char name[20];
  int age;
  char program_concentration[20];
  struct Node* next;
};

int main(int argc, char const *argv[]) {
  struct Node* head = NULL;
  struct Node* newnode;
  int user;

  printf("Input User : ");
  scanf("%d",&user );

  for (int i = 1; i <= user; i++) {
    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("Input Student Name : ");
    scanf("%s",newnode->name );

    printf("Input Student Age : ");
    scanf("%d",&newnode->age );

    printf("Input Student Program Concentration : ");
    scanf("%s",newnode->program_concentration );
    printf("\n");

    if (head == NULL) {
      head = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }

  struct Node* temp = head;

  for (int j = 1; j <= user; j++) {
    if (temp->age >16 && temp->age <21) {
      printf("Name : %s\n",temp->name );
      printf("Age : %d\n",temp->age );
      printf("Program Concentration : %s\n",temp->program_concentration );
      printf("\n");
    }
  }


  return 0;
}
