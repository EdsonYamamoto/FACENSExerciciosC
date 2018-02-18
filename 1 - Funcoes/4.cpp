	#include <iostream>

	/*
	4.     Calcular o consumo médio de gasolina de um tanque de automóvel. Pedir para o usuário entrar 
			com a distância (km) e volume (litros).      Cm = d (km) / v (litros) 
 
	*/

	float calculo(float dist, float vol);

	float obterFloat();

	void printar(float valor);

	int main()
	{
		printf("Calcular a área de uma esfera.\n");
		float distancia, volume;

		printf("Insira o valor da distancia:");
		distancia = obterFloat();

		printf("Insira o valor do volume:");
		volume = obterFloat();

		printf("Calculo do consumo:");
		printar(calculo(distancia, volume));

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

	float calculo(float dist, float vol)
	{
		float consumo;
		consumo = dist / vol;
		return consumo;
	}