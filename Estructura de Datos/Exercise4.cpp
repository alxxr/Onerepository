#include <iostream>

using namespace std;

class Ejemplo1 {

private:
	int salario[5];
	
public:
	void cargar();
	void imprimir();
};
void Ejemplo1::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		cout <<"Ingrese valor del salario:";
		cin >> salario[f];
	}
}
void Ejemplo1::imprimir()
{
	cout <<"Lista de salario."<<endl;
	for(int f = 0; f < 5; f++)
	{
		cout <<salario[f]<<endl;
	}
}
int main()
{
	Ejemplo1 ej1;
	ej1.cargar();
	ej1.imprimir();
	return 0;
}












