	/*

	3. Idem ao exercício anterior, porém a seqüência de números reais deverá ser digitada pelo usuário,
	até que este escolha a opção N (Deseja continuar? (S/N)). Utilizar função para alocação
	dinâmica.

	*/

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <time.h>


	char armazenaChar();
	//Função realloc
	void alocaRealloc(float **p, int tam);
	//armazena valores aleatorios do sistema
	float armazenaFloat();
	//imprimi o valor float
	void imprimirFloat(float valor);
	//imprimir vetor
	void imprimirVetor(float *matriz, int tamanhoVetor);

	int main()
	{
		int cont=0, vezes, aux=0;
		char opcao='s';
		float *pont=NULL, numero;
		do{
			printf("Armazenando valor:");
			alocaRealloc(&pont,cont);
			numero = armazenaFloat();
			*(pont+cont)= numero;
			cont++;
			printf("%i,%f\n",cont, numero);
			printf("Armazenar outro valor? Digite n para sair:");
			opcao = armazenaChar();
			if (opcao=='n')
				aux++;
			
		} while (aux==0);

		imprimirVetor(pont, cont);
		return 0;
	}


	float armazenaFloat()
	{
	    float valor;
	    
	    srand(time(NULL));
	    valor = rand() % 10;

	    return valor;
	}

	void alocaRealloc(float **p, int tam)
	{
	    if((*p=(float*)realloc(*p, tam*sizeof(float)))== NULL)
	     {
	         printf("Erro de alocacao");
	         exit(1);
	     }
	}

	void imprimirFloat(float valor)
	{
		printf("%f\n", valor);
	}


	void imprimirVetor(float *matriz, int tamanhoVetor)
	{
		for (int i = 0; i < tamanhoVetor; i++)
			printf("vet[%i]=%f\n", i+1, *(matriz+i));
	}


	char armazenaChar()
	{
		char valor;
		scanf("%c",&valor);
		fflush(stdin);
		return valor;
	}