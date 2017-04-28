#include <iostream>

using namespace std;
//*
int sum(const int array[],const int tam){
        int sum=0;
        for(int i=0;i<tam;sum+=array[i++]);
        return sum;
}
//*/
float prom(const int array[],const int tam){
    return float(sum(array,tam))/tam;
}
int invert(int array[],int tam){
    int x,y=tam-1;
    for(x=0;x<tam;x++){
        for(y;y==0;y--){
            array[x]=array[y];
            cout<<array[x];
        }
    }
}
int main(){
    int n;cout<<"lenght";cin>>n;
    int array[n];
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"suma: "<<sum(array,n)<<endl;
    cout<<"promedio: "<<prom(array,n)<<endl;
    cout<<"invert: "<<invert(array,n)<<endl;
}
