#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
8.  Crie uma tabela (vetor)  que armazene  as temperaturas diárias  registradas durante um 
mês e em seguida elabore um programa que calcule : 
?  A maior temperatura e o dia em que ocorreu 
?  A temperatura média mensal 
?  As temperaturas inferiores à média e os dias em que ocorreram. 
*/

void armazenaPonteiro(int *ponteiro, int tamanho);

int maiorTemp(int *vetor, int tamanho);
int temperaturaMedia(int *vetor, int tamanho);
void tempAbaixoMedia(int media, int *vetor, int tamanho, int *indicacao);

void imprimir(int *ponteiro, int tamanho);
void imprimirInt(int imprimi);
void imprimirTempAbaixoMedia(int *vetor, int *indice, int tamanho);

int main(int argc, char** argv) {
	int vet[31], tamVetor = 31, indice[31], *pontIndice, *pont, maiorTemperatura, mediaMensal;
	
	pont = vet;
	pontIndice = indice;

	armazenaPonteiro(pont, tamVetor);
	printf("As temperaturas digitadas:\n");
	imprimir(pont, tamVetor);
	
	maiorTemperatura = maiorTemp(pont, tamVetor);
	printf("Maior temperatura: ");
	imprimirInt(maiorTemperatura);
	
	mediaMensal = temperaturaMedia(pont, tamVetor);
	printf("Media mensal: ");
	imprimirInt(mediaMensal);

	tempAbaixoMedia(mediaMensal, pont, tamVetor, pontIndice);
	imprimirTempAbaixoMedia(pont, pontIndice, tamVetor);
}

void armazenaPonteiro(int *ponteiro, int tamanho)
{
	srand(time(NULL));
	
	//Gerador de numeros randons
	for (int i = 0; i < tamanho; i++)
		*(ponteiro + i)= rand() % 37;
	
}

int maiorTemp(int *vetor, int tamanho)
{
	int maior = *vetor;
	
	
	for (int i = 0; i < tamanho; i++)
		if (maior < *(vetor+i))
			maior = *(vetor+i);
		
	return maior;
}


int temperaturaMedia(int *vetor, int tamanho)
{
	int media = 0;
	for (int i = 0; i < tamanho; i++)
		media = media + *(vetor+i);

	media = media/tamanho;

	return media;
}


void tempAbaixoMedia(int media, int *vetor, int tamanho, int *indicacao)
{
	for (int i = 0; i < tamanho; i++)
		*(indicacao + i) = 0;

	for (int i = 0; i < tamanho; i++)
		if (*(vetor + i) < media)
			*(indicacao + i) =1;
}

void imprimir(int *ponteiro, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
		printf("Dia[%i] = %i\n", i+1, *(ponteiro+i));
}


void imprimirInt(int imprimi){
	printf("%i\n", imprimi);
}


void imprimirTempAbaixoMedia(int *vetor, int *indice, int tamanho)
{
	for (int i = 0; i < tamanho; ++i)
	{
		if (*(indice+i) == 1)
		{
			printf("Dia [%i] = Temp:%i\n", i+1, *(vetor + i));
		}
	}
}