#include <iostream>
#include <iostream>
#include <conio.h>
#include <string.h>

/*1.  Faça um programa que, dado um string qualquer, inverta todas as suas letras e apresente isso ao 
usuário. 
Exemplo: 
String:    Alunos da Facens 
Resultado:   snecaF ad sonulA */


int main(int argc, char** argv) {
	char string[100];
	int i, j;
	printf("Digite uma frase: \n");
	
	gets(string);

	//mostrar a string
	for (i=strlen(string)-1, j=0 ; i >= 0; i--, j++)
		printf("%c", string[i]);

	getch();
	return 0;
}