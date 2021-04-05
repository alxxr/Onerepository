/*#include <iostream>

using namespace std;

int main()
{
	int notas[2][10]=
	{
		{1,2,3,4,5,6,7,8,9,10},
		{11,12,13,14,15,16,17,18,19,20}
	};
	
	cout<<"la calificacion del 3er alumno del grupo 1 es: "<<notas[0][2];
}*/

/*#include <iostream>

using namespace std;

int main()
{
	const int TAM=3;
	int matriz[TAM][TAM]
	
	for(int i=0; i<TAM; i++)
	{
		for(int j=0; j<TAM; j++)
		{
			cout<<"Ingrese el elemento ["<<i<<","<<j<<"]";
			cin>>matriz[i][j];
		}
	}
}*/

/*#include <iostream>

using namespace std;

int main()
{
	int fil,col;
	cout<<"Dimensione la matriz: ";
	cin>>fil>>col;
	
	int matriz [fil][col];
	
	for(int i=1; i<= fil; i++)
	{
		for(int j=1; j<= col; j++)
		{
			cout<<i<<j<<"\t";
		}
		cout<<endl;
	}
	return 0;
}*/

/*#include <iostream>

using namespace std;

const int MaxDimensiones=2;

int main()
{
	int v[][MaxDimensiones]={1,2,3,4};
	
	for(int i=0; i<MaxDimensiones; i++)
	{
		for(int j=0; j<MaxDimensiones; j++)
		{
			cout<<v[i][j]<<endl;
		}
	}
}*/

/*#include <iostream>

using namespace std;

const int MaxDimensiones=2;

int main()
{
	int edad[3][2]={{1,2},{3,4},{5,6}};
	int filas=(sizeof(edad)/sizeof(edad[0]));
	int columnas=(sizeof(edad)/sizeof(edad[0][0]));
	
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			cout<<edad[i][j]<<endl;
		}
	}
}*/

#include <iostream>

using namespace std;

int main()
{
	string libros[5][2];
	cout<<"Ingrese la siguiente informacion, sobre libros: "<<endl;
	string titulo, autor;
	
	for(int i=0; i<5; i++)
	{
		cout<<"\n *******LIBRO   "<<i+1<< "************:\n";
		cout<<"Titulo: ";
		getline(cin,titulo);
		cout<<"Autor: ";
		getline(cin,autor);
		libros[i][0]= titulo;
		libros[i][1]= autor;
	}
}
















































