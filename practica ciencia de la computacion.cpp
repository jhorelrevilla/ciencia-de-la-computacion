#include <iostream>

using namespace std;
//1
float millas(float mil){
    double valor=1.60934;
    cout<<"el valor es: "<<mil*valor<<endl;
}
//2
int celcius(){
    cout  << "Farenheit ----> Celcius"<< endl;
    for (double f = 0 ; f <= 300 ; f+=20){
    cout << f << "---->" << (f - 32)*5/9 << endl;
    }
    return 0;
}
//3
int impa(int x){
    while(x!=-1){
        if (x%2==0){
            cout<<"es par"<<endl;
            cout<<"ingrese un nuevo numero ";cin>>x;
        }
        else{
            cout<<"es impar"<<endl;
            cout<<"ingrese un nuevo numero ";cin>>x;
        }
    }
}
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
//7
void cambio(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
    return;
}
//8
void inter(int *n1,int *n2){
    int temp = *n1;
     *n1 = *n2;
     *n2 = temp;
     return;
}
//9
void printarray(int arreglo[],int tam){
    cout<<"la lista es ";
    for(int x=0;x<tam;x++){
        cout<<arreglo[x]<<",";
    }
    cout<<""<<endl;
}
void arraymaker(int lista[],int tam){
    for( int i = 0 ; i < tam ; i++){
        int numero; cin >> numero;
        lista[i] = numero;
    }
}
void insercion(int arreglo[], int tam){
    for( int  i = 1 ; i < tam ; i++){
        int j = i;
        while ( j > 0 && arreglo[j-1] > arreglo [j]){
            int temp = arreglo[j];
            arreglo[j]=arreglo[j-1];
            arreglo[j-1]=temp;
            j--;
        }
    }
}
//10
//11
//12
void reverse(int arreglo[],int tam){
  int temporal;
  int limite = tam-1;
  for(int index = 0 ; index < (tam/2);index++){
    temporal= arreglo[index];
    arreglo[index]=arreglo[limite];
    arreglo[limite]=temporal;
    --limite;
  }
}
//13
//14
int sum(int arreglo, int tam){
    int sum=0;
    for(int x=0;x<tam;x++){
        sum=sum+arreglo[x];
    }
    return sum
}
//15
int main()
{
    int dato,x,y,tam;
    char op;
    /*
    cout<<"pregunta 1"<<endl;
    cout<<"ingrese el dato ";cin>>dato;
    millas(dato);

    cout <<"pregunta 2"<<endl;
    celcius();

    cout<<"pregunta 3"<<endl;
    cout<<"ingrese un numero para saber si es par o no ";cin>>x;
    impa(x);
    /*
    cout<<"pregunta 4"<<endl;
    cout<<"ingrese la base";cin>>x;
    cout<<"ingrese exponente";cin>>y;
    base(x,y);

    cout<<"pregunta 5"<<endl;
    cout<<"ingrese numero";cin>>x;
    numpa(x);

    cout<<"pregunta 6"<<endl;
    cout<<"ingrese el operando ";cin>>op;
    cout<<"ingrese el x ";cin>>x;
    cout<<"ingrese el y ";cin>>y;
    oper(op,x,y);

    cout<<"pregunta 8"<<endl;
    cout<<"intercambiar numeros"<<endl;
    cout << "Ingresa el numero A" << endl;cin >> x;
    cout << "Ingresa el numero B" << endl;cin >> y;
    int *puntn1=&x;
    int *puntn2=&y;
    inter(puntn1,puntn2);
    cout<<"el valor de A es "<<x<< endl;
    cout<<"el valor de B es "<<y<< endl;

    cout<<"pregunta 8"<<endl;
    cout<<"valor de a "<<endl;cin>>x;
    cout<<"valor de b "<<endl;cin>>y;
    cambio(x,y);
    cout<<"el valor de a es "<<x<<endl;
    cout<<"el valor de b es "<<y<<endl;
    */
    cout<<"pregunta 9"<<endl;
    cout<<"ingrese el tamaño de la lista: ";cin>>tam;
    int arreglo[tam];
    arraymaker(arreglo,tam);
    printarray(arreglo,tam);
    insercion(arreglo,tam);
    printarray(arreglo,tam);

    cout<<"pregunta 10"<<endl;

    cout<<"pregunta 11"<<endl;

    cout<<"pregunta 12"<<endl;
    cout<<"ingrese el tamaño de la lista: ";cin>>tam;
    int arreglo1[tam];
    arraymaker(arreglo,tam);
    printarray(arreglo,tam);
    reverse(arreglo,tam);
    printarray(arreglo,tam);

    cout<<"pregunta 13"<<endl;

    cout<<"pregunta 14"<<endl;
    arraymaker(arreglo,tam);
    printarray(arreglo,tam);
    sum(arreglo,tam);
    printarray(arreglo,tam);

    cout<<"pregunta 15"<<endl;

    return 0;
}
