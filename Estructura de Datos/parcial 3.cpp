#include <iostream>
#include <stdio.h>

using namespace std;

void mayor_y_menor (int a, int b, int c)
{
	int menor = a;
	int mayor = a;
	
	if (b > mayor) 
	{
		mayor = b;
	}

	if (b < menor)
	{
		menor = b;
	}

	if (c > mayor)
	{
		mayor = c;
	} 
	if (c < menor)
	{
		menor = c;
	} 
	
	cout << "\n\n  El numero mayor es: "<<mayor;
	cout << "\n El numero menor es: "<<menor;
	 
}
int main()
{
	cout << "Ahora se llamara a la funcion \n";
	mayor_y_menor(500,0,-500); 
	mayor_y_menor(5,2,3);
	mayor_y_menor(101,101,101);
	cout << "\n\n ya se retorno al programa principal.";
}
