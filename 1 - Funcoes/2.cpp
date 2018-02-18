	#include <iostream>

	/*
	2. Ler 2 notas e calcular a média.
	*/

	float obterNum();

	float divisao(float num1, float num2);

	void printar(float valor);

	int main()
	{
		printf("Calcular e mostrar o divisao de 2 numeros\n");
		float valor1, valor2, resultado;
		valor1 = obterNum();
		printar(valor1);
		valor2 = obterNum();
		printar(valor2);
		printar(divisao(valor1, valor2));
		return 0;
	}

	float obterNum(){
		printf("Funcao pegar numero\n");
		float numero;
		scanf("%f",& numero);
		return numero;
	}

	float divisao(float num1, float num2){
		float divisao;
		printf("Funcao calcular o divisao\n");
		divisao = (num1 + num2) / 2;
		return divisao;
	}

	void printar(float valor){
		printf("Valor da variavel: %f\n", valor);
	}