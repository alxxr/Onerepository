/*#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    cout<<"ingrese un numero: ";
	cin>>a;
    cout<<"ingrese otro numero: ";
	cin>>b;
    while(a<=b)
    {
        if(a%2!=0)
        c=c+1; 
		a=a+1;       
    }
    cout<<c<<endl;
    cin.ignore(); return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
  if((x<1)||(x>999))
       cout<<"Ingrese un numero"<<endl;
  else
   
   {
 
        if(x>=900) {cout<<"CM" ;x=x-900;}
        if(x>=500) {cout<<"D"  ;x=x-500;}
        if(x>=400) {cout<<"CD" ;x=x-400;}
        if(x>=300) {cout<<"C"  ;x=x-300;}
        if(x>=200) {cout<<"C"  ;x=x-200;}
        if(x>=100) {cout<<"C"  ;x=x-100;}
        if(x>=90)  {cout<<"XC" ;x=x-90; }
        if(x>=50)  {cout<<"L"  ;x=x-50; }
        if(x>=40)  {cout<<"XL" ;x=x-40; }
        if(x>=30)  {cout<<"X"  ;x=x-30; }
        if(x>=20)  {cout<<"X"  ;x=x-20; }
        if(x>=10)  {cout<<"X"  ;x=x-10; }
        if(x>=9)   {cout<<"IX" ;x=x-9;  } 
        if(x>=5)   {cout<<"V"  ;x=x-5;  }
        if(x>=4)   {cout<<"IV" ;x=x-4;  }
        if(x>=3)   {cout<<"III";x=x-3;  }
        if(x>=2)   {cout<<"II" ;x=x-2;  }
        if(x>=1)   {cout<<"I"  ;x=x-1;  }
  
    }
   cout<<endl;
   cin.ignore(); return 0;
}*/


#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"TRIANGULO DE PITAGORAS"<<endl<<endl;
    float a,b,c;
    cout<<"Ingrese el Primer cateto"<<endl;
    cin>>a;
    cout<<"Ingrese el Segundo cateto"<<endl;
    cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
 
    cout<<"La Hipotenusa es:"<<"\n"<<c<<endl<<endl;
     
    cout<<"\t"<<"_\\"<<endl;
    cout<<"\t"<<"___\\"<<endl;
    cout<<"\t"<<"_____\\"<<endl;
    cout<<"\t"<<"_______\\"<<endl;
    cout<<"\t"<<"_________\\"<<endl;
    cout<<"\t"<<a<<"__________"<<c<<endl;
    cout<<"\t"<<"_____________\\"<<endl;
    cout<<"\t"<<"_______________\\"<<endl;
    cout<<"\t"<<"_________________\\"<<endl;
    cout<<"\t"<<"_________"<<b<<"__________\\"<<endl<<endl;
     
 
    cin.ignore();
    return 0;
 
}































