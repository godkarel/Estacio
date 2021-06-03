Dica
Para o programa em C++, declare as variáveis da seguinte maneira:

int numMes;

char *mesExtenso;

bool invalido=false;

A linha int numMes; declara a variável numMes, responsável por armazenar o número do mês informado via teclado pelo usuário.

A linha char *mesExtenso; declara a variável mesExtenso, que armazenará o nome do mês equivalente ao número digitado.

O asterisco (*) que antecede o nome da variável informa ao C++ que a mesma não tem um tamanho definido. Fazemos isso porque o nome de cada mês é formado por uma quantidade diferente de caracteres: “janeiro” é composto por sete caracteres, enquanto que “fevereiro” é composto por nove e “março” é composto por somente cinco caracteres.

A linha bool invalido=false; declara a variável lógica invalido, que utilizamos anteriormente para evitar que o programa exiba a mensagem do nome do mês por extenso quando o usuário informar um mês inválido.
