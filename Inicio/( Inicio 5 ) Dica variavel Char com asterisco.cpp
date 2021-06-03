Dica
Para o programa em C++, declare as vari�veis da seguinte maneira:

int numMes;

char *mesExtenso;

bool invalido=false;

A linha int numMes; declara a vari�vel numMes, respons�vel por armazenar o n�mero do m�s informado via teclado pelo usu�rio.

A linha char *mesExtenso; declara a vari�vel mesExtenso, que armazenar� o nome do m�s equivalente ao n�mero digitado.

O asterisco (*) que antecede o nome da vari�vel informa ao C++ que a mesma n�o tem um tamanho definido. Fazemos isso porque o nome de cada m�s � formado por uma quantidade diferente de caracteres: �janeiro� � composto por sete caracteres, enquanto que �fevereiro� � composto por nove e �mar�o� � composto por somente cinco caracteres.

A linha bool invalido=false; declara a vari�vel l�gica invalido, que utilizamos anteriormente para evitar que o programa exiba a mensagem do nome do m�s por extenso quando o usu�rio informar um m�s inv�lido.
