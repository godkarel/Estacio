programa

{
funcao inicio()
{
	inteiro num, indice, indicecompara
	inteiro vetor[10], vetor2[3]
	indicecompara = 0
	para (indice=1;indice<=10;indice++)
	{
		escreva("Primeiro Jogador coloquei 10 numeros aleatorios de 1 a 10 : ")
		leia(vetor[0])	
	}
	para (indicecompara=1;indicecompara<3;indicecompara++)
	{
		escreva("Segundo Jogador tera 3 chances de adivinhar os numeros digitados pelo primeiro jogador ")
		leia(vetor2[0])
		enquanto (vetor[indicecompara] < 3 )
		{
			//se (vetor2[indicecompara] == vetor[indicecompara]) 
			//{
			//escreva("Parabens voce acertou o numero esta na posição ", indicecompara, " do Vetor \n")
			//}			
			//senao
			//{
			//escreva("ERROU \n")
			//}
			
		vetor2[indicecompara]++		
		
		}	
	}
}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 425; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */