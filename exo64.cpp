#include <random>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

	random_device rd;                                         // Génération de nombre "vraiment" aléatoire
	mt19937 gen(rd());                                        // Initialisation avec une seed imprédictible
	uniform_real_distribution < double > uni ( 0. , 1. );   // Initialisation de ma distribution uniforme entre 0 et 1

int main(){
	vector <double> listeEvenement;
	int nombreDeBon=0;
	for(int i = 0; i< 50000;i++){
		
		double x = uni(gen);
		if(x <0.1)
			nombreDeBon ++;
		listeEvenement.push_back(x);
	}
	int taille=1
	vector <double> buffer[taille]
	for(int i = 0; i< 50000;i++){
		buffer[0]=listeEvenement.at(i);
	
	}
	return 0;
}


