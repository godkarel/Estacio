#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int num;
cout <<"Informe um horário qualquer: ";
cin >> num;
if (num>=6 && num<=18)
{
cout <<"Esta de dia";
}
else
{
cout <<"Esta de noite";
}
}
