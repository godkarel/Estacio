#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int NumMes;
char *MesExtenso;
cout << "Informe o numero do mes : ";
cin >> NumMes;
switch (NumMes)
{

  case 1:

    cout << "Mes é Janeiro";

    break;

  case 2:

    cout << "Mes é Fevereiro";

    break;

  case 3:

    cout << "Mes é Março";

   break;
   
  case 4:

    cout << "Mes é Abril";

   break;
   
  case 5:

    cout << "Mes é Maio";

   break;
   
  case 6:

    cout << "Mes é Junho";

   break;
   
  case 7:

    cout << "Mes é Julho";

   break;
   
  case 8:

    cout << "Mes é Agosto";

   break;
   
  case 9:

    cout << "Mes é Setembro";

   break;
   
  case 10:

    cout << "Mes é Outubro";

   break;
   
  case 11:

    cout << "Mes é Novembro";

   break;
   
  case 12:

    cout << "Mes é Dezembro";

   break;

  default:

    cout << "Esse Mes não é VALIDO!";

}
}
