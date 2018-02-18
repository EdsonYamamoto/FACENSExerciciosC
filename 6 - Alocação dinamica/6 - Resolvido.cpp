/*

6. Alocar espaço para 10 letras. Mostrar o endereço e receber do usuário as 
letras. Em seguida, alterá-las da seguinte maneira: se o usuário digitou 
MAIÚSCULA deverá transformar para minúscula e vice-versa. 
Mostrar novamente o endereço (que deve ser o mesmo) com as letras 
modificadas. Utilizar função para alocação dinâmica.
Dica: valores em ASCII
A = 65 a = 97 MAIÚSCULA p/ minúscula = +32
Z = 90 z = 122 minúscula p/ MAIÚSCULA = -32

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void alocaRealloc(char **ponteiroString, int tamanhoString);
void inverte(char *ponteiroString, int tamanhoString);
int main()
{
	char *str=NULL, auxNome[20], opcao, letra;
	int tamanho=0, cont=0;

	do
	{
		printf("Escreva o nome:");
		gets(auxNome);
		fflush(stdin);
		tamanho += strlen(auxNome)+1;
		alocaRealloc(&str, tamanho);
		if (cont==0)
			strcpy(str,auxNome);
		else
			strcat(str,auxNome);
		
		cont++;
		printf("Deseja continuar?N para sair\n");
		scanf("%c",&opcao);
		fflush(stdin);
	} while (opcao!='n'&&opcao!='N');
	puts(str);
	inverte(str,tamanho);
	puts(str);
	system("pause");

	return 0;
}

void alocaRealloc(char **ponteiroString, int tamanhoString)
{
	if ((*ponteiroString=(char*)realloc(*ponteiroString,tamanhoString*sizeof(char)))==NULL)
			exit(1);
	
}

void inverte(char *ponteiroString, int tamanhoString)
{
	for (int i = 0; i < tamanhoString; i++)
	{
		if (*(ponteiroString+i)>='a'&&*(ponteiroString+i)<='z')
			*(ponteiroString+i) -= 32;
		if else(*(ponteiroString+i)>='A'&&*(ponteiroString+i)<='Z')
			*(ponteiroString+i) += 32;
	}
}