#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int Num, Contador, Controlador, res, Quantidade;
Controlador = 0;
Contador = 1;
Quantidade = 0;
for (Num=1;Contador<=10;Contador++)
{
	cout << "Informe um Numero Aleatorio ; ";
	cin >> Num;
	res = Num %3;
    if (res == 0)
    {
    	Quantidade++;
	}
    
}
cout << " A Quantidade de " << Quantidade << " é Multiplo de 3";
}

