#include<iostream>
#include<stdlib.h>
using namespace std;

class Primos{
	private: 
		int i, primo1, divisor;
		
	public: 
		void inicializar();
		void calcular();
		void imprimir();
};

void Primos::inicializar(){
	cout <<"|	"<<endl;
	cout <<"|	Escribe un numero y te dire si es primo: ";
	cin >>primo1;
}

void Primos::calcular(){
	divisor=0;
	for(i=1;i<=primo1;i++){
		if(primo1%i==0){
			divisor++;
		}
	}
}

void Primos::imprimir(){
	cout <<"|	"<<endl;
	cout <<"|	El numero : "<<primo1<<endl;
	if(divisor==2){
		cout <<"|	"<<endl;
		cout <<"|	"<<endl;
		cout <<"|	******* ES PRIMO *******"<<endl;
		cout <<"|	"<<endl;
		cout <<"|	"<<endl;
	}
	else{
		cout <<"|	"<<endl;
		cout <<"|	"<<endl;
		cout <<"|	*******NO ES PRIMO *******"<<endl;
		cout <<"|	"<<endl;
		cout <<"|	"<<endl;
	}
}

int main(){
	Primos _p;
	_p.inicializar();
	_p.calcular();
	_p.imprimir();
	return 0;
}



