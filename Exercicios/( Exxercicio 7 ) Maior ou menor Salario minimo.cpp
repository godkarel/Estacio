#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
float Numero;
cout <<"Informe um n�mero qualquer: ";
cin >> Numero;
if (Numero > 1000,00)
{
cout <<" Este n�mero � maior que um salario minimo";
}
else	
{
cout << "Este n�mero � menor que um salario minimo";
}
}	
