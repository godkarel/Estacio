#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int Quadrado, Numero;
cout <<"Informe um número qualquer: ";
cin >> Numero;
Quadrado= Numero * Numero;
cout <<"O Quadrado do numero digitado é : " << Quadrado;
if (Quadrado > 25)
{
cout <<" Este número é maior que 25";
}
}
