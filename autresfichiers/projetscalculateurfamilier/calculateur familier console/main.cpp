#include "calculateurFamilier.h"
#include <windows.h>
#include <limits> //utilisé pour vider le buffer de cin

#define OSwindows 1

int main(){	
	// gestion des accents
	#if OSwindows
	SetConsoleOutputCP(CP_UTF8);
	#endif
	
	int bonusMaxFamilier = 0, nombreDeMonstres = 0, nombrePointParPalier = 0;
	int i = 0, j = 0, nombreTuer = 0, nombrePalier = 0, nbMonstreSalle = 0;
	int tabnbMonstreSalle[5];
	std::string nom = "";
	
	std::cout << "Indiquer la valeur maximale du familier:" << std::endl;
	std::cin >> bonusMaxFamilier;
	std::cout << "Indiquer le nombre de monstres différents:" << std::endl;
	std::cin >> nombreDeMonstres;
	std::cout << "Indiquer le nombre de point de caractéristique gagné par palier de monstre tué: (+1/+10)" << std::endl;
	std::cin >> nombrePointParPalier;
	std::cout << std::endl;	
	calculateurFamilier calc(bonusMaxFamilier,nombrePointParPalier);
	for(i=0;i<nombreDeMonstres;i++){
		// saisie des caractéristiques d'un monstre
		std::cout << "Monstre " << i+1 << ":" << std::endl;
		std::cout << "Saisir le nom du monstre:" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	
		getline(std::cin,nom);
		std::cout << "indiquer le nombre de monstre tué par le familier:" << std::endl;
		std::cin >> nombreTuer;
		std::cout << "Saisir le nombre de monstre a tuer pour 1 palier:" << std::endl;
		std::cin >> nombrePalier;
		for(j=0;j<5;j++){
			std::cout << "nombre de monstre dans la salle " << j+1 << std::endl;
			std::cin >> nbMonstreSalle;
			tabnbMonstreSalle[j] = nbMonstreSalle;
		}
		std::cout << std::endl;
		calc.addMonstre(nom,nombrePalier,nombreTuer,tabnbMonstreSalle);
	}
	
	calc.calculNombreDonjon();	
	
	// mise en pause
	std::cout << std::endl << "Appuyer sur une touche pour quitter" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
	
}
