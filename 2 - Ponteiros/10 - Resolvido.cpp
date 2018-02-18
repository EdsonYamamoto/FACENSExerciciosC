#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
10. Inserir nºs aleatórios em uma matriz bidimensional 5x4. E mostrá-los na tela. 
*/

void armazenaPonteiro(int *ponteiro, int tamanho);

void pontMatriz(int *pont, int *matrizC, int tamanho);

void imprimir(int *ponteiro, int tamanho);
void imprimirMatriz(int *matrizC, int tamanhoMatriz);

main() {
    int  tamMatriz = 20, *pontVet, mat[4][5];
    
    pontVet = mat[0];

    armazenaPonteiro(pontVet, tamMatriz);
    printf("Matriz :\n");
    imprimir(pontVet, tamMatriz);
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
