#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int Pedido, Quantidade;
float ValorPedido, ValorPagar;
char TERMINOU;
bool INVALIDO, FINALIZA;
FINALIZA = false;
ValorPedido = 0;
while (FINALIZA==false)
{	
cout << "*** Cardápio *** \n" ;
cout << "Informe o numero do Pedido : \n \n";
cout <<"100 – Hambúrguer – R$5,50 \n";
cout <<"101 – Cachorro-quente – R$4,50 \n";
cout <<"102 – Milkshake – R$7,00 \n";
cout <<"103 – Pizza brotinho – R$8,00 \n";
cout <<"104 - Cheeseburguer – R$8,50 \n \n";
cout << "Informe o código do seu pedido: ";
cin >> Pedido;
INVALIDO == false;
switch (Pedido)
{		
    case 100:

      cout << "Voce escolheu o Hambúrguer – R$5,50 agora nos informe a Quantidade :";
      ValorPedido = ValorPedido + 5.50;
	  cin >> Quantidade; 
	  cout << "Deseja incluir mais algum pedido ? Digite (S) caso contrario Digite (N)";	 
	  cin >> TERMINOU; 	
      break;

    case 101:

      cout << "Voce escolheu o Cachorro-quente – R$4,50 agora nos informe a Quantidade :";
      ValorPedido = ValorPedido + 4.50;
	  cin >> Quantidade; 
	  cout << "Deseja incluir mais algum pedido ? Digite (S) caso contrario Digite (N)";	 
	  cin >> TERMINOU; 	
      break;
	  	  	
    case 102:

      cout << "Voce escolheu o Milkshake – R$7,00 agora nos informe a Quantidade :";
      ValorPedido = ValorPedido + 7.50;
	  cin >> Quantidade; 
	  cout << "Deseja incluir mais algum pedido ? Digite (S) caso contrario Digite (N)";	 
	  cin >> TERMINOU; 	
      break;
	  	  	
    case 103:

     cout << "Voce escolheu o Pizza brotinho – R$8,00 agora nos informe a Quantidade :";
      ValorPedido = ValorPedido + 8.00;
	  cin >> Quantidade; 
	  cout << "Deseja incluir mais algum pedido ? Digite (S) caso contrario Digite (N)";	 
	  cin >> TERMINOU; 	
      break;
	  	  	
    case 104:

      cout << "Voce escolheu o Cheeseburguer – R$8,50 agora nos informe a Quantidade :";
      ValorPedido = ValorPedido + 8.50;
	  cin >> Quantidade; 
	  cout << "Deseja incluir mais algum pedido ? Digite (S) caso contrario Digite (N)";	 
	  cin >> TERMINOU; 	
      break;
	
    default:
      INVALIDO = true;
      cout <<"Nenhum pedido encontrado";	  
	  break;	
}
if (TERMINOU == *"S")
	{
	FINALIZA = false;
	}
else
	{
	FINALIZA = true;
	}
}	

if (INVALIDO==false)
{
	ValorPagar = ValorPedido * Quantidade;
	cout << "O Total do seu pedido ficou em :" << ValorPagar;	
}
 

	


}

