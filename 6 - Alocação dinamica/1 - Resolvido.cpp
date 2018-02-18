/*

1.  Alocar  espaço  para  10  números  reais.  Mostrar  o  endereço  e  receber  do  usuário  os  valores.
Em seguida, alterar esses valores, somando 30 a cada elemento. Mostrar novamente o endereço (que deve ser 
o mesmo) com o novo valor. Utilizar função para alocação dinâmica. 
*/

//armazenar e imprimir float
float armazenaFloat();
void imprimirfloat(float valor);
void recebe(float *p, int tam);
void imprimi(float *p, int tam);
void alocaRealloc(float **p, int tam);
void somado(float *p, int tam, int somado);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int tamanho=10, i=0;
    float *p=NULL;

    alocaRealloc(&p,tamanho);
    recebe(p,tamanho);
    do{
        imprimi(p,tamanho);
        somado(p, tamanho, 30);
        i++;
    }while(i<10);
}


void alocaRealloc(float **p, int tam)
{
    if((*p=(float*)realloc(*p, tam*sizeof(float)))== NULL)
     {
         printf("Erro de alocacao");
         exit(1);
     }
}

float armazenaFloat()
{
    float valor;
    scanf("%f",&valor);
    return valor;
}

void imprimi(float *p, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Valor[%i] end[%u]:%i",i+1, &(p+i), *(p+i));
        imprimirfloat(*(p+i));
        printf("\n");
    }
}

void imprimirfloat(float valor)
{
    printf("%f\n", valor);
}

void recebe(float *p, int tam)
{   
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor real[%i]:",i+1 );
        *(p+i)=armazenaFloat();
    }
}

void somado(float *p, int tam, int somado)
{
    for (int i = 0; i < tam; i++)
    {
        *(p+i)+=somado;
    }
}