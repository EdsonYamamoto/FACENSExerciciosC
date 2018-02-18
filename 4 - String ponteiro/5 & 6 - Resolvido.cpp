#include <iostream>
#include <string.h>

/*5. Faça um programa que, dado um string qualquer, procure dentro dele a ocorrência de um determinado caracter.
Exemplo:
String: Facens – Computação Procurar pela letra: x
Resultado: O caracter x não foi encontrado.*/

void maiuscula (char *ps, int tam);
int busca_letra(char *ps, int tam, char letra);

main() {
	char string[100], letra;
	int tam, quantidade;

	printf("Digite uma frase: \n");
	
	//armazena a string
	gets(string);
	fflush(stdin);

	//quantidade de letras da string
	tam = strlen(string);

	//transforma todas as variaveis para maiuscula
	maiuscula(string, tam);

	printf("Digite uma letra\n");
	scanf("%c",&letra);
	fflush(stdin);
	maiuscula(&letra, 1);
	quantidade = busca_letra(string, tam, letra);
	printf("A letra %c apareceu %i vezes na frase: \n", letra, quantidade);
	system("pause");
}

void maiuscula (char *ps, int tam)
{
	int i;
	for (int i = 0; i < tam; ++i, ps++)
	{
		if (*ps>='a' && *ps<='z')
		{
			*ps -=32;
		}
	}
}

int busca_letra(char *ps, int tam, char letra)
{
	int i, cont = 0;
	for (int i = 0; i < tam; ++i, ps++)
		if(*ps==letra)
    			cont++;
	return cont;
}	