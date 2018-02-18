#include <iostream>
#include <iostream>
#include <conio.h>
#include <string.h>

/*

4.  Faça  um  programa  que,  dado  um  string  qualquer,  inverta  e  armazene  todas  as  suas  letras  sem 
auxílio de uma string auxiliar, ou seja, utilizando a mesma string. Apresente isso ao usuário. 

*/


int main(int argc, char** argv) {
	char string[100], stringAux[100];
	int i, j, indicMaiusc=1;
	printf("Digite uma frase: \n");
	
	gets(string);


	for (i=strlen(string)-1,j=strlen(string)-1 ; i>=0 ; i--,j++)
		stringAux[j] = string[i];


	for (i=strlen(stringAux)-1;i>=0;i--)
		string[i] = tolower(stringAux[i]);


	//mostrar a string
	for (i=strlen(string)-1 ; i>=1 ; i--)
	{
		if (indicMaiusc == 1)
			{
				string[i] = toupper(string[i]);
				indicMaiusc = 0;
			}
			if (string[i] == ' ')
			{
				indicMaiusc = 1;
			}
			else{
				indicMaiusc =0;
			}
			printf("%c", string[i]);
	}


	getch();
	return 0;
}