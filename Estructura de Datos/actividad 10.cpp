/*#include <iostream>

using namespace std;

main ()
{
	int n1, n2;
	cout<<"digite el primer numero: "<<endl;
	cin>> n1;
	cout<<"digite el segudno numero: "<<endl;
	cin>> n2;
	
	
	if(n1 == n2)
	{
		cout<<"ambos numeros son iguales"<<endl;
	}
	if(n1 > n2 )
	{
		cout<<"el primer numero es mayor: "<<n1 <<endl;
	}
	if(n1 < n2)
	{
		cout<<"el segundo numero es mayor: "<<n2 <<endl;
	}

	
	return 0;

}*/

#include <iostream>


using namespace std;

main()
{
	const int pwd = 1234; //contraseņa valida de acceso
	const string tel = "5658-1111";
	
	int pwdusr;
	
	cout<<"para poder mostrar el telefono debes escribir la contraseņa correcta"<<endl;
	cout<<"a continuacion escribe la contraseņa de acceso."<<endl;
	cin>> pwdusr;
	
	if(pwdusr == pwd)
	{
		cout<<"*** contraseņa correcta ***"<<endl;
		cout<<"el telefono del contacto es: "<<tel<<", usalo con criterio";
	}
	else
	{
		cout<<"contraseņa erronea \b\b\b"<<endl;
		cout<<"por seguridad, la infomacion se ha eliminado";
	}
}







































