#include<stdio.h>
int fibonacci(int);
int main ()
{
    int n,f;
    printf("Enter the value of n? ");
    scanf("%d",&n);
    f = fibonacci(n);
    printf("%d\n",f);
}

int fibonacci (int n)
{
    if (n==0 || n==1)
    {
      return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
