#include <iostream>

using namespace std;

int main(){
	int bonusFamillier = 0, bitoufFami = 0, craqueleurFami = 0, craquebouleFami = 0, kidoFami = 0, kilibrissFami = 0, mufafahFami = 0, rasboulFami=0;
	int cptDj = 0;

	
	while(bonusFamillier < 90){
		//if(bonusFamillier<440){
		// salle 1: 1 x Kilibriss Niveau 52 // 2 x Craqueleur Poli Niveau 50 //1 x Craqueboule Poli Niveau 40
		kilibrissFami++;craqueleurFami++;craqueleurFami++;craquebouleFami++;
			
		//salle 2: 1 x Mufafah Niveau 66 // 1 x Kilibriss Niveau 63 // 1 x Craqueleur Poli Niveau 60 // 1 x Craqueboule Poli Niveau 43
		mufafahFami++;kilibrissFami++;craqueleurFami++;craquebouleFami++;
					
		// salle 3: 1 x Kido Niveau 71 // 1 x Bitouf des Plaines Niveau 70 // 1 x Craqueleur Poli Niveau 70 // 1 x Craqueboule Poli Niveau 46
		kidoFami++;bitoufFami++;craqueleurFami++;craquebouleFami++;
			
		//salle 4: 1 x Kilibriss Niveau 81 // 1 x Kido Niveau 80 // 1 x Bitouf des Plaines Niveau 80 // 1 x Mufafah Niveau 74
		kilibrissFami++;kidoFami++;bitoufFami++;mufafahFami++;
			
		//salle 5: 1 x Silf le Rasboul Majeur Niveau 440 // 1 x Kilibriss Niveau 90 // 1 x Bitouf des Plaines Niveau 90 // 1 x Kido Niveau 89
		rasboulFami++;kilibrissFami++;bitoufFami++;kidoFami++;
			
		cptDj++;
			
		bonusFamillier = ((bitoufFami/20)*1) + ((craqueleurFami/20)*1) + ((craquebouleFami/20)*1) + ((kidoFami /20)*1) + ((kilibrissFami /20)*1) + ((mufafahFami/20)*1) + (rasboulFami*1);
		
		cout << "donjon n°"<< cptDj << endl;
		cout << bonusFamillier << endl;		
		cout << "nombre de bitouf des plaines:" << bitoufFami << endl;
		cout << "nombre de craqueleur poli:" << craqueleurFami <<endl;
		cout << "nombre de craqueboule poli:" << craquebouleFami <<endl;
		cout << "nombre de kido:" << kidoFami<<endl;
		cout << "nombre de kilibriss:" << kilibrissFami << endl;
		cout << "nombre de mufafah:" << mufafahFami << endl;				
		cout << "nombre de rasboul:"	 << rasboulFami << "\n" << endl;
	//}
	}
	
		cout << "donjon n°"<< cptDj << endl;
		cout << bonusFamillier << endl;		
		cout << "nombre de bitouf des plaines:" << bitoufFami << endl;
		cout << "nombre de craqueleur poli:" << craqueleurFami <<endl;
		cout << "nombre de craqueboule poli:" << craquebouleFami <<endl;
		cout << "nombre de kido:" << kidoFami<<endl;
		cout << "nombre de kilibriss:" << kilibrissFami << endl;
		cout << "nombre de mufafah:" << mufafahFami << endl;				
		cout << "nombre de rasboul:"	 << rasboulFami << "\n" << endl;

	return 0;
}
