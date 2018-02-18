#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
4. Ler e armazenar 2 notas, verificar se estão no intervalo de 0 à 10. Calcular a média para 100 alunos (utilizar matrizes) e verificar :
se m >= 7 – imprimir APROVADO
se 4 <= m < 7 – imprimir EXAME
se m < 4 – imprimir REPROVADO.
*/

void armazenaPonteiro(int *ponteiro, int tamanho);
void repassaValor(int *pontA, int *pontB, int tamanho);
void calculoResult(int *pontA, int *pontB, int *pontResult, int tamanho);
void imprimir(int *ponteiro, int tamanho);

int main(int argc, char** argv) {
	int vetA[200], *pontA, vetB[100], *pontB, tamVetor=100, vetResult[100], *pontResult;
	pontA = vetA;
	armazenaPonteiro(pontA, tamVetor*2);
	
	pontB = vetB;
	repassaValor(pontB, tamVetor);
	
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


void repassaValor(int *pontA, int *pontB, int tamanho);
{
	for (int i = 0; i < tamanho; ++i)
	{
		*(pontB+i+tamanho) = *(pontA+i);
	}
}

void calculoResult(int *pontA, int *pontB, int *pontResult, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		*(pontResult + i) = (*(pontA + i) + *(pontB + i))/2;
	}
}

void imprimir(int *ponteiro, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		printf("Resultado [%i] = %i\n", i+1, *(ponteiro+i));
	}
}