#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"
#include <string.h>

int main (int argc,char *argv[]){
	FILE *f=NULL;
	char chaine[100];
	int nbr_ligne;
	int n;
	option(f,argv[1],argv[3]);
	ouvrir(&f,argv[3]);
	n=cast(argv[2]);
	nbr_ligne=compteur(f,chaine,n);
	ouvrir(&f,argv[3]);
	tail(f,nbr_ligne,chaine);
	
	return 0;
}
