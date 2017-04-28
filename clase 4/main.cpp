#include <iostream>

using namespace std;

int main()
{
    int arreglo[4],arreglo2[4],x,y,z,a;

    /*cout<<"agregar el primer dato: ";cin>>x;
    arreglo[0]=x;
    cout<<"agregar el primer dato: ";cin>>y;
    arreglo[1]=y;
    cout<<"agregar el primer dato: ";cin>>z;
    arreglo[2]=z;
    cout<<"agregar el primer dato: ";cin>>a;
    arreglo[3]=a;
    /*int tmp2;
    /*tmp2=arreglo[0];
    arreglo[0]=arreglo[3];
    arreglo[3]=tmp2;
    tmp2=arreglo[1];
    tmp2=arreglo[1];
    arreglo[1]=arreglo[2]
    arreglo[2]=tmp2;
    cout <<arreglo[0]<<endl;
    cout <<arreglo[1]<<endl;
    cout <<arreglo[2]<<endl;
    cout <<arreglo[3]<<endl;
    */
    int tam,p;
    cout<<"tamaño: ";cin>>tam;
    int sum=0;
    for (x=0;x<tam;x++){
        cout<<"agregar el dato: ";cin>>arreglo[x];
        sum+=arreglo[x];
    }
    /*cout<<"indicar el tamaño";cin>>tam;
    for (int i=0;i<(tam/2);i++){
        p=arreglo[i];
        arreglo[i]=arreglo[tam-1-i];
        arreglo[tam-1-i]=p;
    }
    cout<<arreglo[0]<<endl;
    cout<<arreglo[1]<<endl;
    cout<<arreglo[2]<<endl;
    cout<<arreglo[3]<<endl;
    */


    cout << sum << endl;
    return 0;
}
