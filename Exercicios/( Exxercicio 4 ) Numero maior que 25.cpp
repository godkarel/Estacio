#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int Quadrado, Numero;
cout <<"Informe um n�mero qualquer: ";
cin >> Numero;
Quadrado= Numero * Numero;
cout <<"O Quadrado do numero digitado � : " << Quadrado;
if (Quadrado > 25)
{
cout <<" Este n�mero � maior que 25";
}
}
