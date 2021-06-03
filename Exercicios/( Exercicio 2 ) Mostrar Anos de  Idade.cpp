#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int DiasVividos;
int AnosVoceTem;
cout << "Descreva a quantidade de dias que voce ja viveu : ";
cin >> DiasVividos;
AnosVoceTem = DiasVividos / 365;
cout << "Voce tem " << AnosVoceTem << " anos de Idade";
}
