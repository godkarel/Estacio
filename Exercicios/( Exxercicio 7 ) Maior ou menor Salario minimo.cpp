#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
float Numero;
cout <<"Informe um número qualquer: ";
cin >> Numero;
if (Numero > 1000,00)
{
cout <<" Este número é maior que um salario minimo";
}
else	
{
cout << "Este número é menor que um salario minimo";
}
}	
