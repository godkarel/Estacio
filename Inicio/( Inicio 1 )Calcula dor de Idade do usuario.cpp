#include <iostream> 
// Adiciona a biblioteca iostream que contem ( cout << ) para saida ou seja algo que irá interagir com o usuario e ( cin ) >> algo que irá guardar em uma variavel oque o usuario deu de informação
using namespace std; // Um namespace é uma região declarativa que fornece um escopo para os identificadores (nomes dos tipos, função, variáveis etc.) dentro dele. Todas as declarações dentro desses blocos são declaradas no escopo nomeado. Utilizar esta linha no início do programa faz com que não precisemos escrever std::cout <<"Ano atual: ".
int main() // Os programas em C são organizados em forma de função. A função principal é denominada main, esta linha marca a abertura da função principal do programa.
{ // oque vai estar dentro da int main
int anoAtual, anoNasc, idade; // declara como numero inteiro as 3 variaveis
cout <<"Ano atual: "; // saida para o usuario com texto pedindo o ano atual
cin >> anoAtual; // guarda a informação do usuario na variavel anoAtual
cout <<"Ano de nascimento:"; // saida para o usuario com texto pedindo quando ele nasceu
cin >> anoNasc; // guarda a informação do ano em que ele nasceu
idade=anoAtual-anoNasc; // resolve o calculo e armazena diretamente na variavel idade
cout <<"Você tem ou fará " << idade << " anos."; // exibi para o usuario o resultado ( diferente de lua a concatenação de texto em C++ é feita com << no lugar de .. )
// ( obs : para guardar os dados de uma variavel fornecida pelo usuario em uma entrada não é necessario o variavel = e sim os seus pontos relacionados que são >> )
// ( obs : quando for usado um #include não pode ter comentarios nessa area do codigo ou o codigo apresentará erro )

} // oque vai estar fora da int main
