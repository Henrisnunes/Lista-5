#include<iostream>

using namespace std;

int main(){
    int a;
    char b;
    cin>>a;
    cin>>b;
    if (b=='N')
        cout<<"Total a pagar sem frete="<<a*5<<" ""com frete="<<(a*5)+((a*5)*0.10)<<" ""Para o Norte";
    else if (b=='n')
        cout<<"Total a pagar sem frete="<<a*5<<" ""com frete="<<(a*5)+((a*5)*0.08)<<" ""Para o Nordeste";
    else if (b=='C')
        cout<<"Total a pagar sem frete="<<a*5<<" ""com frete="<<(a*5)+((a*5)*0.12)<<" ""Para o Centro-Oeste";
    else if (b=='s')
        cout<<"Total a pagar sem frete="<<a*5<<" ""com frete="<<(a*5)+((a*5)*0.15)<<" ""Para o Sudeste";
    else if (b=='S')
        cout<<"Total a pagar sem frete="<<a*5<<" ""com frete="<<(a*5)+((a*5)*0.11)<<" ""Para o Sul";
}