#include <iostream>
#include <string.h>

/*4. Faça um programa que, dado um string qualquer, inverta e armazene todas as suas letras sem auxílio de uma string auxiliar, ou seja, utilizando a mesma string. Apresente isso ao usuário.*/

void imprInt(int valor);
void imprChar(char valor);
void invetChar(char *frase);

main() {
	char string[100];

	printf("Digite uma frase: \n");
	
	//armazena a string
	gets(string);
	fflush(stdin);

	invetChar(string);


	printf("Imprimir frase invertida: \n%s\n", string);
	system("pause");
}


void imprInt(int valor){
	printf("Valor da variavel: %i\n", valor);
}
void imprChar(char valor){
	printf("Valor da variavel: %c\n", valor);
}
void invetChar(char *frase)
{
	char *ps;
	int tam, aux;

	tam = strlen(frase);

	imprInt(tam);

	for (int i = 0; i < tam/2; i++)
	{
		aux = *(frase+i);
		*(frase+i) = *(frase+tam-i-1);
		*(frase+tam-i-1) = aux;
	}
}