﻿#include <iostream>
#include <string.h>

/*1.  Faça um programa que, dado um string qualquer, inverta todas as suas letras e apresente isso ao 
usuário. 
Exemplo: 
String:    Alunos da Facens 
Resultado:   snecaF ad sonulA */

void inverte (char *ps, char *pi);

char maiuscula (char letra);

char minuscula (char letra);

main() {
	char string[100], invertida[100];
	int i, j;
	printf("Digite uma frase: \n");
	
	gets(string);
	fflush(stdin);

	inverte(string, invertida);
	printf("Imprimir frase invertida: \n%s\n", invertida);
	system("pause");
}

void inverte (char *ps, char *pi){
	int i, tam;
	tam = strlen(ps);

	printf("Entrou na INVERTER FRASE\n");

	//a var 'i' funciona para indicar a posição do ponteirona string.
	for (int i = 0; i < tam; ++i)
	{
		if (i==0)
		{
			*(pi+i) = maiuscula(*(ps+tam-i-1));
		}
		else
		{
			*(pi+i) = minuscula(*(ps+tam-i-1));
			if (*(pi+i)==' ')
			{
				i++;
				*(pi+i) = maiuscula(*(ps+tam-i-1));
			}
		}
	}
	*(pi+tam)='\0';
}

// Função que substitui o TOUPPER
char maiuscula (char letra){
	if (letra>='a' && letra<='z')
	{
		letra -=32;
	}
	return letra;
}

// Função que substitui o TOLOWER
char minuscula (char letra){
	if (letra>='A' && letra<='Z')
	{
		letra +=32;
	}
	return letra;
}
