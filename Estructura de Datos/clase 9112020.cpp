/*#include <iostream>

using namespace std;

void f(int val, int& ref)
{
	val++;
	ref++;
}
main ()
{
	int i=1;
	int j=1;
	f (i,j);
	cout<<"i vale " <<i<<"y j "<<j<<endl;
}*/



/*#include <iostream>
#include <stdio.h>

using namespace std;
 
void imprimeValor();

main() 
{
	int contador = 0;
	contador++;
	cout<<"El valor del contador es: "<<contador<<endl;
	imprimeValor();
	
}

void imprimeValor()
{
	int contador = 5;
	cout<<"El valor de contador es: "<<contador<<endl;
}*/


/*#include <iostream>
#include <stdio.h>

using namespace std;
 
void unaFuncion();
void otraFuncion();
int variable;

main ()
{
	variable=9;
	cout<<"El valor de la variabl es "<<variable<<endl;
	unaFuncion();
	otraFuncion();
	cout<<"ahora el valor de la variable es: "<<variable<<endl;
	return 0;
}
void unaFuncion()
{
	cout<<"En la funcion una Funcion, la variable es: "<<variable<<endl;
}
void otraFuncion()
{
	variable++;
	cout<<"En la funcion otraFuncion, la variable es: "<<variable<<endl; 
}*/


/*#include <iostream>
#include <stdio.h>

using namespace std;

int potencia (int base, int exponente)
{
	int potencia = 1;
	
	for(int i=1;i<=exponente;i++)
	potencia=potencia*base;
	return potencia;
}
main ()
{
	int base, exponente;
	
	cout<<"introduzca una base: ";
	cin>>base;
	cout<<"introduzca el exponente: ";
	cin>>exponente;
	cout<<"El resultado de la operacion "<<base<<"^"<<exponente<<"es: "<<potencia(base,exponente)
}*/



/*#include <iostream>
#include <stdio.h>

using namespace std;

int areaTriangulo(int base, int altura)
{
	base=base*altura /2;
}
main()
{
	int base, altura;
	
	cout<<"Introduzca una base: ";
	cin>>base;
	cout<<"Introduzca una altura: ";
	cin>>altura;
	cout<<"El resultado de la operacion "<<base<<"*"<<altura<<"/2 el area es: "<<areaTriangulo<<base,altura)<<endl;
}*/



#include <iostream>
#include <stdio.h>

using namespace std;

void operar (int x, int y, int& suma, int& resta, int& mult, int& divide)
{
	suma=x+y;
	mult=x*y;
	divide=x/y;
	resta=x-y;
}
main()
{
	int a, b, mult, resta, suma, divide;
	cout<<"Ingrese dos numeros: "<<endl;
	cin>> a>>b;
	operar(a,b,suma,resta,mult,divide);
	cout<<"Tus numeros ingresados son: "<<a<< "y" <<b<<endl;
	cout<<"suma: "<<suma<<endl;
	cout<<"resta: "<<resta<<endl;
	cout<<"multiplicacion: "<<mult<<endl;
	cout<<"division: "<<divide<<endl;
}








































