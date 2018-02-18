/*

4. Aloque dinamicamente a seqüência de números reais digitados pelo usuário, até que este escolha a opção N (Deseja continuar? (S/N)). 
Em seguida, exiba a média dos elementos (não considerar as ocorrências com valor = 0). Utilizar função para alocação dinâmica.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//armazenar e imprimir float
float armazenaFloat();
void imprimirfloat(float valor);

//armazenar e imprimir char
char armazenaChar();
void imprimirChar(char valor);

void aloca(float **pont, int tam);
float media(float *pont, int tam);
main()
{
    int cont=1, x=0, contador=0;

    float *pont=NULL, f;
    
    char opont;
    float mediafinal;

    do{
        aloca(&pont,cont);
        printf("Digite um numero real: \n");
        
        f=armazenaFloat();
        *(pont+contador)=f;
        fflush(stdin);

        printf("Deseja continuar ? <S/N>");
        opont=armazenaChar();
        contador++;
        cont++;
        x=cont-1;
    }while(opont=='S' || opont=='s');

    mediafinal=media(pont, x);
    printf("%.2f", mediafinal);
}

void aloca(float **pont, int tam)
{
    if((*pont=(float*)realloc(*pont, tam*sizeof(float)))== NULL)
    {
        printf("Erro de alocacao");
        exit(1);
    }
}

float media(float *pont, int tam)
{
    float media=0, cont2=0;
    int i;
    for(i=0;i<tam; i++)
    {
        if((*pont+i)!=0)
        {
            media+=*(pont+i);
            cont2++;
        }
    }

    return media/cont2;
}

float armazenaFloat()
{
    float valor;
    scanf("%f",&valor);
    return valor;
}

void imprimirfloat(float valor)
{
    printf("%f\n", valor);
}

char armazenaChar()
{
    char valor;
    fflush(stdin);
    scanf("%c",&valor);
    return valor;
}

void imprimirChar(char valor)
{
    printf("%c\n", valor);
}

