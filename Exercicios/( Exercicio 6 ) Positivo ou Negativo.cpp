#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int resto, Numero;
cout <<"Informe um número qualquer: ";
cin >> Numero;
if (Numero > 0)
{
cout <<" Este número é Positivo";
}
else
{
cout << "Este número é Negativo";
}
}	
