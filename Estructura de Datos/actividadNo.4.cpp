/*#include <iostream>
#include <math.h>

using namespace std;

main ()
{
	int a, b, c, d;
	float co1, co2, raiz;
	cout <<" ecuaciones de segundo grado como: ax^2 + bx + c"<< endl;
	cout <<" digite el primer valor (a): "<< endl;
	cin >> a ;
	cout <<" digite el segundo valor (b): "<< endl;
	cin >> b ;
	cout <<" digite el tercer valor (c): "<< endl;
	cin >> c ;
	cout <<" la ecuacion es " << a <<" x^2 + "<< b <<" x + "<< c << endl;
	d = ((b*b)-4*a*c);
	raiz = sqrt (d);
	co1 = (-b + raiz)/(2*a);
	co2 = (-b - raiz)/(2*a);
	cout <<" co1 = "<< co1 << endl;
	cout <<" co2 = "<< co2 << endl;
   
 
    return 0;

}*/

#include <iostream>
#include <math.h>

using namespace std;

main ()
{
	int a;
	float base,altura,areaT, radio, areaC;
	float pi = M_PI; 
	cout <<" 1. Area Circulo "<< endl;
	cout <<" 2. Area Triangulo "<< endl;
	cout <<" 3. Salir "<< endl;
	cout <<" Opcion ==> "<< endl;
	cin >> a;
	switch (a) {
		case 1:
			cout <<" ingrese el radio: "<< endl;
			cin >> radio;
			areaC = (pi * pow(radio,2)); 
			cout <<"El area del circulo es "<< areaC << endl;
		break;
		case 2:
			cout <<" ingrese la base: "<< endl;
			cin >> base;
			cout <<" ingrese la altura: "<< endl;
			cin >> altura;
			areaT = (base * altura) / 2;
			cout <<" el area del triangulo es "<< areaT<< endl;
		break;
		
	}
	
	return 0;
}


/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int a;
float base,altura,areaT,radio,areaC;
float pi = M_PI; 
 
 
int main() {
	do {
		printf("1. Area Circulo\n");
		printf("2. Area Triangulo\n");
	    printf("5. Salir\n\n");
		printf("Opcion ==> ");
		scanf("%d",&a);
 
		switch (a) {
			case 1:
				printf("Ingrese el radio: ");
				scanf("%f",&radio);
				areaC = pi * pow(radio,2);
				printf("El area circulo es %.2f\n\n",areaC);
			break;
			case 2:
				printf("Ingrese la base: ");
				scanf("%f",&base);
				printf("Ingrese la altura: ");
				scanf("%f",&altura);
				areaT = (base * altura) / 2;
				printf("El area del triangulo es %.2f\n\n",areaT);
			break;
			
			}
 
	} while (a < 5);
 
	return 0;
}*/




























































