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

    cout << "Mes � Janeiro";

    break;

  case 2:

    cout << "Mes � Fevereiro";

    break;

  case 3:

    cout << "Mes � Mar�o";

   break;
   
  case 4:

    cout << "Mes � Abril";

   break;
   
  case 5:

    cout << "Mes � Maio";

   break;
   
  case 6:

    cout << "Mes � Junho";

   break;
   
  case 7:

    cout << "Mes � Julho";

   break;
   
  case 8:

    cout << "Mes � Agosto";

   break;
   
  case 9:

    cout << "Mes � Setembro";

   break;
   
  case 10:

    cout << "Mes � Outubro";

   break;
   
  case 11:

    cout << "Mes � Novembro";

   break;
   
  case 12:

    cout << "Mes � Dezembro";

   break;

  default:

    cout << "Esse Mes n�o � VALIDO!";

}
}
