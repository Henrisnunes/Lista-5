#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Informe um numero de 0 a 6";
    cin>>a;
    if (a==0)
       cout<<"domingo";
    if (a==1)
       cout<<"segunda-feira";
    if (a==2)
       cout<<"terca-feira";
    if (a==3)
       cout<<"quarta-feira";
    if (a==4)
       cout<<"quinta-feira";
    if (a==5)
       cout<<"sexta-feira";
    if (a==6)
       cout<<"sabado";
    else 
       cout<<"ERRO";
}