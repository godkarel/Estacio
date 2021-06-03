#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int IDADE;

while (IDADE > -1)
{
cout <<"Informe a idade do competidor :";
cin >> IDADE;
if (IDADE >= 7 && IDADE <= 12)
{
cout <<"CATAGORIA INFANTIL \n";
}
else if (IDADE >= 13 && IDADE <= 17)
{
cout <<"CATAGORIA JOVENIL \n";
}
else if (IDADE >= 18 && IDADE <= 49)
{
cout <<"CATAGORIA ADULTO \n";
}
else if (IDADE >= 50)
{
cout <<"CATAGORIA SENIOR \n";
}
else
{
cout <<"Não tem idade permitida para Participar \n";
}
}
}
