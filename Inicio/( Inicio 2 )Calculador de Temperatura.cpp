#include <iostream> 
// Inclui a bib do cout e cin
using namespace std; // aquele monte de coisa que é só pra encurtar
int main() // tipo o function do delphi para começar a função
{ // tipo o begin do delphi pra começar um bloco de codigo
float tempF, tempC; // declara as 2 variaveis do tipo flutuante ou seja ,00 
cout << "Temperatura em Fahrenheit: "; // saida do teclado perguntando a temperatura 
cin >> tempF; // armazenando oque o usuario deu de info na variavel 
tempC=(tempF-32)/1.8; // processando o calculo da variavel  pelos valores constantes e armazenando em outra variavel
cout << "Temperatura em graus Celsius: " << tempC; // apresentando ao usuario o resultado 
} // tipo o end do delphi para encerrar o bloco
