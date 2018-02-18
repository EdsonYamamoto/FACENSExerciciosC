	#include <iostream>

	/*
	3. Pedir a idade para o usuário e calcular quantos meses e dias de vida ele tem aproximadamente.
	*/

	int calculo(int meses);

	int obterInt();

	void printar(int valor);

	int main()
	{
		printf("Pedir a idade para o usuario e calcular quantos meses e dias de vida ele tem aproximadamente.\n");
		int idade;
		idade = obterInt();
		printf("Idade inserida");
		printar(idade);

		calculo(idade);

		return 0;
	}

	int obterInt(){
		printf("Funcao pegar idade em anos\n");
		int numero;
		scanf("%i",& numero);
		return numero;
	}
	
	void printar(int valor){
		printf(": %i\n", valor);
	}

	int calculo(int meses)
	{
		int mes, dias;
		mes = meses*12;
		dias = mes*30;
		printf("Idade em meses");
		printar(mes);
		printf("Idade em dias");
		printar(dias);
		return 0;
	}