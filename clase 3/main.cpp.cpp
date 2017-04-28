#include <iostream>

using namespace std;

int main()
{
    /*int c=5,x;
    x=c++;
    cout << x<< endl;
    cout << c<< endl;
    c=5;
    x=++c;
    cout<<x<< endl;
    cout << c<< endl;
    int i=1;
    i=i+2;
    cout<<i<<endl;
    i=1;
    i+=2;
    cout<<i<<endl;
    //comparativa
    int a=20,b=10,z;
    if (a>b){
        z=a;
        cout<<"el mayor es a: "<<z<<endl;
        }
    else{
        z=b;
        cout<<"el mayor es b: "<<z<<endl;
    }
    z=(a>b)?a:b;
    cout<<z<<endl;
    */
    //arrays
    int score[5],valor;
    valor=5;
    score[0]=valor++;
    score[1]=valor++;
    score[2]=valor++;
    score[3]=valor++;
    score[4]=valor++;
    valor=5;
    cout<<score[valor--]<<endl;
    cout<<score[valor--]<<endl;
    cout<<score[valor--]<<endl;
    cout<<score[valor--]<<endl;
    cout<<score[valor--]<<endl;
    return 0;
}
