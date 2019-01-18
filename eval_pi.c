#include <stdio.h>
#include <stdlib.h>

float pi(unsigned int n)
{
  unsigned int i;
  float res = 0.0;
  
  for(i = 0 ; i <= n ; i++)
    res += ((i%2)?(-4.0/((2.0*i)+1.0)):(4.0/((2.0*i)+1.0))); 
    
  return res;
}

int main(int argc, char *argv[])
{
  fprintf(stdout,"approx de pi : %f\n",pi(atoi(argv[1])));
  return 0;
}
