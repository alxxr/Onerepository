/*# include <iostream>

using namespace std;

class persona {
	private:
		char nombre[40];
		int edad;
    public:
    	void inicializar ();
    	void imprimir ();
    	void esMayorEdad ();
		
};

void persona::inicializar(){
	
	cout <<"Ingrese nombre: ";
	cin.getline(nombre,40);
	cout <<"ingrese edad: ";
	cin >>edad;
}
void persona::imprimir()
{
	cout <<"Nombre: ";
	cout <<nombre;
	cout <<"\n";
	cout <<"Edad: ";
	cout <<edad;
	cout <<"\n";
}

void persona::esMayorEdad()
{
	if (edad>=18){
		
		cout<< "Es Mayor de edad.";
	
	}
	else
	{
		cout <<"No es mayor de edad.";
	}
	cin.get();
	cin.get();
}
int main()
{
	persona persona1;
	persona1.inicializar();
	persona1.imprimir();
	persona1.esMayorEdad();
	persona persona2;
	persona2.inicializar();
	persona2.imprimir();
	persona2.esMayorEdad();
}*/


# include <iostream>

using namespace std;

class Cuadrado
{
	private:
	    int lado;
	public:
		void inicializar();
    	void imprimirPerimetro();
    	void imprimirSuperficie(); 
};

void Cuadrado::inicializar()
{
	cout <<"Ingrese el perimetro: ";
	cin >>lado;
}
void Cuadrado::imprimirPerimetro()
{
	int perimetro;
	perimetro=lado*4;
	cout <<"El perimetro es: ";
	cout <<perimetro;
	cout <<"\n";
}
void Cuadrado::imprimirSuperficie()
{
	int superficie;
	superficie=lado*lado;
	cout <<"La superficie es: ";
	cout <<superficie;
}
int main()
{
	Cuadrado Cuadrado1;
	Cuadrado1.inicializar();
	Cuadrado1.imprimirPerimetro();
	Cuadrado1.imprimirSuperficie();
	return 0;
}




