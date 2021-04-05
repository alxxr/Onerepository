/*#include<iostream>

using namespace std;

class matriz1{
	private:
		int mat [3][5];
	public:
		void cargar();
		void imprimir();
};

void matriz1::cargar()
{
	for(int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 5; c++)
		{
			cout <<"ingrese componente:";
			cin >> mat[f][c];
		}
	}
}

void matriz1::imprimir()
{
	for(int f = 0; f < 3; f++)
	{
		for(int c = 0; c < 5 ; c++)
		{
			cout << mat[f][c] <<" ";
		}
		cout << "\n";;
	}
	cin.get();
	cin.get();
}

int main()
{
	matriz1 m;
	m.cargar();
	m.imprimir();
	return 0;
}*/

#define FIL 100
#define COL 100
#include <iostream>

using namespace std;

void leer(int, int, int[][COL],int [][COL]);
void calc(int, int, int[][COL],int [][COL], int[][COL]);

main ()
{
	int a1[FIL][COL], a2[FIL][COL], a3[FIL][COL],f,c;
	cout<<"ingrese el numero de filas:"; cin>>f;
	cout<<"ingrese el numero de columnas:";cin>>c;
	leer(f,c,a1,a2);
	calc(f,c,a1,a2,a3);
}

void leer(int c, int f, int a1[FIL][COL], int a2[FIL][COL])
{
	int i,j;
	cout<<endl<<"Elementos de la matriz A:"<<endl;
	for(i=0; i<f; i++)
	{
		for(j=0;j<c; j++)
		{
			cout<<"Leer Elemento ["<<i<<";"<<j<<"]:";
			cin>>a1[i][j];
		}
	}
	for (i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   cout<<a1[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl<<"Elementos de la matriz B:"<<endl;
	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		{
			cout<<"Leer Elementos ["<<i<<","<<j<<"]:";cin>>a2[i][j];
		}
	}
	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   cout<<a2[i][j]<<" ";
		cout<<endl;
	}
}
void calc(int f, int c, int a1[FIL][COL], int a2 [FIL][COL], int a3[FIL][COL])
{
	int i,j;
	cout<<endl<<"Elementos de la matriz c:"<<endl;
	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		{
			a3[i][j] * a1[i][j] + a2[i][j];
			cout<<"El elemento ["<<i<<";"<<j<<"];";
			cout<<a3 [i][j]<<endl;
		}
	}
	cout<<endl<<"La matriz resultante es:"<<endl;
	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		cout<<a3[i][j]<<" ";
		cout<<endl;
	}
}








































