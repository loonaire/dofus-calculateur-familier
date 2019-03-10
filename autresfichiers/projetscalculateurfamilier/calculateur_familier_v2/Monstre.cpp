#include "Monstre.hpp"

Monstre::Monstre() : nomMonstre(" ") , nbMonstrePalier(0) , nbMonstreTuer(0) , nbMonstreSalle(0)
{
}

Monstre::Monstre(Monstre const& monstre) : nomMonstre(monstre.nomMonstre) , nbMonstrePalier(monstre.nbMonstrePalier) , nbMonstreTuer(monstre.nbMonstreTuer) , nbMonstreSalle(monstre.nbMonstreSalle) 
{
}

Monstre::Monstre(std::string nomMonstre,int nbMonstrePalier, int nbMonstreTuer) : nomMonstre(nomMonstre) , nbMonstrePalier(nbMonstrePalier) , nbMonstreTuer(nbMonstreTuer), nbMonstreSalle(5)
{
	for(unsigned int i = 0;i<nbMonstreSalle.size();i++){
		nbMonstreSalle[i] =0;
	}
}

Monstre::Monstre(std::string nomMonstre,int nbMonstrePalier, int nbMonstreTuer, std::vector<int> tabMonstre) : nomMonstre(nomMonstre) , nbMonstrePalier(nbMonstrePalier) , nbMonstreTuer(nbMonstreTuer), nbMonstreSalle(5)
{
	nbMonstreSalle = tabMonstre;
}

Monstre::~Monstre()
{
}

std::string Monstre::getNomMonstre() const
{
	return this->nomMonstre;
}

void Monstre::setNomMonstre(std::string const nom)
{
	this->nomMonstre = nom;
}

int Monstre::getNbMonstrePalier() const
{
	return this->nbMonstrePalier;
}

void Monstre::setNbMonstrePalier(int const nbMonstrePalier)
{
	this->nbMonstrePalier = nbMonstrePalier;
}

int Monstre::getNbMonstreTuer() const
{
	return this->nbMonstreTuer;
}

void Monstre::setNbMonstreTuer(int const nbMonstreTuer)
{
	this->nbMonstreTuer = nbMonstreTuer;
}

std::vector<int> Monstre::getNbMonstreSalle() const
{
	return this->nbMonstreSalle;
}

void Monstre::setNbMonstreSalle(std::vector<int> const& tab)
{
	for(int i = 0;i<5;i++)
	{
		this->nbMonstreSalle[i] = tab[i];
	}
}

void Monstre::setEltNbMonstreSalle(int const valeur, int const pos)
{
	//modifie la valeur du tableau de nombre de monstre dans les salles, sert a l'edition
	if(pos > 0 && pos < 5){	
		this->nbMonstreSalle[pos] = valeur;
	}
}

std::ostream& operator << (std::ostream& sortie,Monstre const& monstre)
{
	sortie << "Nom du monstre: " << monstre.getNomMonstre() << "\n Nombre de monstre a tuer pour le bonus: " << monstre.getNbMonstrePalier() << "\n Nombre de monstre tué:" << monstre.getNbMonstreTuer() << std::endl;
        for(int i = 0; i<5;i++){
		sortie << "\n Nombre de monstre dans la salle " << i << ": " << monstre.getNbMonstreSalle()[i] << std::endl;
	}
	return sortie;	
}

std::istream& operator >> (std::istream& entree, Monstre& monstre){
	// saisie des caractéristiques d'un monstre	
	std::cout << "Saisir le nom du monstre:" << std::endl;
	entree.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	
	getline(entree,monstre.nomMonstre);
	std::cout << "indiquer le nombre de monstre tué par le familier:" << std::endl;
	entree >> monstre.nbMonstreTuer;
	std::cout << "Saisir le nombre de monstre a tuer pour 1 palier:" << std::endl;
	entree >> monstre.nbMonstrePalier;
	for(unsigned int j=0;j<5;j++){
		std::cout << "nombre de monstre dans la salle " << j+1 << std::endl;
		entree >> monstre.nbMonstreSalle[j];
	}
	std::cout << std::endl;
	return entree;
}	

void Monstre::ajouteUnDonjon(){
	unsigned int i = 0;
	for(i=0;i<nbMonstreSalle.size();i++){
		this->nbMonstreTuer += this->nbMonstreSalle[i];
	}
}
	
