#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,mx,mn,av;
  mn = 0;
  mx = 0;
  int count;
  int n = 7;
  printf("Input Value : \n" );
  for (int i = 1; i <= n; i++) {
    scanf("%d",&a );

   if(i == 1){
     count = 1;
     mx = a;
     mn = a;
   }
   else if(mx < a){ // find max number
     mx = a;
   }
   else if(a < mn){ // find min number
     mn = a;
   }
   else if (mx == a ) { // find how many the number appears
     count++;
   }

  }
  printf("Max Number %d\n",mx);
  printf("Min Number %d\n",mn);
  printf("Same Line %d\n",count );
  return 0;
}
