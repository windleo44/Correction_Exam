#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  if(argc > 2)
    {
      int i;
      int status = 0;
      for( i = (argc - 1); i >=2  ; i--)
	{
	  if (atoi(argv[i]) >= atoi(argv[i-1]))
	    status++;
	  else
	    status--;
	}
      if(status == (argc - 2))
	printf("increasing\n");
      else if (status == -(argc - 2))
      	printf("decreasing\n");
      else
	printf("unsorted \n");
    }
  else {
    printf("unsorted \n");
  }
  
  return 0;
}
