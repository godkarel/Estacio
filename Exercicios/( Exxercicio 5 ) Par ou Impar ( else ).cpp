#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int resto, Numero;
cout <<"Informe um número qualquer: ";
cin >> Numero;
resto = Numero % 2;
if (resto==	0)
{
cout <<" Este número é Par";
}
else
{
cout << "Este número é Impar";
}
}
		
