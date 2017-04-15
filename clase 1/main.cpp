#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"suma"<<endl;
    cout<<"ingrese valor de x";cin>>x;
    cout<<"ingrese valor de y";cin>>y;
    int z=x+y;
    cout<<"la suma de "<<x<<"+"<<y<<" es "<<z<<endl;

    cout<<"resta"<<endl;
    cout<<"ingrese valor de x";cin>>x;
    cout<<"ingrese valor de y";cin>>y;
    z=x-y;
    cout<<"la resta de "<<x<<"-"<<y<<" es "<<z<<endl;

    cout<<"multiplicacion"<<endl;
    cout<<"ingrese valor de x";cin>>x;
    cout<<"ingrese valor de y";cin>>y;
    z=x*y;
    cout<<"la multiplicacion de "<<x<<"*"<<y<<" es "<<z<<endl;

    cout<<"division"<<endl;
    cout<<"ingrese valor de x";cin>>x;
    cout<<"ingrese valor de y";cin>>y;
    z=x/y;
    cout<<"la division de "<<x<<"/"<<y<<" es "<<z<<endl;
    return 0;
}
