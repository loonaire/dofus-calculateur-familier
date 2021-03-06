#include <iostream>
#include "CalculateurFamilier.hpp"
#include "Monstre.hpp"
#include <string>
#include <vector>

#define OSwindows 1
#if OSwindows
#include <windows.h>
#endif

using namespace std;

int main()
{
	// gestion des accents
	#if OSwindows
		SetConsoleOutputCP(CP_UTF8);
	#endif

	
	vector<int> tab(5,1);
	/*
	int saisie = 0;
	try{
	cout << "Saisir le nombre monstre par palier:" << endl;
        cin >> saisie;
	throw saisie;
	}
       	catch(int const& saisie){
	 cout << "erreur de saise" << saisie << endl;
 	 throw; 	 
	}
	*/
	Monstre monstre1();
	cin >> monstre1;
#if 0
	Monstre monstre("essai",0,0,tab);
	monstre.setNbMonstrePalier(10);
	cout << monstre;	

	CalculateurFamilier calculateur(10,100);
	calculateur.ajoutMonstre(monstre);
	calculateur.calcul();
#endif
	cout << "Terminer" << endl;	
	

	// mise en pause
	std::cout << std::endl << "Appuyer sur une touche pour quitter" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}


