#include <iostream> 
// Adiciona a biblioteca iostream que contem ( cout << ) para saida ou seja algo que ir� interagir com o usuario e ( cin ) >> algo que ir� guardar em uma variavel oque o usuario deu de informa��o
using namespace std; // Um namespace � uma regi�o declarativa que fornece um escopo para os identificadores (nomes dos tipos, fun��o, vari�veis etc.) dentro dele. Todas as declara��es dentro desses blocos s�o declaradas no escopo nomeado. Utilizar esta linha no in�cio do programa faz com que n�o precisemos escrever std::cout <<"Ano atual: ".
int main() // Os programas em C s�o organizados em forma de fun��o. A fun��o principal � denominada main, esta linha marca a abertura da fun��o principal do programa.
{ // oque vai estar dentro da int main
int anoAtual, anoNasc, idade; // declara como numero inteiro as 3 variaveis
cout <<"Ano atual: "; // saida para o usuario com texto pedindo o ano atual
cin >> anoAtual; // guarda a informa��o do usuario na variavel anoAtual
cout <<"Ano de nascimento:"; // saida para o usuario com texto pedindo quando ele nasceu
cin >> anoNasc; // guarda a informa��o do ano em que ele nasceu
idade=anoAtual-anoNasc; // resolve o calculo e armazena diretamente na variavel idade
cout <<"Voc� tem ou far� " << idade << " anos."; // exibi para o usuario o resultado ( diferente de lua a concatena��o de texto em C++ � feita com << no lugar de .. )
// ( obs : para guardar os dados de uma variavel fornecida pelo usuario em uma entrada n�o � necessario o variavel = e sim os seus pontos relacionados que s�o >> )
// ( obs : quando for usado um #include n�o pode ter comentarios nessa area do codigo ou o codigo apresentar� erro )

} // oque vai estar fora da int main
