/*

2.  Aloque espaço para uma seqüência de números reais escolhida pelo usuário. Receba os valores e 
imprima-os em ordem inversa. Utilizar função para alocação dinâmica. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Função realloc
void alocaRealloc(float **p, int tam);
//armazena valor de vetores
int armazenaInt();
//armazena valores aleatorios do sistema
void armazenaValor(float *matriz, int tamanhoVetor);
//imprimir vetor
void imprimirVetor(float *matriz, int tamanhoVetor);

int main()
{
	int cont=0, vezes;
	float *pont=NULL;
	vezes=armazenaInt();
	alocaRealloc(&pont,vezes);
	armazenaValor(pont,vezes);
	imprimirVetor(pont, vezes);
	return 0;
}

int armazenaInt()
{
    int valor;
    scanf("%i",&valor);
    return valor;
}

void armazenaValor(float *matriz, int tamanhoVetor)
{
    srand(time(NULL));

    for (int i = 0; i < tamanhoVetor; i++)
        *(matriz+i) = rand() % 10;
}

void alocaRealloc(float **p, int tam)
{
    if((*p=(float*)realloc(*p, tam*sizeof(float)))== NULL)
     {
         printf("Erro de alocacao");
         exit(1);
     }
}

void imprimirVetor(float *matriz, int tamanhoVetor)
{
	for (int i = tamanhoVetor-1; i>=0; i--)
	{
		printf("vet[%i]=%f\n", i+1, *(matriz+i));
	}
}