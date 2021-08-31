#include "ludotheque.h"
#include <stdio.h>
#include<stdlib.h>

typedef struct Adherent
{
	char nomPrenom[256];
	char genre[10];
	int id;
};

FILE *fic = fopen("Adherents.txt","r");
FILE *flot = fopen("Jeux.txt","r");

//-----------------1ere fonctionnalité dans le menu-------------------------
//TODO savoir lire la date d'un fichier + Probleme d'ouverture fichier 
void affichageAdherents(FILE *fic){
	printf("Je suis dans affichageAdherents");
	char nomPrenom[256], genre[25];
	int date, id;
	if(fic==NULL){
		printf("Erreur lors de l'ouverture du fichier adherents.txt en mode lecture");
		exit(1);
	}
	fscanf(fic,"%s %d %s %d",nomPrenom,&date,genre,id);
	printf("Le nom prenom : %s la date de naissance: %d le genre : %s et l'ID : %d ", nomPrenom, date, genre,id);
	while(!feof(fic)){
		printf("Le nom prenom : %s la date de naissance: %d le genre : %s et l'ID : %d ", nomPrenom, date, genre,id);
		fscanf(f,"%s %d %s %d",nomPrenom,&date,genre,id);
	}
	fclose(fic);
}


void inscriptionAdherent(Adherent * a, FILE *fic){
	char nomPrenom[256];
	char genre[10];
	printf("Donnez votre nom + prenom svp : \n");
	fgets(nomPrenom,256,stdin);
	strcpy(a->nomPrenom, nomPrenom);
	printf("Quel est votre genre : (homme/femme) \n");
	scanf("%s", genre);
	strcpy(a->genre, genre);
	//TODO : faire id+1 par rapport au dernier Id du fichier adherent.txt ou faire un random qui existe pas déjà
	//a->id=
	fprintf();
}

//TODO 1ere verif : le prenom, si le meme -> 2eme verif : le nom, si le meme -> 3 eme verif : la dateNaissance
void verificationAdherent(void){
	char nomPrenom[256];
	printf("Donnez moi votre nom et prenom : \n");
	fgets(nomPrenom,256, stdin);
	printf("Votre nom est bien : %s \n",nomPrenom);
}


//-----------------2eme fonctionnalité dans le menu-------------------------
//TODO Aligner lors de l'affichage 
void affichageJeux(FILE *flot){
	char nomJeu[256], typeJeu[256];
	char type[50];
	int exemplaire;
	if(flot==NULL){
		printf("Erreur lors de l'ouverture du fichier Jeux.txt en lecture ");
		exit(1);
	}
	printf("Nom du jeu \t \t Type du jeu \t \t Exemplaire restants \n \n");
	fscanf(flot, "%s %s %d", nomJeu, typeJeu, &exemplaire);
	while(!feof(flot)){
		printf("%s \t \t %s \t \t \t %d \n \n", nomJeu, typeJeu, exemplaire);
		fscanf(flot, "%s %s %d", nomJeu, typeJeu, &exemplaire);
	}
	fclose(flot);
}

