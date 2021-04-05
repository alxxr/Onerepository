/*#include <iostream>

using namespace std;

double mayor (double x, double y)
{
	if (x > y)
	   return x;
	else
	   return y;
}


#include <iostream>

using namespace std;

void escribirArreglo(double arreglo[], int n)
{
	int j;
	for (j=0; j<n; j++)
	{
		cout<< arreglo[j];
	}
}


#include <iostream>

using namespace std;

double sume(double d[], int n)
{
	int k;
	k=s=0;
	
	while (k<n)
	{
		s += d[k];
		if (k==0)
		    k=2;
		else 
		    k *=2;
	}
	return s;
}*/


#include <iostream>

using namespace std;

void transpuesta( float  d[][M], int n)
{
	int i,j;
	for (i=n-2; i>0; i--)
	{
		for(j=i+1; j<n; j++)
		{
			float t;
			t=d[j][i]
			d[i][j]=d[j][i];
			d[j][i]=t;
		}
	}
}

































