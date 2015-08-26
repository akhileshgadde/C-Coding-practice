#include <stdio.h>

long fib_nr(int n);

int main(int agc, char *argv[])
{
  int n;
  printf("Enter the number of fibonacci series to be computed:");
  scanf("%d", &n);
  printf("%dth Fib number: %ld\n", n, fib_nr(n));
}

long fib_nr(int n)
{
  long f0 = 0;
  long f1 = 1;
  long f2 = 0;
  int i = 0;
  while (i < n - 2)
  {
    f2 = f0 + f1;
    f0 = f1;
    f1 = f2;
    i++;
  }
  return f2;
}
