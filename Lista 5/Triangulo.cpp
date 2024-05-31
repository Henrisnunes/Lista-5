#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Digite o valor dos lados de um triangulo";
    cin>>a>>b>>c;
    if ((a>b+c) || (b>a+c) || (c>a+b))
       cout<<"Nao eh um triangulo";
    else if((a==b) && (a==c))
       cout<<"Triangulo Equilatero";
    else if((a==b) || (a==c) || (b==c))
       cout<<"Triangulo Isoceles";
    else 
       cout<<"Triangulo Escaleno"; 
              
}