	#include <iostream>
	#include <conio.h>
	#include <stdio.h>
	#include <stdlib.h>

	/*
	Idem ao exercício resolvido, porém perguntar ao usuário se ele deseja continuar (S/N). Lembrar que a matriz ao ser definida deve conter necessariamente o tamanho.
	*/

	int main(int argc, char** argv) {
		int *p_num, cont=0, num=0;
		char condicao;
		p_num = NULL;

		printf("Este programa armazena uma quantidade de variaveis definida pelo usuario\n");
		//armazena o valor de num no ponteiro "p"	

		do{
			printf("Digite o elemento:");

			p_num=(int*) malloc ((cont+1)*sizeof(int));

			scanf("%i", p_num+cont);

			printf("Nº [%i] digitado: %i\nDeseja continuar? (S/N)", num, *p_num);

			fflush(stdin);
			scanf("%c",&condicao);
			num++;
		}while(toupper(condicao) == 'S');
		
		for(int i=0; i<num; i++)
			--p_num;

		for (int i = 0; i < num; ++i, p_num++)
		{
			printf("%i ",*p_num);
		}
			
		return 0;
	}
