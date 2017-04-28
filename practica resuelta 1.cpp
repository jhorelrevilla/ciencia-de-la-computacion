#include<iostream>
using namespace std;
//2
int sum(int arreglo[],int tam){
    if (tam==0){
        return arreglo[0];
    }
    return arreglo[tam]+sum

}
//3

//4
void reverse(char arreglo[],int tam){
  int temporal;
  char limite = tam-1;
  for(int index = 0 ; index < (tam/2);index++){
    temporal= arreglo[index];
    arreglo[index]=arreglo[limite];
    arreglo[limite]=temporal;
    --limite;
  }
}
int main(){
    //2
    int matriz[5]={1,2,3,4,5};
    sum(matriz,4);
    //3

    //4
    char matrizp[5]={'p','e','r','r','o'};
    for(int x=0;x<5;x++){
        cout<<matrizp[x]<<endl;
    }
    reverse(matrizp,5);
    cout<<endl;
    for(int x=0;x<5;x++){
        cout<<matrizp[x]<<endl;
    }
}




