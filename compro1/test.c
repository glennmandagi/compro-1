#include <stdio.h>
int main(){
int M[7];
int j,val;

printf("Print all the Numbers : \n");
  printf("Input value : ");
  scanf("%d",&val );
  for (j = 0; j < 7; j++){
    val += 2;
    
    printf("M[%d] = %d\n",j,M[val]);
  }

    printf("\nFrom End to Beginning : \n");
    for (j = 6; j >= 0; j--){
    printf("M[%d] = %d\n",j,M[val]);
    }

}
