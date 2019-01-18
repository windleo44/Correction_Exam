#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
  if(argc > 1){
    char *str = argv[1];
    int longueur = strlen(str);
    int step = 0;
    int up = (longueur/2 + longueur%2);
    
    while(step < up){
      if(str[step] != str[longueur-step-1])
	break;
      step++;
    }
    
    if(step >= up)
      printf("%s est un palindrome\n",str);
    else
      printf("%s n'est pas un palindrome\n",str);
  }  
  return 0;
}
