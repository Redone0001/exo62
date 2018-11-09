#include <iostream>
#include <vector>
#include <random>


using namespace std;

random_device rd;
mt19937 gen(rd());
uniform_real_distribution <double> uni (0.,1.);

int main(){
	long unsigned int tailleBuffer = 1;
	int NombreEvenementBon =0;
	int NombreEvenementBonRecup =0;
do{
//variables principales
	vector <double> buffer;
	int clock=0;
	NombreEvenementBon =0;
	NombreEvenementBonRecup =0;
	
	
cout <<tailleBuffer<<")"<<endl;
	
	// boucle principale


	for(int i = 0; i<50000;i++){
		// on crée un évèmement
		double evenement = uni(gen);
		//on vérifie qu'il est utile
		if( evenement < 0.05){
			NombreEvenementBon++;
			if(buffer.size() < tailleBuffer){
				buffer.push_back(evenement);
			}
		}
		// on ajoute 1 tick dans la clock
		clock ++;
	// debug : cout<<clock<<","<<buffer.size()<<endl;
		if (clock >=8 && buffer.size()!= 0){
			buffer.pop_back();
			NombreEvenementBonRecup++;
			clock=0;
		}
	
	}
	cout <<NombreEvenementBonRecup<<"/"<<NombreEvenementBon<<endl;
	cout <<NombreEvenementBonRecup*100./NombreEvenementBon<<endl;
	
tailleBuffer++;
}while(NombreEvenementBonRecup*100./NombreEvenementBon<98);
	return 0;
}
