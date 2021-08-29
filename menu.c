#include "ludotheque.h"
#include <stdio.h>
#include<stdlib.h>

void choixMenu(void){
	int choix;
	printf("\n \n Choississez une fct du menu affiche : ");
	scanf("%d",&choix);
	while(choix<1 || choix>2){
		printf("Veuillez resaisir un chiffre du menu svp : \n ");
		scanf("%d",&choix);
	}
	switch(choix){
		case(1):
			affichageAdherents();
			break;
		case(2):
			affichageJeux();
			break;
	}
}

void affichageMenu(void){
	system("cls");
	printf("\n \n \n  \t \t \t 1.Affichage des adhérents \n \t \t \t 2.Affichage des jeux \n");
}


