#include <stdio.h>

long fib (int n);

int main(int argc, char *argv[])
{
  int n;
  printf("Enter the number of fibonacci series to be computed:");
  scanf("%d", &n);
  printf("%dth Fibonacci number: %ld\n", n, fib(n));
}

long fib(int n)
{
   if (n == 1)
      return 0;
   else if (n <= 2)
      return 1;
   else
      return fib(n-1) + fib (n-2);
}  
