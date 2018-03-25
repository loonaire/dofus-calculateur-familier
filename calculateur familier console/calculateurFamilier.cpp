#include "calculateurFamilier.h"

calculateurFamilier::calculateurFamilier(int bonusMax, int nbPointParPalier){
	bonusMaxFamilier = bonusMax;
	nombrePointParPalier = nbPointParPalier;
}

calculateurFamilier::~calculateurFamilier(){}
	
// getMonstre recupère toutes les infos du monstre saisie dans le main puis les ajoutes au tableau de monstre
void calculateurFamilier::getMonstre(std::string nom,int nbMonstreParPalier, int nbMonstreTuer, int nbMonstreParSalle[]){	
	monstre monstreSaisi;
	monstreSaisi.nomMonstre = nom;
	monstreSaisi.nombreMonstreParPalier = nbMonstreParPalier;
	monstreSaisi.nombreMonstreTuer = nbMonstreTuer;
	int i=0;
	for(i = 0;i<5;i++){
		monstreSaisi.nombreMonstreSalle[i] = nbMonstreParSalle[i];
	}
	tabMonstre.push_back(monstreSaisi);
}	
										  
void calculateurFamilier::calculNombreDonjon(){
	int bonusFamilier = 0;
	unsigned int i = 0,j = 0;
	int nombreDonjon = 0;
	while(bonusFamilier < bonusMaxFamilier){ // tq le fami n'as pas le maximum de point on continue d'incrémenter le compteur de monstre tué
		// pour chaque salle ( de 0 a 4 (5salles) on parcours les tableau des mosntres et on incrémente le compteur de monstre tué
		for(i=0;i<5;i++){
			for(j=0;j<tabMonstre.size();j++){
				tabMonstre[j].nombreMonstreTuer += tabMonstre[j].nombreMonstreSalle[i];				
			}
		}
		bonusFamilier = 0; // reinitialise le bonus a 0 ca la méthode utilisée recompte tout les bonus a chaque fois
		for(i=0;i<tabMonstre.size();i++){
			bonusFamilier += ((tabMonstre[i].nombreMonstreTuer/tabMonstre[i].nombreMonstreParPalier)*nombrePointParPalier);
		}
		nombreDonjon++;
		// affichage
		std::cout << std::endl << "Nombre de donjons: " << nombreDonjon << std::endl;
		std::cout << "Bonus du familier: " << bonusFamilier << std::endl;
		for(i=0;i<tabMonstre.size();i++){
			std::cout << "Nombre de " << tabMonstre[i].nomMonstre << " tué: " << tabMonstre[i].nombreMonstreTuer << std::endl;
		}		
	}
}
