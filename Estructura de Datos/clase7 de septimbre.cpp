/*#include <iostream>

using namespace std;

main ()
{
	int edad;
	cout <<" Que edad tienes? ";
	cin >> edad;
	
	if (edad>20)                              //verdadero
	    cout<<"Eres mayor de edad ¡¡¡";
	else                                      //falso
	    cout<<"No eres mayor de edad ¡¡¡";    
	
}*/

/*#include <iostream>

using namespace std;

main ()
{
	int i=1;
	int j=2;
	
	if (i<j)
	{
		cout<<"i es menor que j"<<endl;
	}
	else
	{
		cout<<"i es mayor que j"<<endl;
	}
}*/

/*#include <iostream>

using namespace std;

main ()
{
	int A = 0;
	int B = 0;
	int C = 0;
	
	cout<<" Ingrese tres numeros: ";
	cin>> A >> B >> C;
	
	if (A > B)
	{
		if (A > C)
		    cout<<" A es el numero mayor";
		else
		    cout<<" C es el numero mayor"; 
	}
	else 
	{
		if (B > C)
		    cout<<" B es el numero mayor";
		else 
		    cout<<" C es el numero mayor";
	}
}*/

/*#include <iostream>

using namespace std;

main ()
{
	double a,b;
	int c;
	
	cout<<"Ingrese el primer numero: "<<endl;
	cin>> a;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>> b;
	
	cout<<"Que operacion desea hacer. 1**SUMA**, 2**MULTIPLICACION**"<<endl;
	cin>> c;
	
	if (c == 1)
	{
		cout<<"El resultado es: "<<a + b<<endl;
	}
	else
	{
		cout<<"El resultado es: "<<a*b<<endl;
	}
}*/

#include <iostream>

using namespace std;

main ()
{
	double a,b;
	double Area;
	int figura;
	
	cout<<"Figura -> Cuadrado (1) / Rectangulo (2) / Triangulo (3)"<<endl;
	cout<<"¿Que area desea calcular?"<<endl;
	cin>> figura;
	
 	  if (figura == 1)
	    {
		  cout<<"Ingrese el valor del lado: ";
		  cin>> a;
		  Area = a * a;
	    } 
	  if (figura == 2)
	    {
		  cout<<"Ingrese el valor del lado menor: ";
		  cin>> a;
		  cout<<"Ingrese el valor del lado mayor: ";
		  cin>> b;
		  Area = a * b;
        }
      if (figura == 3)
	    {
		  cout<<"Ingrese el valor de la base: ";
		  cin>> a;
		  cout<<"Ingrese el valor de la altura: ";
		  cin>> b;
		  Area = a * b / 2.0;
	    }
	  if (figura > 3 || figura == 0)
	    {
		  cout<<"seleccion equivocada"<<endl;
		  Area = 0;
	    }
    cout<<"El area de la figura es= "<<Area<<endl;
}























































