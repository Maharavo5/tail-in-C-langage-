#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"
#include <string.h>

void ouvrir(FILE **f,char *fichier){
	*f=fopen(fichier,"r");
	if (*f==NULL){
		printf ("error!!");
		exit (1);
	}
}

int compteur (FILE *f,char* chaine,int n){
	int nbr_ligne=1;
	while(feof(f)!=1){
		fgets(chaine,100,f);
		nbr_ligne++;
	}
	nbr_ligne=nbr_ligne-n;
	fclose(f);
	return nbr_ligne;
}

int cast (char *arg){
	int n;
	n=atoi(arg);
	return n;
}

void tail(FILE *f,int nbr_ligne,char *chaine){
	int a=1;
	while (feof(f)!=1){
		fgets(chaine,100,f);
		a++;
		if (a>=nbr_ligne){
			printf("%s",chaine);
		}
	}
	fclose(f);
}

void option(FILE *f,char *opt,char *fichier){
	char mot[2]="-v";
	if (strcmp(mot,opt)==0){
		printf("\n==>%s<==\n",fichier);
	}
}
