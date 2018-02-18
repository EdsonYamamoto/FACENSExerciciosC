	#include <iostream>
	#include <conio.h>

	/*
	Idem ao exercício resolvido, porém a quantidade de nºs reais deverá ser estipulada pelo usuário. Lembrar que a matriz ao ser definida deve conter necessariamente o tamanho.
	*/



	int main(int argc, char** argv) {
		int num[5], d, q, *p_num;
		
		printf("Este programa armazena uma quantidade de variaveis definida pelo usuario\n");
		//armazena o valor de num no ponteiro "p"
		p_num = num; // inicialização de ponteiro

		do{
			printf("Digite a quantidade de elementos:");
			scanf("%i",&q);
		}while(q <0 || q>5);
		
		printf("Lendo os elementos da matriz:\n");
		for (d = 0; d < q; d++)
		{
			printf("%io elemento:\n", d+1);
			scanf("%i", p_num++);
		}
		p_num=num;
		printf("Imprime os elementos da matriz\n");
		for (d = 0; d < q; d++)
		{
			printf("num %i = %i\n", d+1, *(p_num++));
		}
		return 0;
	}
