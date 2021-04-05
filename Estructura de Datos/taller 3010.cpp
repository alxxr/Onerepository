#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	int filas = 0;
	int columnas = 0;
	
	cout <<"cantidad de filas ";
	cin >> filas;
	cout <<"\ncantidad de columnas ";
	cin >> columnas;
	
	int matriz[filas][columnas];
	
	for (int i=0; i<filas; i++)
	{
		for(int j=1; j<columnas; j++)
		{
			cout <<"\ningrese un valor para la fila ";
			cin >> filas;
			cout <<"\ningrese un valor para la columna ";
			cin >> columnas;
			matriz[0][1]=matriz[filas][columnas];
			cout <<endl;
		}
	}
}


/*#include <iostream>
#define MAX_ASIG 6
#define MAX_ALUM 40

int main()
{
	float notas [MAX_ASIG][MAX_ALUM];
	int i,j;
	i=0;
	while (i<MAX_ASIG); 
	{
		printf("dame las notas de la asignatura %d: ", i);
		j=0;
		while(j<MAX_ALUM) 
		{
			printf("Nota del alumno %d: ", j);
			scanf("%f", &notas[i][j]);
			j++;
		}
		i++;
	}
}*/

/*#include <iostream>
 
using namespace std;
 
int main()
{
    int m;
 
    cout << "\nOrden del cuadrado: ";
    cin >> m;
 
    const int constMagica = (m * ( m * m + 1 )) / 2;
    int matriz[m][m];
 
    cout << "\nRellenar cuadrado (1 al "<< m * m <<"):\n";
    for( int i = 0; i < m; i++ )
        for( int j = 0; j < m; j++ ) 
		{
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
 
    cout << "\nImprimir cuadrado:\n\n";
    for( int i = 0; i < m; i++ ) 
	{
        cout << " | ";
        for( int j = 0; j < m; j++ )
            cout << matriz[i][j] << " ";
 
        cout << "| " << endl;
    }
 
    bool esMagico = true;
    int i = 0;
    while( i < m && esMagico == true ) 
	{
        int suma = 0;
        for( int j = 0; j < m; j++ ) 
		{
            suma += matriz[i][j];
        }
        if( suma != constMagica ) esMagico = false;
        i++;
    }
 
    if( !esMagico ) 
	{
        cout << "\nLos valores no corresponden a un cuadrado magico" <<endl;
        return 0;
    }
 
    int j = 0;
    while( j < m && esMagico == true ) 
	{
        int suma = 0;
        for( int i = 0; i < m; i++ ) 
		{
            suma += matriz[i][j];
        }
        if( suma != constMagica ) esMagico = false;
        j++;
    }
 
    if( !esMagico )
	cout<< "\nLos valores no corresponden a un cuadrado magico" << endl;
    else 
	cout << "\nLos valores SI corresponden a un cuadrado magico" << endl;
 
    return 0;
}*/















































































