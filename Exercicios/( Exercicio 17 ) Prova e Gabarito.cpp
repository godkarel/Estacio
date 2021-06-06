#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int ind, pos, qtdeAlunos, acertos=0; // define as variaveis inteiro
char gabarito[5], prova[5]; // define como char "1 letra" tanto as provas quanto o gabarito pois ambas terão de A B C D E 

//Leitura do gabarito da prova
cout <<"*** Gabarito da Prova *** \n";
for (ind=0;ind<=4;ind++) // estrutura de repetição que controla o gabarito
{
cout <<"Questão "+ind+1<<": ";
cin >>gabarito[ind]; //guarda o gabarito no ind que foi listado no inicio do programa 
}
//Definição da quantidade de alunos da turma
cout <<"Quantos alunos tem a turma?";
cin >>qtdeAlunos; // pergunta a quantidade de alunos para o proximo controlador 

//Leitura das respostas de cada aluno da turma
for (ind=1;ind<=qtdeAlunos;ind++) // ind volta para 1 e enquanto o ind for menor que a quantidade de alunos ele continuará no loop
{
cout <<"*** Respostas da Prova "<<ind<<"***\n";
for (pos=0;pos<=4;pos++) // controlador de posição para da prova com a posição do gabarito ( A B C D E ) 
{
cout <<"Informe a "<<pos+1<<"a. resposta: ";
cin >>prova[pos]; 
if (prova[pos]==gabarito[pos]) // calcula a posição da resposta com a posição da resposta do aluno se as 2 forem iguais no vetor o aluno acerta
{ acertos++; }
}
cout <<"Este aluno teve "<<acertos<<" acertos.\n";
acertos=0;
}
}
