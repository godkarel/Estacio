programa

{
funcao inicio()
{
	inteiro num, indice, indice2, indicecompara, NumeroTeste
	inteiro vetor[10], vetor2[3]
	logico Acertou, Iniciou 
	indice = 0
	Iniciou = falso
	Acertou = falso
	indicecompara = 0
	para (indice=0;indice<10;indice++)
	{
		escreva("Primeiro Jogador coloquei 10 numeros aleatorios de 1 a 10 : ")
		leia(vetor[indice])	
		escreva("VETOR ", vetor[indice], "\n")
	}
	para (indice2=0;indice2<3;indice2++)
	{
		se (Iniciou == verdadeiro)		
			se (Acertou == verdadeiro)
				escreva("Parabens o Vetor voce acertou ! \n")
			senao 
				escreva("Voce Errou, tente denovo \n")
		
		escreva("Segundo Jogador tera 3 chances de adivinhar os numeros digitados pelo primeiro jogador \n")
		Iniciou = verdadeiro
		leia(vetor2[indice2])
		escreva("VETOR ", vetor2[indice2], "\n")		
		Acertou = falso
		para	 (indicecompara=0;indicecompara<10;indicecompara++)
		{
			se (vetor2[indice2] == vetor[indicecompara]) 			
			Acertou = verdadeiro	
			
			
		}
	}
	}	
	}


/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 540; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */