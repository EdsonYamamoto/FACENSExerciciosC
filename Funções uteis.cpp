/*

4. Aloque dinamicamente a seqüência de números reais digitados pelo usuário, até que este escolha a opção N (Deseja continuar? (S/N)). 
Em seguida, exiba a média dos elementos (não considerar as ocorrências com valor = 0). Utilizar função para alocação dinâmica.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//armazenar e imprimir inteiros
int armazenaInt();
void imprimirInt(int valor);

int armazenaInt()
{
    int valor;
    scanf("%i",valor);
    return valor;
}

void imprimirInt(int valor)
{
    printf("%i\n", valor);
}


//armazenar e imprimir float
float armazenaFloat();
void imprimirfloat(float valor);

float armazenaFloat()
{
    float valor;
    scanf("%f",valor);
    return valor;
}

void imprimirfloat(float valor)
{
    printf("%f\n", valor);
}


//armazenar e imprimir char
char armazenaChar();
void imprimirChar(char valor);

char armazenaChar()
{
    char valor;
    scanf("%c",&valor);
    return valor;
}

void imprimirChar(char valor)
{
    printf("%c\n", valor);
}

//armazena valores aleatorios do sistema
void armazenaValor(int *matriz, int tamanhoVetor);
void armazenaValor(int *matriz, int tamanhoVetor)
{
    srand(time(NULL));

    for (int i = 0; i < tamanhoVetor; i++)
        *(matriz+i) = rand() % 10;
}

//imprimi valor de vetores
void imprimirVetor(int *vetor, int tamanhoVetor);
void imprimirVetor(int *vetor, int tamanhoVetor)
{
    for (int i = 0; i < tamanhoVetor; i++)
    {
        printf("N[%i]=%i\n", i+1,*(vetor+i));
    }
}

//Função realloc
void alocaRealloc(float **p, int tam);
void alocaRealloc(float **p, int tam)
{
    if((*p=(float*)realloc(*p, tam*sizeof(float)))== NULL)
     {
         printf("Erro de alocacao");
         exit(1);
     }
}