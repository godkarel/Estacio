#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int resto, Numero;
cout <<"Informe um n�mero qualquer: ";
cin >> Numero;
if (Numero > 0)
{
cout <<" Este n�mero � Positivo";
}
else
{
cout << "Este n�mero � Negativo";
}
}	
