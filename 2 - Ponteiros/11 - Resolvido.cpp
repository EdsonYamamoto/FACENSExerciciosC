#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
11. Ler um vetor (A) com 15 elementos. Construir um vetor B do mesmo tipo e tamanho, sendo que 
cada elemento de B seja o fatorial do elemento correspondente de A. (utilizar a função recursiva 
direta p/ fatorial). 
*/

void armazenaPonteiro(int *ponteiro, int tamanho);

void imprimir(int *ponteiro, int tamanho);

void calcFatorial (int *ponteiroA, int *ponteiroB, int tamanho);

int recursivaFatorial(int fator);

main() {
    int vetA[15], vetB[15], *pontVetA, *pontVetB, tamVet=15;

    pontVetA = vetA;
    pontVetB = vetB;

    armazenaPonteiro(pontVetA, tamVet);
    calcFatorial(pontVetA, pontVetB, tamVet);
    imprimir(pontVetA, tamVet);
    imprimir(pontVetB, tamVet);
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

int recursivaFatorial(int fator){
  if(fator==1 || fator==0){
      return 1;
    }
    else{
      return fator * recursivaFatorial(fator-1);
  }
    
}

void calcFatorial (int *ponteiroA, int *ponteiroB, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *(ponteiroB + i) = recursivaFatorial(*(ponteiroA+i))
    }
}