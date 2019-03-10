#include <iostream>

using namespace std;

int main(){
	int bonusFamillier = 0, cactoblongoFami = 0, cactifloreFami = 0, cactanaFami = 0, levitoFami = 0, pampactusFami = 0, elpikoFami = 0;
	int cptDj = 0;

	
	while(bonusFamillier < 440){
		//if(bonusFamillier<440){
		// salle 1: pampactus,cactoblongo,cactiflore,cactana
		pampactusFami++; cactoblongoFami++;cactifloreFami++;cactanaFami++;
			
		//salle 2: cactoblongo, levito, cactana, pampactus
		cactoblongoFami++;levitoFami++;cactanaFami++;pampactusFami++;
					
		// salle 3: levito, cactiflore, cactana, pampactus
		levitoFami++;cactifloreFami++;cactanaFami++;pampactusFami++;
			
		//salle 4: pampactus, cactoblongo, cactana, cactiflore
		pampactusFami++;cactoblongoFami++;cactanaFami++;cactifloreFami++;
			
		//salle 5: el-piko, cactiflore,cactoblongo,levito
		elpikoFami++;cactifloreFami++;cactoblongoFami++;levitoFami++;
			
		cptDj++;
			
		bonusFamillier = ((cactoblongoFami/10)*10) + ((cactifloreFami/10)*10) + ((cactanaFami/10)*10) + ((levitoFami /10)*10) + ((pampactusFami /10)*10) + (elpikoFami*10);
		
		cout << "donjon n°"<< cptDj << endl;
		cout << bonusFamillier << endl;		
		cout << "nombre de pampactus:" << pampactusFami << endl;
		cout << "nombre de cactoblongo:" << cactoblongoFami <<endl;
		cout << "nombre de cactiflore:" << cactifloreFami <<endl;
		cout << "nombre de cactana:" << cactanaFami <<endl;
		cout << "nombre de levito:" << levitoFami << endl;
		cout << "nombre de elpiko:"	 << elpikoFami << "\n" << endl;
	//}
	}
	
	cout << "donjon n°"<< cptDj << endl;
	cout << bonusFamillier << endl;		
	cout << "nombre de pampactus:" << pampactusFami << endl;
	cout << "nombre de cactoblongo:" << cactoblongoFami <<endl;
	cout << "nombre de cactiflore:" << cactifloreFami <<endl;
	cout << "nombre de cactana:" << cactanaFami <<endl;
	cout << "nombre de levito:" << levitoFami << endl;
	cout << "nombre de elpiko:"	 << elpikoFami << "\n" << endl;

	return 0;
}
