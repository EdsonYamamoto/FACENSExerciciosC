#include <iostream>

/*
1. Calcular e mostrar o produto de 2 números.
*/

int obterNum();

int produto(int num1, int num2);

void printar(int valor);

int main()
{
	printf("Calcular e mostrar o produto de 2 números\n");
	int valor1, valor2, resultado;
	valor1 = obterNum();
	printar(valor1);
	valor2 = obterNum();
	printar(valor2);
	printar(produto(valor1, valor2));
	return 0;
}

int obterNum(){
	printf("Função pegar numero\n");
	int numero;
	scanf("%i",& numero);
	return numero;
}

int produto(int num1, int num2){
	int produto;
	printf("Função calcular o produto\n");
	produto = num1 * num2;
	return produto;
}

void printar(int valor){
	printf("Valor da variavel: %i\n", valor);
}