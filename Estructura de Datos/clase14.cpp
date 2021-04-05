/*#include<iostream>

using namespace std;

main ()
{
	double a, b;
	int c;
	
	cout<<"Introduzca el primer numero"<<endl;
	cin>> a,
	cout<<"Introduzca el segundo numero"<<endl;
	cin>> b;
	cout<<"Que operacion desea hacer, 1(sumar), 2(multiplicar), 3(dividir)"<<endl;
	cin>> c;
	
	switch (c)
	{
		case 1:
			   cout<<"el resultado es: "<<a+b<<endl;
			   break;
		case 2: 
		       cout<<"el resultado es: "<<a*b<<endl;
			   break;
		case 3:
			   cout<<"el resultado es: "<<a/b<<endl;
			   break;
		default:
			   cout<<"Opcion no valida"<<endl;
			   break;	   
	}
	
	return 0;
}*/

/*#include<iostream>

using namespace std;

main ()
{
	double a, b, area;
	int figura;
	
	cout<<"figura = (1)rectangulo, (2)triangulo"<<endl;
	cout<<"¿Que area desea calcular?"<<endl;
	cin>> figura;
	
	switch (figura)
	{
		case 1:
			cout<<"ingrese valor del lado menor = "<<endl;
			cin>> a;
			cout<<"ingrese valor del lado mayor = "<<endl;
			cin>> b;
			area = a*b;
			break;
		case 2:
		    cout<<"ingrese valor de la base = "<<endl;
			cin>> a;
			cout<<"ingrese valor de la altura = "<<endl;
			cin>> b;
			area = a*b/2.0;
			break;
		default:
		    cout<<"error de eleccion"<<endl;
			area = 0;
			break;	
			   
	}
	
	if (area)
	    cout<<"el area de la figura es = "<<area<<endl;
	else
	    cout<<"error al calcular el area"<<endl;
	
	return 0;
}*/

/*#include<iostream>

using namespace std;

main ()
{
	int x;
	x = 1;
	
	while (x <= 100000)
	{
		cout<< x;
		cout<<" - ";
		x = x+1;
	}
	
	return 0;
}*/

/*#include<iostream>

using namespace std;

main ()
{
	int x, suma, valor, promedio;
	x = 1;
	suma = 0;
	
	while (x<=10)
	{
		cout<<"ingrese un valor: "<<endl;
		cin>> valor;
		suma = suma+valor;
		x = x+1;
	}
	
	promedio = suma/10.0;
	cout<<"la sumatoria de los valores ingresados es: "<<endl;
	cout<<suma;
	cout<<"\n";
	cout<<"el promedio es: ";
	cout<<promedio;
}*/

#include<iostream>

using namespace std;

main ()
{
	int x, cantidad, n;
	float largo;
	x=1;
	cantidad = 0;
	cout<<" cuantas piezas vas a procesar";
	cin>> n;
	
	while (x<=n)
	{
		cout<<"ingrese la medida de la pieza: ";
		cin>> largo;
		if (largo>=1.20 && largo<=1.30)
		{
			cantidad = cantidad+1;
		}
		x=x+1;
		
	}
	
	cout<<"la cantidad de piezas a desarrollar son: ";
	cout<<cantidad;
	
}


























