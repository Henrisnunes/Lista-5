#include<iostream>

using namespace std;

int main(){
    float a,b,c,d,A,B,C;
    cout<<"Informe seu salario e os seus gastos com:alimentacao, transporte e educacao";
    cin>>d>>a>>b>>c;
    
    if (a+b+c>d)
        cout<<"Gastos maiores que o salario";
    else{
    a=(a/d)*100;
    b=(b/d)*100;
    c=(c/d)*100;
    A=a;
    B=b;
    C=c;
     if (b<c){
            b=c;
            c=B;
        } 
        if (a<b){
            a=b;
            b=A;
        }
        if (b<c){
            C=b;
            b=c;
            c=C;
        }
    cout<<a<<" "<<b<<" "<<c<<" ";
    cout<<c<<" "<<b<<" "<<a;
    }
}