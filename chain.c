#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bidule{
  int indice;
  char *mot;
  struct bidule *suivant;
};


int main(int argc, char *argv[]){
  struct bidule *head = NULL;
  struct bidule *tail = NULL;
  
  if(argc > 1){
    for(int i = 1 ; i < argc ; i++)
      {
	struct bidule *el = malloc(sizeof(struct bidule));
	el->indice = i-1;
	el->mot = malloc(sizeof(strlen(argv[i])));
	strcpy(el->mot,argv[i]);
	el->suivant = NULL;

	if (1 == i)
	  head = tail = el;
	else {
	  tail->suivant = el;
	  tail = el;
	}
      }

    for(int i = 0 ; i < argc -1 ; i++)
      {
	fprintf(stdout,"indice :%i | str: %s\n",head->indice,head->mot);
	head = head->suivant;
      }
  }  
  exit(EXIT_SUCCESS);
}
