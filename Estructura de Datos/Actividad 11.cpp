#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

class Productos{
	private: 
		int n;
		int x;
		int aleatorio[];
		
	public: 
		void inicializar();
		void llenar();
		void mostrar();
};

void Productos::inicializar(){
	cout <<"|	"<<endl;
	cout <<"|	Ingrese el dimension que desea el arreglo: ";
	cin >>n;
	cout <<"|	"<<endl;
	int aleatorio[n];
}

void Productos::llenar(){
	for(int i=0;i<n;i++){
		cout <<"|	"<<endl;
		cout <<"|	Ingrese el "<<i+1<<"dato: ";
		cin >>x;
		aleatorio[i] = x;
	}
}

void Productos::mostrar(){
	cout <<"|	Ejecutando Arreglo "<<endl;
	cout <<"|	"<<endl;
	for(int i=0;i<n;i++){
		cout <<"|	";
		cout <<aleatorio[i];
		for (int j=0;j<aleatorio[i];j++){
			cout <<"*";
		}
		cout <<endl;
	}
	cout <<"|	"<<endl;
	cout <<"Kevin Alexander Lesmes Rosas -  96026";
	/*cin >>x;*/
}

int main(){
	/*srand(time(NULL));*/
	Productos _Productos;
	_Productos.inicializar();
	_Productos.llenar();
	_Productos.mostrar();
	return 0;
}
