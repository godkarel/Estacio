#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int Idade, QTEntrevistado;
float Peso, MediaPeso, MediaPesoFinal, MediaIdade, MediaIdadeFinal;
Peso = 1;
QTEntrevistado = 0;
MediaPeso = 0;
while (Peso != 0)
{
	cout << "Informe seu peso :";
	cin >> Peso;	
	if (Peso == 0)
	{	
	break;
	}	
	else
	{	
	cout << "Informe sua Idade :";
	cin >> Idade;
	MediaIdade += Idade;
	QTEntrevistado ++;
	MediaPeso += Peso;
	}
}
MediaIdadeFinal = MediaIdade / QTEntrevistado;
MediaPesoFinal = MediaPeso / QTEntrevistado;
cout << "A quantidade de entrevistados é de : " << QTEntrevistado <<"\nA media de peso é de : " << MediaPesoFinal << "KG \n" << "A Media de Idade é de : " << MediaIdadeFinal ;   
}
