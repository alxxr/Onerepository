#include <iostream>

using namespace std;

class Edades {
	private:
		char nombres[5][40];
		int edades[5];
	public:
	    void cargar();
		void mayoriaEdad();	
};
void Edades::cargar()
{
	for(int f=0; f < 5; f++)
	{
		cout <<"Ingrese el nombre:";
		cin.getline(nombres[f],40);
		cout <<"Ingrese la edad:";
		cin >>edades[f];
		cin.get();
	}
}
void Edades::mayoriaEdad()
{
	cout <<"Personas mayores de edad."<<endl;
	for(int f=0; f < 5; f++)
	{
		if(edades[f] >= 18)
		{
			cout <<nombres[f]<<endl;
		}
	}
}

int main()
{
	Edades per;
	per.cargar();
	per.mayoriaEdad();
	return 0;
}









