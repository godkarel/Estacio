#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	float ValorInformado, ValorCubo, ValorQuadrado, ValorGambiarra;
	ValorInformado = 0;
	cout << "Informe um numero qualquer : ";
	cin >> ValorInformado;
	ValorQuadrado = ValorInformado * ValorInformado;
	ValorCubo = (ValorInformado * ValorInformado) * ValorInformado;
	cout << "O Quadrado do valor informado é : " << ValorQuadrado << " e o Cubo do valor informado é : " << ValorCubo;
}
