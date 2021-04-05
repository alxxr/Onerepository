#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
#include<cmath>


using namespace std;

class Arreglo{
	private: 
		int n;
		int a;
		int variado[];	
	public: 
		void inicializar();
		void almacenar();
		void prueba();
};

void Arreglo::inicializar()
{
	cout <<"|	"<<endl;
	cout <<"Indique el tamano que desea el arreglo: ";
	cin >>n;
	cout <<"|	"<<endl;
	int variado[n];
}  

void Arreglo::almacenar()
{
	for(int i=0;i<n;i++){
			cout <<"|	"<<endl;
			cout <<"| ingrese el"<<i+1<<"valor: ";
			cin >> a;
		variado[i] = a;
	}
}
void Arreglo::prueba()
{
	cout <<"|    Prueba arreglo  "<<endl;
	cout <<"|    "<<endl;
	for(int i=0;i<n;i++){
		cout <<"|    ";
		cout <<variado[i]<<endl;
		for(int x=0;x<variado[i];x++){
			cout <<"*";
		}
		cout <<endl;
	}
	cout <<"|   "<<endl;
	cout <<"Kevin Alexander Lesmes Rosas - 96026";
}

int main()
{   
	Arreglo arreglo1;
	arreglo1.inicializar();
	arreglo1.almacenar();
	arreglo1.prueba();
	return 0;
}
