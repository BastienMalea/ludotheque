#include "ludotheque.h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h>


//-----------------1ere fonctionnalité dans le menu-------------------------
//TODO savoir lire la date d'un fichier + Probleme d'ouverture fichier 
void affichageAdherents(void){
	FILE *fic = fopen("Adherents.txt","r");
	if(fic==NULL){
		printf("Erreur lors de l'ouverture du fichier adherents.txt en mode lecture");
		exit(1);
	}
	printf("Je suis dans affichageAdherents");
	char nomPrenom[256], genre[25];
	int id;
	fscanf(fic,"%s %s %d",nomPrenom,genre,id);
	printf("Le nom prenom : %s le genre : %s et l'ID : %d ", nomPrenom,genre,id);
	while(!feof(fic)){
		printf("Le nom prenom : %s le genre : %s et l'ID : %d ", nomPrenom, genre,id);
		fscanf(fic,"%s %s %d",nomPrenom,genre,id);
	}
	fclose(fic);
}


void inscriptionAdherent(void){
	FILE *fic = fopen("Adherents.txt","r");
	if(fic==NULL){
		printf("Erreur lors de l'ouverture du fichier adherents.txt en mode lecture");
		exit(1);
	}
	Adherent *a=NULL;
	int id;
	char nomPrenom[256];
	char genre[25];
	printf("Donnez moi votre nom et prenom : \n");
	fgets(nomPrenom,256, stdin);
	printf("Votre nom est bien : %s \n",nomPrenom);
	printf("Quel est votre genre : (homme/femme) \n");
	scanf("%s",genre);
	printf("Quel est votre genre : %s \n",genre);
	fscanf(fic,"%s %s %d",nomPrenom,genre,&id);
	while(!feof(fic)){
		printf("Le nom prenom : %s le genre : %s et l'ID : %d ", nomPrenom, genre,id);
		fscanf(fic,"%s %s %d",nomPrenom,genre,&id);
	}
	a->id+=id;
	printf("Votre id a bien conserver : %d \n", a->id);

	fclose(fic);
	
}

//TODO 1ere verif : le prenom, si le meme -> 2eme verif : le nom, si le meme -> 3 eme verif : la dateNaissance
void verificationAdherent(void){
	char nomPrenom[256];
	char genre[25];
	printf("Donnez moi votre nom et prenom : \n");
	fgets(nomPrenom,256, stdin);
	printf("Votre nom est bien : %s \n",nomPrenom);
	printf("Quel est votre genre : (homme/femme) \n");
	scanf("%s",genre);
	printf("Quel est votre genre : %s \n",genre);
}


//-----------------2eme fonctionnalité dans le menu-------------------------
//TODO Aligner lors de l'affichage 
void affichageJeux(void){
	FILE *flot = fopen("Jeux.txt","r");
	if(flot==NULL){
		printf("Erreur lors de l'ouverture du fichier Jeux.txt en lecture ");
		exit(1);
	}
	char nomJeu[256], typeJeu[256];
	char type[50];
	int exemplaire;
	printf("Nom du jeu \t \t Type du jeu \t \t Exemplaire restants \n \n");
	fscanf(flot, "%s %s %d", nomJeu, typeJeu, &exemplaire);
	while(!feof(flot)){
		printf("%s \t \t %s \t \t \t %d \n \n", nomJeu, typeJeu, exemplaire);
		fscanf(flot, "%s %s %d", nomJeu, typeJeu, &exemplaire);
	}
	fclose(flot);
}

