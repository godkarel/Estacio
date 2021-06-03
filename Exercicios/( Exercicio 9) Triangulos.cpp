#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int Num1, Num2, Num3;
cout <<"Informe o primeiro valor da reta do triangulo :";
cin >> Num1;
cout <<"Informe o segundo valor da reta do triangulo :";
cin >> Num2;
cout <<"Informe o Terceiro valor da reta do triangulo :";
cin >> Num3;

if (Num1==Num2 && Num1==Num3 && Num2==Num3)
{
cout <<"É um triangulo Equilátero";
}
else if (Num1==Num2 && Num1!=Num3)
{
cout <<"É um triangulo Escaleno";
}
else if (Num1==Num3 && Num1!=Num2)
{
cout <<"É um triangulo Escaleno";
}
else if (Num2==Num3 && Num1!=Num2)
{
cout <<"É um triangulo Escaleno";
}
else if (Num1!=Num2 && Num1!=Num3 && Num2!=Num3)
{
cout <<"É um triangulo Isósceles";
}
}
