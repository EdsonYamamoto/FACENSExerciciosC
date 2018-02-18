#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
5.  Ler uma matriz quadrada inteira, o usuário deverá estipular a ordem da matriz (fazer verificação 
para não ultrapassar o limite declarado). Em seguida, determinar a soma da diagonal secundária. 
Utilizar ponteiro constante para matriz bidimensional. Matriz quadrada é aquela que tem o nº 
de linhas igual ao de colunas. 
Exemplo: - Matriz Quadrada – ordem 3 
 
    2  		5  		4 
    -3  	8  		5 
    4  		0  		11 
4+8+4 = 16 
 */

void armazenaValor(int *matriz, int tamanhoMatriz);
void imprimiValor(int *matriz, int linha, int coluna);
void imprimiInt(int valor);
int diagPrinc(int *matriz, int linha, int coluna);
int armazenaInt();

int main(int argc, char const *argv[])
{
	int lin, col, tamMat, somaSec;
	printf("Programa que calcula a soma da diagonal principal\nDigite o valor da matriz quadrada.\n");
	lin = armazenaInt();
	col = lin;

	tamMat = col * lin;

	int mat[tamMat];
	armazenaValor(mat,tamMat);
	imprimiValor(mat,lin,col);

	somaSec = diagPrinc(mat, lin, col);

	printf("Valor da soma da diagonal principal:");
	imprimiInt(somaSec);
	return 0;
}


void armazenaValor(int *matriz, int tamanhoMatriz)
{
	srand(time(NULL));

	for (int i = 0; i < tamanhoMatriz; i++)
	{
		*(matriz+i) = rand() % 10;
	}

}


void imprimiValor(int *matriz, int linha, int coluna)
{
	int indice=0;
	for (int i = 0; i < linha; i++)
	{
		for (int j = 0; j < coluna; j++)
		{
			printf("\tM[%i][%i]=%i", i+1, j+1, *(matriz+indice));
			indice++;
		}
		printf("\n");
	}
}

int armazenaInt()
{
	int valor;
	scanf("%i", &valor);
	return valor;
}


int diagPrinc(int *matriz, int linha, int coluna)
{
	int somaDiagSec=0, j;

	j = linha;

	for (int i = 0; i < linha; i++,j--)
	{
		somaDiagSec += *(matriz + j + i*linha);
		printf("%i\n", somaDiagSec);
	}

	return somaDiagSec;
}

void imprimiInt(int valor)
{
	printf("%i\n", valor);
}