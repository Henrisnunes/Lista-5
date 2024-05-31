#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str1, str2;
    int a, b;
    cout << "Eh do sexo feminino e tem mais de 10 anos?";
    cin >> str1;
    if (str1.compare("sim") == 0){
        cout << "Ja engravidou?";
        cin >> str2;
    }
    else 
        cout<<"Nao eh uma mulher";
    if (str2.compare("sim") == 0){
        cout << "Informe quantos tem e a idade do mais velho";
        cin >> a >> b;
        cout << "Eh do sexo feminino e tem mais de 10 anos, ja engravidou e possuiu " << a <<" ""filhos e o mais velho possui " << b <<" ""anos de idade.";
    }
    
}