#include <stdio.h>

int main() {
  int num,input,today;
  again:
  printf("Input Case: ");
  scanf("%d",&input);

  switch (input) {
    case 1:
      printf("Input Days Ago : ");
      scanf("%d",&num);
      if (num == 0) {
        printf("It's Monday\n\n");
        printf("Input today: ");
        scanf("%d",&today);
        if (today == 1) {
          printf("It's Monday\n\n");
        }
      }
    break;
    case 2:
      printf("Input Days Ago : ");
      scanf("%d",&num);
      if (num == 3) {
        printf("It's Sunday\n\n");
        printf("Input today: ");
        scanf("%d",&today);
        if (today == 3) {
          printf("It's Sunday\n\n");
        }
      }
    break;
    case 3:
      printf("Input Days Ago : ");
      scanf("%d",&num);
      if (num == 5) {
        printf("It's Yesterday\n\n");
        printf("Input today: ");
        scanf("%d",&today);
        if (today == 4) {
          printf("It's Yesterday\n\n");
        }
      }
    break;
    default:
      printf("Wrong Input\n");
  }
  goto again;
  return 0;
}
