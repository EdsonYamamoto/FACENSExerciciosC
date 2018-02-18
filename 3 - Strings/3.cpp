#include <iostream>
#include <iostream>
#include <conio.h>
#include <string.h>

/*

3.  Melhore o programa, trocando as maiúsculas por minúsculas e vice-versa, quando necessário. 
Exemplo: 
Resultado: Snecaf Ad Sonula 
 
  Será  necessário  utilizar  as  funções  toupper(char)  e  tolower(char),  que  transformam  um  caracter 
para maiúscula e minúscula respectivamente, ou 
  Utilizar os valores da tabela ASCII:  A = 65, Z = 90  a = 97, z = 122, portanto para passar 
de MAIÚSCULA para minúscula basta somar 32 e o inverso, subtrair 32. 

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