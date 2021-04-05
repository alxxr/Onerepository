/*Confeccionar una clase que represente un empleado. Definir como 
atributos su nombre, apellido, edad, cargo y su sueldo. Confeccionar
los métodos para la carga, otro para imprimir sus datos y por último 
uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)*/

# include <iostream>

using namespace std;

class empleado
{
	private:
		char nombre[40];
		char apellido[40];
		char cargo[40];
		int sueldo;
		int edad;
		
    public:
    	void inicializar ();
    	void imprimirDatos ();
    	void imprimeImpuesto ();
	
};

void empleado::inicializar(){
	
	cout <<"Ingrese nombre: ";
	cin.getline(nombre,40);
	cout <<"Ingrese apellido: ";
	cin.getline(apellido,40);
	cout <<"Ingrese cargo: ";
	cin.getline(cargo,40);
	cout <<"Ingrese sueldo: ";
	cin >>sueldo;
	cout <<"Ingrese edad: ";
	cin >>edad;
}
void empleado::imprimirDatos()
{
	cout <<"Nombre: ";
	cout <<nombre;
	cout <<"\n";
	cout <<"Apellido: ";
	cout <<apellido;
	cout <<"\n";
	cout <<"Cargo: ";
	cout <<cargo;
	cout <<"\n";
	cout <<"Sueldo: ";
	cout <<sueldo;
	cout <<"\n";
	cout <<"Edad: ";
	cout <<edad;
	cout <<"\n";
}

void empleado::imprimeImpuesto()
{
	if(sueldo>3000)
	{
		cout <<"El Empleado debe pagar impuesto.";
	}
    else
	{
		 cout <<"El Empleado no debe pagar impuesto.";
	}
	cin.get();
	cin.get();
    
}
int main()
{
	empleado empleado1;
	empleado1.inicializar();
	empleado1.imprimirDatos();
	empleado1.imprimeImpuesto();
	return 0;
}
	
	
