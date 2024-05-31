#include<iostream>

using namespace std;

int main(){
    int a,b,c,f;
    char d;
    cout<<"Voce esta casado?";
    cin>>d;
    if (d=='s'){
       cout<<"Informe o ano do casamento";
       cin>>a;
          if (24-a>2)
             cout<<"Se tiver um filho, informe a quantidade e a idade do mais novo";
             cin>>b>>c;
             cout<<"Informe sua pretensao salarial";
             cin>>f;
             cout<<"Esta casado, tem"" "<<b<<" ""filhos e o mais novo possui"" "<<c<<" ""anos e sua pretensao salarial eh de"" "<<f;
    }
    else 
       cout<<"Informe sua pretensao salarial";
       cin>>f;
       cout<<"Nao esta casado, e sua pretensao salarial eh:"" "<<f;
    
}