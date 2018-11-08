#include <random>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int nombre1;
	int nombre2=0;
	int nombreGenere;
	random_device rd;                                         // Génération de nombre "vraiment" aléatoire
	mt19937 gen(rd());                                        // Initialisation avec une seed imprédictible
	uniform_int_distribution < int > uni ( 0 , 1000 );   // Initialisation de ma distribution uniforme entre 0 et 1
	nombreGenere=uni(gen);
	//cout<<uni(gen)<<endl;  
	do{ 
		cout <<"entrez un nombre ";
		cin >>nombre1;
		if(abs(nombre1-nombreGenere)>abs(nombre2-nombreGenere))
			cout<<"froid"<<endl;
		else	
			cout<<"chaud"<<endl;

		nombre2=nombre1;

	}while(nombre1!=nombreGenere);
return 0;
}

