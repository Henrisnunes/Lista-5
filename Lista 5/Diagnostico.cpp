#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1,str2;
    cout<<"Quais os seus sintomas";
    cin>>str1>>str2;
    if (str1.compare("febre")==0 && str2.compare("dor")==0) 
        cout<<"diagnostico 1";
         if (str1.compare("dor")==0 || (str2.compare("olhovermelho")==0))
            cout<<"diagnostico 2";
             if (str1.compare("tosse")==0 && str2.compare("inflamacao")==0)
                cout<<"diagnostico 3";
                 if(str1.compare("nada")==0 && str1.compare("nada")==0) 
                    cout<<"diagnostico 4";

}