#include <stdio.h>

char* strrev(char *str);
int str_len (char *str);

int main (int argc, char *argv[])
{

  char str1[] = "Test string";
  //printf("Enter string to be reversed:");
  printf("Original String: %s\n",str1); 
  printf("Reversed String: %s\n",strrev(str1));
}

char* strrev(char *str)
{

  int len = str_len(str);
  int last  = len - 1;
  int i;
  for (i = 0; i < len/2; i++)
  {
    char c = str[i];
    str[i] = str[last -i];
    str[last-i] = c;
  }
  return str;
}

int str_len(char *str)
{
  int len = 0;
  while (*(str + len) != '\0') 
    len++;
  return len;
}
