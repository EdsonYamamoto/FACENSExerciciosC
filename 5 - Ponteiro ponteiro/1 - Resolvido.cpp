#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
1. Determine a soma dos elementos de cada coluna de uma matriz int com 3 linhas e 4 colunas, e verifique qual coluna obteve o maior valor. Utilizar ponteiro constante para matriz bidimensional.
Exemplo:
2 	5 	4	 10
-3 	8 	5	 1
4 	0 	11	 7
Soma: 3 13 20 18 Coluna = 3 com maior valor da soma = 20
 */

void armazenaValor(int *matriz, int tamanhoVetor);

void imprime(int *matriz, int tamanhoVetor, int coluna);

void imprimirVetor(int *vetor, int tamanhoVetor);

void imprimirInt(int valor);

int maiorValor(int *vetor, int tamanhoVetor);

int soma(int *matriz, int linha, int coluna, int *Sum);

int getInt();

int main(int argc, char const *argv[])
{

	int lin, col;
	printf("Digite a qtd de linhas:\n");
	lin = getInt();

	printf("Digite a qtd de colunas:\n");
	col = getInt();

	int matriz[lin][col], tamVetor=lin*col, somado[col], maior;

	armazenaValor(*matriz, tamVetor);
	imprime(*matriz,tamVetor, col);
	soma(*matriz, lin, col, somado);

	imprimirVetor(somado, col);

	printf("\n\nMaior valor:\n");
	imprimirInt(maiorValor(somado, col));

	return 0;
}

void armazenaValor(int *matriz, int tamanhoVetor)
{
	srand(time(NULL));

	for (int i = 0; i < tamanhoVetor; i++)
		*(matriz+i) = rand() % 10;
}

void imprime(int *matriz, int tamanhoVetor, int coluna)
{
	
	int aux=0;
	for (int i = 0; i < tamanhoVetor; i++)
	{
		printf("\t%i", *(matriz+i));
		aux++;
		if (aux==coluna)
		{
			printf("\n\n\n");
			aux=0;
		}
	}
}

int getInt()
{
	int valor;
	scanf("%i",&valor);
	return valor;
}

int soma(int *matriz, int linha, int coluna, int *Sum)
{
	int soma, indice=0;

	printf("Soma:");

	for (int i = 0; i < coluna; i++)
	{
		soma=0;
		for (int j = 0; j < linha; j++)
		{
			soma = soma + *(matriz+j*coluna+i);
		}
		indice++;
		*(Sum+indice) = soma;
		printf("\t%i",soma);
	}
	printf("\n");
}
void imprimirVetor(int *vetor, int tamanhoVetor)
{
	for (int i = 0; i < tamanhoVetor; i++)
	{
		printf("\nSoma da coluna[%i]: \t%i",i+1 ,*(vetor+i+1));
	}
}

int maiorValor(int *vetor, int tamanhoVetor)
{
	int maior = NULL;

	for (int i = 0; i < tamanhoVetor; i++)
	{
		if (maior<*(vetor+i+1))
		{
			maior = *(vetor+i+1);
		}
	}

	return maior;
}

void imprimirInt(int valor)
{
	printf("Valor Int: %i\n\n", valor);
}