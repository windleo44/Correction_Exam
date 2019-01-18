#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float sum = 0.0;
  while(*++argv)
      sum += atof(*argv);

  sum /= (float)(argc -1);

  fprintf(stdout,"moyenne : %f\n",sum);
  
  return 0;
}
