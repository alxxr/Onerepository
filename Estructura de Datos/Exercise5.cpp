#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int a[50], b[50], 6
	c[50],n,i;
	
	cout<<"Ingrese limite:";
	cin >>n;
	cout<<"Elementos del arreglo A:"<<endl;
	    for(i=0; i<n; i++)
	    {
	    	cout<<"Elemento ["<<i<<"]:";
	    	cin >>a[i];
		}
	cout<<"Los elementos del arreglo B:"<<endl;
	    for(i=0; i<n; i++)
	    {
	    	cout<<"Elemento ["<<i<<"]:";
	    	cin >>b[i];
		}
		for(i=0; i<n; i++)
		c[i]=a [i]+b[i];
	cout<<"La suma de arreglo sera:";
	    for(i=0; i<n; i++)
	    cout<<" "<< c[i];
}
