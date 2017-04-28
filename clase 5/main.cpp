#include <iostream>

using namespace std;

int main()
{
    int y,z;
    //ejercicio1
    cout<<"ingresar numero";cin>>y;
    cout<<"posicion del numero";cin>>z;
    for (int x=1,cont=1;x<y;x++){
        if (x!=1){
            switch(x){
                case 2:
                    cout<<"es primo 2"<<endl;
                    cont++;
                    break;
                case 3:
                    cout<<"es primo 3"<<endl;
                    cont++;
                    break;
                case 5:
                    cout<<"es primo 5"<<endl;
                    cont++;
                    break;
                case 7:
                    cout<<"es primo 7"<<endl;
                    cont++;
                    break;
                }
        if (x%2!=0&&x%3!=0&&x%5!=0&&x%7!=0&x%x!=1){
            cout<<"es primo "<<x<<endl;
            cont++;
            }
        if (cont==z){
            cout<<"es la posicion "<<cont<<endl;
        }
        }
    }
    /*ejercicio 2
    cout<<"ingresar numero";cin>>y;
    cout<<"posicion del numero";cin>>z;
    for (int x=1,cont=1;x<y;x++){
        if (x!=1){
            switch(x){
                case 2:
                    cout<<"es primo 2"<<endl;
                    cont++;
                    break;
                case 3:
                    cout<<"es primo 3"<<endl;
                    cont++;
                    break;
                case 5:
                    cout<<"es primo 5"<<endl;
                    cont++;
                    break;
                case 7:
                    cout<<"es primo 7"<<endl;
                    cont++;
                    break;

                }
        if (x%2!=0&&x%3!=0&&x%5!=0&&x%7!=0){
            cout<<"es primo "<<x<<endl;
            if (cont==z){
                cout<<"es la posicion "<<x<<endl;
            cont ++;
            }
        }
        }
    }
    */
    return 0;
}
