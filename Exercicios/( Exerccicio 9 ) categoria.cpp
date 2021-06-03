#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int IDADE;

cout <<"Informe a idade do competidor :";
cin >> IDADE;
if (IDADE >= 7 && IDADE <= 12)
{
cout <<"CATAGORIA INFANTIL";
}
else if (IDADE >= 13 && IDADE <= 17)
{
cout <<"CATAGORIA JOVENIL";
}
else if (IDADE >= 18 && IDADE <= 49)
{
cout <<"CATAGORIA ADULTO";
}
else if (IDADE >= 50)
{
cout <<"CATAGORIA SENIOR";
}
else 
{
cout <<"Não tem idade permitida para Participar";
}
}
