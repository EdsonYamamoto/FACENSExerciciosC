	#include <iostream>
	#include <sdtio.h>

	/*
	5.    Receber um nº inteiro longo do usuário e calcular o fatorial. Utilizar função recursiva direta. 
 
	*/

	float calculo(float raio);

	float obterLong();

	void printar(float valor);

	int main()
	{
		printf("Calcular a área de uma esfera.\n");
		float raioVar, area;

		printf("Insira o valor da raio:");
		raioVar = obterLong();

		printf("Calculo da area:");
		printar(calculo(raioVar));

	}

	float obterLong(){
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