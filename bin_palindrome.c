/* to check if the binary represnetation of a number is palindrome */
/* code credits: geeksforgeeks.org*/

# include <stdio.h>
#include <stdint.h>

/* function to check if the bit is set/unset at the specified position*/
int Bit_set(unsigned int num, unsigned int pos)
{
  return ((num & (1 << (pos-1))) ? 1 : 0);
}

int isPalindrome(uint32_t num)
{
  int l = 1;
  //printf("sizeof uint: %u\n", sizeof(num));
  int r = (sizeof(num) * 8);
  
  while (l < r)
  {
     if (Bit_set(num, l) != Bit_set(num, r))
        return -1;
     l++; r--;
  }
  return 1;
}

/* function to print the binary representation of a number */
void print_bin(uint32_t num)
{
    if (num)
    {
      print_bin(num >> 1);
      if (num & 1)
	printf("1");
      else
	printf("0");
    }
}

int main (int argc, char *argv[])
{
  uint32_t num;
  uint32_t i;
  #if 0
  for (i = 0; i <= 31; i++)
  {
      num = 1 << i;
      //printf("%u\n", num);
      print_bin(num);
      printf("\n");
  }
  #endif
  num = (1 << 31) + 1;
  print_bin(num);
  printf("\n");
  if (isPalindrome(num) < 0)
	printf("%u binary rep is not a palindrome\n", num);
  else
	printf("%u binary rep is a palindrome\n", num);
} 
