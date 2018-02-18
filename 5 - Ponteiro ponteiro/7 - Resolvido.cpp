#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
7.  Correção  de  provas  –  considere  que  cada  prova  tem  10  questões  e  cada  questão  tem  5  itens  (a 
resposta para cada item será um nº float), leia e armazene o gabarito. Em seguida, iremos corrigir 
provas  de  50  alunos,  para  isso,  leia  os  dados  de  cada  questão  e  considere  1  ponto  por  questão 
correta (ou seja, 0.2 por item correto), armazene a nota de cada aluno. No final, mostre a nota que 
cada  aluno  obteve.  Utilizar  ponteiro  para  o  vetor  e  ponteiro  constante  para  matriz 
bidimensional. 
 */

void imprimirInt(int valorInt);

void armazenaValor(int *vetor, int tamanhoVetor);

void imprimirVetor(int *vetor, int tamanhoVetor);

int somaProva(int *vetor, int *vetGab, int tamanhoVetor);

int main()
{
	int qtdQuestao = 50, qtdAlunos = 50;
	int gabarito[qtdQuestao];
	int provaAluno[qtdQuestao], notaAluno[qtdQuestao];

	//armazena o gabarito
	armazenaValor(gabarito, qtdQuestao);

	//imprimi os dados armazenados no gabarito
	imprimirVetor(gabarito, qtdQuestao);


	for (int i = 0; i < qtdAlunos; i++)
	{
		armazenaValor(provaAluno,qtdQuestao);

		notaAluno[i]= somaProva(provaAluno, gabarito, qtdQuestao);

	}

	printf("Nota dos alunos :\n");

	for (int i = 0; i < qtdAlunos; i++)
	{
		printf("Aluno[%i]=%i\n", i+1, notaAluno[i]);
	}

	return 0;
}


void imprimirInt(int valorInt)
{
	printf("\n%i\n", valorInt);
}

void armazenaValor(int *vetor, int tamanhoVetor)
{
	srand(time(NULL));

	for (int i = 0; i < tamanhoVetor; i++)
	{
		*(vetor+i) = rand() % 2;
	}
}

void imprimirVetor(int *vetor, int tamanhoVetor)
{
	for (int i = 0; i < tamanhoVetor; i++)
	{
		printf("Valor[%i]=%i\n", i+1, *(vetor+i));
	}
}

int somaProva(int *vetor, int *vetGab, int tamanhoVetor)
{
	int somaValor=0;
	for (int i = 0; i < tamanhoVetor; i++)
	{
		if (*(vetGab+i)==*(vetor+i))
		{
			somaValor += *(vetor+i);
		}	
	}

	somaValor*=0.2;
	return somaValor;
}