/*#include<iostream>

using namespace std;

int main ()
{
	char mes1[20]="enero";
	char mes2[20]="febrero";
	cout<<mes1;
	cout<<"\n";
	cout<<mes2;
	return 0;
}*/

/*#include<iostream>

using namespace std;

int main ()
{
	char nombre[40];
	cout<<"ingrese su nombre: ";
	cin.getline(nombre,40);
	cout<<"El nombre ingresado es: ";
	cout<<nombre;
	return 0;
}*/

/*#include<iostream>
#include <cstring>
using namespace std;

int main ()
{
	char cadena1[50];
	char cadena2[50];
	cout<<"ingrese cadena 1: ";
	cin.getline(cadena1,50);
	cout<<"ingrese cadena 2: ";
	cin.getline(cadena2,50); //cin.gentline => toma los valores
	
	if(strcmp(cadena1,cadena2)<0) // strcmp => compara
	{
		cout<<"La primera cadena ingresada es mayor alfabeticamente";
	}
	else
	{
		cout<<"La priemra cadena ingresada es menor alfabeticamente";
	}
	return 0;
}*/

/*#include<iostream>
#include <cstring>

using namespace std;

int main ()
{
	int edades[]={1,2,9,8,16,32,9,50,36,20,1,87};
	int limite=(sizeof(edades)/sizeof(edades[0]));
	
	for(int i=0;i<limite;i++)
	{
		cout<<edades[i]<<endl;			
	}
	
}*/

#include<iostream>
#include <cstring>
using namespace std;

int main ()
{
	string titulo[5];
	string autores[5];
	
	cout<<"Ingrese la informacion de los libros: "<<endl;
	
	for(int i=0; i<5; i++)
	{
		cout<<"\n*********libro " <<i+1<<"*******:\n";
		cout<<"TITULO: ";
		cin>>titulo[i];
		cout<<"Autor: ";
		cin>>autores[i];
	}
}



















































