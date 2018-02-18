	#include <iostream>

	/*
	5.    Calcular a área de uma esfera.    A = 4 * π * r ^ 2
 
	*/

	float calculo(float raio);

	float obterFloat();

	void printar(float valor);

	int main()
	{
		printf("Calcular a área de uma esfera.\n");
		float raioVar, area;

		printf("Insira o valor da raio:");
		raioVar = obterFloat();

		printf("Calculo da area:");
		printar(calculo(raioVar));

	}

	float obterFloat(){
		printf("Obtendo variavel\n");
		float numero;
		scanf("%f",& numero);
		return numero;
	}
	
	void printar(float valor){
		printf(": %f\n", valor);
	}

	float calculo(float raio)
	{
		float pi=3.1415, areaCalc;
		areaCalc = raio * raio * 4 * pi;
		return areaCalc;
	}