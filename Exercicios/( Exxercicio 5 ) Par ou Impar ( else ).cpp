#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int resto, Numero;
cout <<"Informe um n�mero qualquer: ";
cin >> Numero;
resto = Numero % 2;
if (resto==	0)
{
cout <<" Este n�mero � Par";
}
else
{
cout << "Este n�mero � Impar";
}
}
		
