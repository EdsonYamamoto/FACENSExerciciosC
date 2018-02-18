#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
9.  Ler 2 vetores com 10 elementos cada. Construir uma matriz C de 2 dimensões, onde a 1º coluna 
deverá ser formada pelos elementos do vetor A e a 2º coluna pelo vetor B. 
*/

void armazenaPonteiro(int *ponteiro, int tamanho);

void pontMatriz(int *pontA, int *pontB, int *matrizC, int tamanho);

void imprimir(int *ponteiro, int tamanho);
void imprimirMatriz(int *matrizC, int tamanhoMatriz);

main() {
	int  tamVetor = 10, tamMatriz = 20, *pontVetA, vetA[10],*pontVetB, vetB[10], matC[2][10], *pontMatC;
	
	pontVetA = vetA;
	pontVetB = vetB;
	pontMatC = matC[0];

	armazenaPonteiro(pontVetA, tamVetor);
	printf("Vetor A:\n");
	imprimir(pontVetA, tamVetor);

	armazenaPonteiro(pontVetB, tamVetor);
	printf("Vetor B:\n");
	imprimir(pontVetB, tamVetor);

	pontMatriz(pontVetA, pontVetB, pontMatC, tamMatriz);
	imprimirMatriz(pontMatC, tamMatriz);

}

void armazenaPonteiro(int *ponteiro, int tamanho)
{
	srand(time(NULL));
	
	//Gerador de numeros randons
	for (int i = 0; i < tamanho; i++)
		*(ponteiro + i)= rand() % 10;
}


void pontMatriz(int *pontA, int *pontB, int *matrizC, int tamanhoMatriz)
{
	for (int indice = 0; indice < tamanhoMatriz; indice++)
	{
		if  (indice < 10)
		{
			*(matrizC + indice) = *(pontA + indice);
		}
		if  (indice >= 10)
		{
			*(matrizC + indice) = *(pontB + indice - 10);
		}
	}

}

void imprimir(int *ponteiro, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
		printf("Dia[%i] = %i\n", i+1, *(ponteiro+i));
}

void imprimirMatriz(int *matrizC, int tamanhoMatriz)
{
	for (int i = 0; i < tamanhoMatriz; i++)
		{
			printf("Numero[%i]=%i\n", i+1, *(matrizC+i));
		}	
}
