/*Construya la clase operaciones. Se deben cargar dos valores 
enteros, calcular su suma, resta, multiplicación y división, 
cada una en un método, imprimir dichos resultados*/

# include <iostream>

using namespace std;

class operaciones {
	private:
		int n1, n2, suma, resta, multiplicacion, division;
    public:
    	void inicializar ();
    	void imprimirSuma ();
    	void imprimirResta ();
    	void imprimirMultiplicacion ();
    	void imprimirDivision ();
		
};

void operaciones::inicializar()
{
	
	cout <<"Ingrese el primero valor: ";
	cin >> n1;
	cout <<"Ingrese el segundo valor: ";
	cin >>n2;
}
void operaciones::imprimirSuma()
{
	int suma;
	suma = n1 + n2;
	cout << "La suma es: ";
	cout << suma;
	cout <<"\n";
}
void operaciones::imprimirResta()
{
	int resta;
	resta = n1 - n2;
	cout << "La resta es: ";
	cout << resta;
	cout <<"\n";
}
void operaciones::imprimirMultiplicacion()
{
	int multiplicacion;
	multiplicacion = n1 * n2;
	cout << "La multiplicacion es: ";
	cout << multiplicacion;
	cout <<"\n";
}
void operaciones::imprimirDivision()
{
	int division;
	division = n1 / n2;
	cout << "La division es: ";
	cout << division;
	cout <<"\n";
}
int main()
{
	operaciones operaciones1;
	operaciones1.inicializar();
	operaciones1.imprimirSuma();
	operaciones1.imprimirResta();
	operaciones1.imprimirMultiplicacion();
	operaciones1.imprimirDivision();
	return 0;
}

