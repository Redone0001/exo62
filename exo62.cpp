#include <random>
#include <cmath>
#include <iostream>

using namespace std;

	random_device rd;                                         // Génération de nombre "vraiment" aléatoire
	mt19937 gen(rd());                                        // Initialisation avec une seed imprédictible
	uniform_real_distribution < double > uni ( 0. , 1. );   // Initialisation de ma distribution uniforme entre 0 et 1

double carre(double x);
void tirage(int& bon,int& total);

int main(){
	int bon=0;
	int total=0;
	double incertitude=0;
	double p;
	

	for(int i =0; i<100; i++){
		tirage(bon,total);
		p = bon*1./total;
		incertitude = sqrt(p*(1-p)/total);
		cout<<bon<<","<<incertitude<<","<<total<<endl;
	}
	do{
		tirage(bon,total);
		p = bon*1./total;
		incertitude = sqrt(p*(1-p)/total);
		cout<<bon<<","<<incertitude<<","<<total<<endl;
	}while (incertitude>0.01);
	cout<<bon*1./total<<" pm "<<incertitude*bon*1./total<<endl;
	
return 0;
}
double carre(double x){
	return x*x;
}
void tirage(int& bon,int& total){
	//pair<double,double> point;
	double x =uni(gen);
	double y =uni(gen);
	if (carre(x)> y)
		bon ++;
	total++;
}
