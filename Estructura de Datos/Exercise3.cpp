#include <iostream>

using namespace std;

class Externa
{
	public:
		int i;
		class interna
		{
			public:
				int x;
		};
};
main (void)
{
	Externa E1;
	
	E1.i=0;
	cout << E1.i <<endl;
	Externa::interna I1;
	I1.x=9;
	cout << I1.x <<endl;
}

