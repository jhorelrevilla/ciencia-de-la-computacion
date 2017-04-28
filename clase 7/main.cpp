#include <iostream>

using namespace std;
//1
float millas(float mil){
    double valor=1.60934;
    cout<<"el valor es: "<<mil*valor<<endl;
}
//2
//3
//4
int base(int x,int y){
    for(int w=1;w<y;w++){
        x=x*x;
    cout<<x<<endl;
    }
}
//5

int numpa(int x){
    while(x!=-1){
        switch(x){
            case 0:
               cout<<"cero"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;

            case 1:
               cout<<"uno"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            case 2:
               cout<<"dos"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            case 3:
               cout<<"tres"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            case 4:
               cout<<"cuatro"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            case 5:
               cout<<"cinco"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            case 6:
               cout<<"seis"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            case 7:
               cout<<"siete"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            case 8:
               cout<<"ocho"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            case 9:
               cout<<"nueve"<<endl;
               cout<<"ingrese un nuevo numero";cin>>x;
               break;
            default:
                cout<<"numero no permitido"<<endl;
                cout<<"ingrese un nuevo numero";cin>>x;
        }
    }
}

//6
int oper(char op,int x, int y){
    switch (op){
        case '+':
            cout<<x+y<<endl;
            break;
        case '-':
            cout<<x-y<<endl;
            break;
        case '*':
            cout<<x*y<<endl;
            break;
        case '/':
            cout<<x/y<<endl;
            break;
    }
}

int main()
{
    int dato,x,y;
    char op;
    cout<<"ingrese el dato ";cin>>dato;
    millas(dato);
    cout<<"ingrese la base";cin>>x;
    cout<<"ingrese exponente";cin>>y;
    base(x,y);
    cout<<"ingrese el operando ";cin>>op;
    cout<<"ingrese el x ";cin>>x;
    cout<<"ingrese el y ";cin>>y;
    oper(op,x,y);
    cout<<"ingrese numero";cin>>x;
    numpa(x);
    return 0;
}
