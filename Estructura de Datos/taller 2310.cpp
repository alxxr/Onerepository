/*#include<iostream>

using namespace std;

int main()
{
	int edades[3][2] = {{1,2},{9,8},{14,21}};
	int filas = (sizeof(edades)/sizeof(edades[0]));
	int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout<<edades[i][j]<<endl;
		}
	}
}*/

#include<string>
#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
	string libros[5][2];
	cout<< "por favor ingrese la informacion de los libros: \n";
	string titulo, autor;
	for (int i = 0; i < 5; i++)
	{
		cout << "\n********** libro "<< i + 1 << "***********:\n";
		cout << "titulo: ";
		getline(cin, titulo);
		cout << "autor: ";
		getline(cin, autor);
		libros[i][0] = titulo;
		libros[i][1] = autor;
	}
	system("pause");
	
	return 0;
}
