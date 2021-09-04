// Prototype des fonctions

void choixMenu(void);

void affichageMenu(void);
void affichageJeux(void);
void affichageAdherents(void);

void verificationAdherent(void);
void inscriptionAdherent(void);



//Structure : 

typedef struct Adherent
{
	char nomPrenom[256];
	char genre[10];
	int id;
}Adherent, *Adhe;