#include <iostream>
#include <limits>

using namespace std;

int main () {
	cout << "maximo entero: " << numeric_limits<int>::max () << endl;
	cout << "minimo entero: " << numeric_limits<int>::min () << endl;
	cout << "maximo float: " << numeric_limits<float>::max () << endl;
	cout << "minimo float: " << -numeric_limits<float>::max () << endl;
	cout << "maximo double: " << numeric_limits<double>::max () << endl;
	cout << "minimo double: " << -numeric_limits<double>::max () << endl;
	cout << "maximo entero largo: " << numeric_limits<long int>::max () << endl;
	cout << "minimo entero largo: " << numeric_limits<long int>::min () << endl;
	return 0;
}
