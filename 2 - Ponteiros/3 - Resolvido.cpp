#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
3. Realizar a soma de 2 vetores A e B de nºs reais e de tamanho igual ou inferior a 100 (n<=100) e gerar um vetor resultante C onde
C[i] = A[i] + B[i]
*/

void armazenaPonteiro(int *ponteiro, int tamanho);
void calculoResult(int *pontA, int *pontB, int *pontResult, int tamanho);
void imprimir(int *ponteiro, int tamanho);

int main(int argc, char** argv) {
	int vetA[100], *pontA, vetB[100], *pontB, tamVetor=100, vetResult[100], *pontResult;
	pontA = vetA;
	armazenaPonteiro(pontA, tamVetor);
	
	pontB = vetB;
	armazenaPonteiro(pontB, tamVetor);
	
	pontResult = vetResult;
	calculoResult(pontA, pontB, pontResult, tamVetor);
	imprimir(pontResult, tamVetor);
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


void calculoResult(int *pontA, int *pontB, int *pontResult, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		*(pontResult + i) = *(pontA + i) + *(pontB + i);
	}
}

void imprimir(int *ponteiro, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		printf("Resultado [%i] = %i\n", i+1, *(ponteiro+i));
	}
}