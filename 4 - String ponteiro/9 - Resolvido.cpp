/*
9.  Nome JEDI – para compor um nome conforme o costume JEDI, do filme Guerra nas Estrelas, é 
necessário fazer a seguinte composição: 
?  Nome Jedi: as 3 primeiras letras do primeiro nome + as 2 primeiras letras do sobrenome 
?  Sobrenome Jedi: as 2 primeiras letras do nome da mãe + as 3 primeiras letras da cidade em que 
nasceu 
?  Nome composto: as 3 primeiras letras do nome Jedi + as 3 últimas letras do sobrenome Jedi. 
 
Exemplo: 
Nome: José da Silva 
Nome da mãe: Maria da Silva 
Cidade em que nasceu: Sorocaba 
 
Nome Jedi: Jossi Masor 
Nome composto: Jos-Sor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void minuscula(char *p);

void batismoJedi(char *name, char *motherName, char *cityName, char *jediName);

void nomeCompost(char *nameComp, char *jediName);

main()
{
	char nome[100], *nomePont, nomeMae[100], *nomeMaePont, nomeCidade[100], *nomeCidadePont, nomeJedi[20], *nomeJediPont, nomeComposto[20], *nomeCompostoPont;
	//inicializaçao ponteiros
	nomePont = nome;
	nomeMaePont = nomeMae;
	nomeCidadePont = nomeCidade;
	nomeJediPont = nomeJedi;
	nomeCompostoPont = nomeComposto;

	printf("Este programa batiza Jedi de uma pessoa.\nEscreva o nome completo:\n");
	gets(nome);
	fflush(stdin);
	minuscula(nome);

	printf("Escreva o nome da sua mae:\n");
	gets(nomeMae);
	fflush(stdin);
	minuscula(nomeMae);

	printf("Escreva o nome da cidade onde nasceu:\n");
	gets(nomeCidade);
	fflush(stdin);
	minuscula(nomeCidade);

	batismoJedi(nomePont , nomeMaePont, nomeCidadePont, nomeJediPont);

	nomeCompost(nomeCompostoPont, nomeJediPont);
	
	printf("Nome Jedi:%s\n",nomeJediPont);

	printf("Nome composto Jedi:%s",nomeCompostoPont);
}

void minuscula(char *p)
{	
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

void batismoJedi(char *name, char *motherName, char *cityName, char *jediName)
{
	int tamVetor, i=0, posicao=0, j=0;
	
	tamVetor = strlen(name)-1;
	//nome
	for (int i = 0; i < 3; i++, posicao++, jediName++)
		*jediName = *(name+i);
		
	*(jediName - posicao)-=32;
	
	i=0;	
	do{
		i--;
	}while(*(name+tamVetor+i)!=' ');
	
	i++;
	for (int j; j < 2;j++, i++, jediName++)
		*jediName = *(name+tamVetor+i);

	for (int i = 0; i < 1; i++, jediName++)
		*jediName = ' ';

	for (int i = 0; i < 2; i++, jediName++)
		*jediName = *(motherName+i);
		
	*(jediName-2)-=32;

	for (int i = 0; i < 3; i++, jediName++)
		*jediName = *(cityName+i);
}

void nomeCompost(char *nameComp, char *jediName)
{
	int posicao, tamString;
	for(posicao=0 ; posicao<3; posicao++, nameComp++)
		*nameComp = *(jediName+posicao);
	
	for(posicao=0 ; posicao<1; posicao++, nameComp++)
		*nameComp = '-';
	
	tamString = strlen(jediName);
	
	for(posicao=tamString-3; posicao<tamString; ++posicao, ++nameComp)
		*nameComp = *(jediName+posicao);
	
	*(nameComp-3)-=32;
		
}