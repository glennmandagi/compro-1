#include <stdio.h>

// count volume,around,and large of the block

int around(int count1,int count2, int count3);

int volume(int v1, int v2, int v3);

int large(int a1, int a2, int a3);

int main() {
  int l,w,h,sum;

  printf("Input Length : ");
  scanf("%d",&l );

  printf("Input Width : ");
  scanf("%d",&w );

  printf("Input Height : ");
  scanf("%d",&h );
  printf("\n\n");

  sum = around(l,w,h);

  printf("Around = %d\n",sum );

  sum = volume(l,w,h);
  printf("Volume = %d\n",sum );

  sum = large(l,w,h);
  printf("Large = %d\n",sum );
  return 0;
}

int around(int count1,int count2, int count3){
  int value;
  value = 4*(count1+count2+count3);

  return (value);
}

int volume(int v1, int v2, int v3){
  int val;
  val = v1*v2*v3;

  return (val);
}

int large(int a1,int a2,int a3){
  int sm;
  sm = 2*((a1*a2) + (a1*a3) + (a2*a3));
  return (sm);
}
