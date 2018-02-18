/*
8. Faça um programa que, dado um string qualquer, procure dentro dele a ocorrência de outro string.
Exemplo:
String: Facens – Computação Procurar pelo string: put
Resultado: O string put foi encontrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void minuscula(char *p);

int busca_str(char *pf, char *ps, char *pp);

void mostra(char *ps, char *pp, int qtde);

main()
{
	char frase[80], str[80], pos[80],op;
	int qtde;

	printf("Este programa programa inseri uma frase na maquina e depois ela procura numa outra frase\n");	
		do{
		printf("Escreva a frase:\n");	
		gets(frase);
		fflush(stdin);
		minuscula(frase);

		printf("Escreva a frase de busca:\n");	
		gets(str);
		fflush(stdin);
		minuscula(str);
	
		qtde = busca_str(frase,str,pos);
		mostra(str,pos,qtde);
		
		printf("Deseja continuar <S/N>:\n");
		scanf("%c",&op);
		fflush(stdin);
	}while(op!='n');

}

void minuscula(char *p)
{
	printf("\nPassados todos os valores para minusculo.\n");	
	
	int i, tam;
	tam=strlen(p);
	for (int i = 0; i < tam; i++, p++)
	{
		if (*p>='A' && *p<='Z')
		{
			*p+=32;
		}
	}
}


int busca_str(char *pf, char *ps, char *pp)
{
	int i, j, k, tamf, tams, achei, cont=0;

	tamf = strlen(pf);
	tams = strlen(ps);

	for (int i = 0; i < tamf; i++)
	{
		achei = 0;
		for (int j = 0; j < tams; j++)
		{
			if (*(pf+i+j) == *(ps+j))
				achei++;
			else
				j=tams;
		}
		if (achei == tams)
		{
			cont++;
			for (int j = 0; j < tams; j++, pp++)
				*pp=i;
		}
	}
	return cont;
}


void mostra( char *ps, int *pp, int qtde)
{
	int tam;
	tam = strlen(ps);
	printf("String %s - apareceu¨%i vezes nas posicoes\n", ps, qtde);
	for (int i = 0; i < qtde; i++)
	{
		for (int j = 0; j < tam; j++,pp++)
		{
			printf("%i\n", *pp);
		}
	}
}