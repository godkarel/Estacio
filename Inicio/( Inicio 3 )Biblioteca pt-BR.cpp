#include <iostream> 
#include <locale> 
// inclui as bibliotecas e ( novidade biblioteca locale para poder usar os detalhes do portugues-br que tem acentuos e outras paradas 0
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb"); // indica qual idioma deverá ser usado para que não apresente erros quando for aparecer algo na tela para o usuario como os acentuos virarem uns treco feio

}
