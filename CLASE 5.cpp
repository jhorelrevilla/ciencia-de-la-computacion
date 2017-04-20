#include <iostream>

using namespace std;

int main()
{
    //ejercicio1
    int y,a,j,cont=0,z;
    cout<<"ingresar numero";cin>>y;
    for (int j=2;j<=y;j++){
        int a=0;
        for(int i=1;i<=y;i++){
            if(j%i==0){
                a++;
            }
        }
        if (a==2){
            cout<<"es primo "<<j<<endl;
        }
    }
    //ejercicio 2
    cout<<"ingresar tamaño ";cin>>y;
    cout<<"ingresar numero ";cin>>z;
    for (int j=2;j<=y;j++){
        int a=0;
        for(int i=1;i<=y;i++){
            if(j%i==0){
                a++;
            }
        }
        if (a==2){
            cont++;
            if(cont==z){
                cout<<j<<endl;
            }
        }
    }
    return 0;
}
