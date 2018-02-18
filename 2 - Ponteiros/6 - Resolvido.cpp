#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
6. Ler 10 elementos de um vetor. Verificar e mostrar a média dos elementos.
*/

void armazenaPonteiro(int *ponteiro, int tamanho);
int calcMedia(int *vetor, int tamanho);
void imprimir(int *ponteiro, int tamanho);

int main(int argc, char** argv) {
	int vet[3], tamVetor = 3, *pont, maior;
	pont = vet;

	armazenaPonteiro(pont, tamVetor);

	imprimir(pont, tamVetor);
	
	printf("Media dos elementos: %i\n",calcMedia(pont, tamVetor));
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

int calcMedia(int *vetor, int tamanho)
{
	int media = 0;
	for (int i = 0; i < tamanho; i++)
	{
		media = media + *(vetor+i);
	}
	media = media / tamanho;
	return media;
}

void imprimir(int *ponteiro, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		printf("Resultado [%i] = %i\n", i+1, *(ponteiro+i));
	}
}