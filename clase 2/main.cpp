#include <iostream>

using namespace std;

int main()
{
//ejercicio1
    cout<<"area del circulo"<<endl;
    float x,y=3.14,z,area,area1,area2,primero,segundo;
    cout << "datos circulo(radio)";cin>>x;
    area=y*(x*x);
    cout <<"el radio es: "<<area<<endl;

    cout<<"area del cuadrado"<<endl;
    cout << "datos cuadrado";cin>>x;
    area1=x*x
    cout <<"el area es: "<<area1<<endl;

    cout<<"area del rectangulo"<<endl;
    cout << "base";cin>>x;
    cout << "altura";cin>>z;
    area2=x*z
    cout <<"el area es: "<<area2<<endl;

//ejercicio 2
    cout<<"intercambiar variables "<<endl;
    int a,b,c,d,e;
    cout<<"valor de a ";cin>>a;
    cout<<"valor de b ";cin>>b;
    c=b;
    b=a;
    cout<<"el valor de b es "<<b<<endl;
    a=c;
    cout<<"el valor de a es "<<c<<endl;

//ejercicio 3
    cout<<"intercambiar variables "<<endl;
    cout<<"valor de d ";cin>>d;
    cout<<"valor de e ";cin>>e;
    d=d+e;
    e=d-e;
    d=d-e;
    cout<<"valor de d "<<d<<endl;
    cout<<"valor de e "<<e<<endl;

//ejercicio4
    cout<<"mayor de dos numeros ";
    cout<<"primer numero";cin>>primero;
    cout<<"segundo numero";cin>>segundo;
    if (primero>segundo){
        cout<<"el primero es mayor que el segundo numero"<<endl;
    }
    else if(primero==segundo){
        cout<<"los dos numeros son iguales";
    }
    else
            cout<<"el segundo es mayor que el primero"<<endl;

    return 0;

}
