#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
12. Ler 2 vetores (A, B) com 12 elementos cada. Criar C bidimensional, onde a 1ª coluna : C= A*2 e a 
2ª coluna: C=B-5. 
*/

void armazenaPonteiro(int *ponteiro, int tamanho);

void imprimir(int *ponteiro, int tamanho);

void calcMatriz(int *ponteiroA, int *ponteiroB, int tamanho, int *pontMatriz, int tamanhoMatriz);

void imprimirMatriz(int *pontMatriz, int tamanhoMatriz);

main() {
    int vetA[15], vetB[15], matriz[2][15], *pontVetA, *pontVetB, *pontMat, tamVet=15, tamMatriz=30;
    
    printf("Valores do Vetor A:\n");
    pontVetA = vetA;
    armazenaPonteiro(pontVetA, tamVet);
    imprimir(pontVetA, tamVet);

    printf("\n\nValores do Vetor B:\n");
    pontVetB = vetB;
    armazenaPonteiro(pontVetB, tamVet);
    imprimir(pontVetB, tamVet);

    printf("\n\nMatriz resultado:\n");
    pontMat = matriz[0];
    calcMatriz(vetA, vetB, tamVet, pontMat, tamMatriz);
    imprimirMatriz(pontMat, tamMatriz);
}

void armazenaPonteiro(int *ponteiro, int tamanho)
{
    srand(time(NULL));
    
    //Gerador de numeros randons
    for (int i = 0; i < tamanho; i++)
        *(ponteiro + i)= rand() % 10;
}


void imprimir(int *ponteiro, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("Numero[%i] = %i\n", i+1, *(ponteiro+i));
}

void calcMatriz(int *ponteiroA, int *ponteiroB, int tamanho, int *pontMatriz, int tamanhoMatriz)
{
    for (int i = 0; i < tamanhoMatriz; i++)
    {
        if (i<15)
        {
            *(pontMatriz + i) = *(ponteiroA + i) * 2;
        }
        else
        {
            *(pontMatriz + i) = *(ponteiroB + i) - 5;
        }
    }
}


void imprimirMatriz(int *pontMatriz, int tamanhoMatriz)
{
    for (int i = 0; i < tamanhoMatriz; ++i)
    {
        printf("V[%i]:%i\n", i+1, *(pontMatriz + i));
    }
}