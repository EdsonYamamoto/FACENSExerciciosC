#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
5. Ler 10 elementos de um vetor. Verificar e mostrar o maior elemento.
*/

void armazenaPonteiro(int *ponteiro, int tamanho);
int encontraMaior(int *vetor, int tamanho);
void imprimir(int *ponteiro, int tamanho);

int main(int argc, char** argv) {
	int vet[10], tamVetor = 10, *pont, maior;
	pont = vet;

	armazenaPonteiro(pont, tamVetor);

	imprimir(pont, tamVetor);
	
	printf("Maior numero da string: %i\n",encontraMaior(pont, tamVetor));
}

void armazenaPonteiro(int *ponteiro, int tamanho)
{
	srand(time(NULL));
	
	//Gerador de numeros randons
	for (int i = 0; i < tamanho; i++)
	{
		*(ponteiro + i)= rand() % 100;
	}
}

int encontraMaior(int *vetor, int tamanho)
{
	int maior = *vetor;
	for (int i = 0; i < tamanho-1; i++)
	{
		if (maior<*(vetor+i))
		{
			maior = *(vetor+i);
		}
	}
	return maior;
}

void imprimir(int *ponteiro, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		printf("Resultado [%i] = %i\n", i+1, *(ponteiro+i));
	}
}