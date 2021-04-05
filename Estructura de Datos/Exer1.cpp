/*Desarrolle un programa con una clase que represente un punto 
en el plano y tenga los siguientes métodos: cargar los valores 
de x e y, imprimir en que cuadrante se encuentra dicho punto 
(concepto matemático, primer cuadrante si x e y son positivas, 
si x<0 e y>0 segundo cuadrante, etc.)*/

# include <iostream>

using namespace std;

class Punto
{
	private:
	    int x;
		int y;
	public:
		void inicializar();
    	void imprimirCuadrante1();
    	void imprimirCuadrante2(); 
};

void Punto::inicializar()
{
	cout <<"Ingrese Coordenada en x: ";
	cin >>x;
	cout <<"Ingrese Coordenada en y: ";
	cin >>y;
}
void Punto::imprimirCuadrante1()
{
	int x;
	x = (x>0 && y>0);
	cout <<"El cuadrante 1 es: ";
	cout <<x;
	cout <<"\n";
}
void Punto::imprimirCuadrante2()
{
	int y;
	y = (x<0 && y>0);
	cout <<"El cuadrante 2 es: ";
	cout <<y;
	cout <<"\n";
}
int main()
{
	Punto Punto1;
	Punto1.inicializar();
	Punto1.imprimirCuadrante1();
	Punto1.imprimirCuadrante2();
	return 0;
}

