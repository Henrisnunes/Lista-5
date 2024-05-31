#include<iostream>
#include<cstring>

using namespace std;

int main(){
    string str1,str2;
    int a,b,c,d,e,f;
    cout<<"Mora com outras pessoas na mesma casa?";
    cin>>str1;
    if (str1.compare("sim")==0){
        cout<<"Com quantas?";
        cin>>a;
        cout<<"Qual a idade da mais velha";
        cin>>b;
        cout<<"Divide seu quarto com mais pessoas?";
        cin>>str2;
        }
         if (str2.compare("sim")==0){
            cout<<"Com quantas, qual a idade da mais velha e a quantos anos mora nesta casa";
            cin>>c>>d>>e;
            cout<<"Mora com outras "<<a<<" ""pessoas na mesma casa e a mais velha tem "<<b<<" ""anos de idade e divide seu quarto com "<<c<<" ""pessoas e a mais velha possui "<<d<<" ""anos de idade e esta a "<<e<<" ""anos na mesma casa";
         }
         else if (str2.compare("nao")==0){
            cout<<"A quantos anos mora nesta casa";
            cin>>c;
            cout<<"Mora com outras "<<a<<" ""pessoas na mesma casa e a mais velha tem"<<b<<" ""anos de idade e mora a "<<c<<" ""anos na mesma casa";
         }
    else 
        cout<<"A quantos anos mora nesta casa";
        cin>>a;
        cout<<"Mora sozinho na mesma casa a"" "<<a<<" "<<"anos";
}