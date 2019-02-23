#include <stdio.h>
 
int main()
{
  char ch;
 
  printf("Input a character\n");
  scanf("%c", &ch);
 
  switch(ch)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    
    case 'A':
    case 'E':    
    case 'I':
    case 'O':
    case 'U':    
      printf("%c is a vowel.\n", ch);
      //if any of the above charaters found print this
      //%c for character
      break;
    default:
      printf("%c isn't a vowel.\n", ch);
      //else this (default case)
  }              
 
  return 0;
} 
