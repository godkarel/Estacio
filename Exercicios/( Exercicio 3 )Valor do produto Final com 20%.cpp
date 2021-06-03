#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
float ValorProdutoFornecedor, ValorProdutoFinal;
cout << "Informe o valor do produto comprado do fornecedor : ";
cin >> ValorProdutoFornecedor;
ValorProdutoFinal = ValorProdutoFornecedor *= 1.20;
cout << "O Valor do produto para a prateleira deve ser de " << ValorProdutoFinal << " Reais";
}
