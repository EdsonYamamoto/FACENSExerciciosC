#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
7. Ler 10 elementos de um vetor e colocá-los na ordem crescente.
*/

void armazenaPonteiro(int *ponteiro, int tamanho);
void ordemCrescente(int *vetor, int tamanho);
void imprimir(int *ponteiro, int tamanho);

int main(int argc, char** argv) {
	int vet[10], tamVetor = 10, *pont, maior;
	pont = vet;

	armazenaPonteiro(pont, tamVetor);

	imprimir(pont, tamVetor);
	
	ordemCrescente(pont, tamVetor);
	
	imprimir(pont, tamVetor);
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

void ordemCrescente(int *vetor, int tamanho)
{
	int aux = 0, indica, vez=0;
	
	do{
		indica=0;
		for (int i = 0; i < tamanho-1; i++)
		{
			if (*(vetor+i)>*(vetor+i+1))
			{
				aux = *(vetor+i+1);
				*(vetor+i+1) = *(vetor+i);
				*(vetor+i) = aux ;
			}	
		}
		for (int i = 0; i < tamanho-1; i++)
			if (*(vetor+i)<=*(vetor+i+1))
				indica++;
			
		vez++;
		printf("Vez: %i\n", vez);
	} while (indica != tamanho-1);
}

void imprimir(int *ponteiro, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		printf("Resultado [%i] = %i\n", i+1, *(ponteiro+i));
	}
}