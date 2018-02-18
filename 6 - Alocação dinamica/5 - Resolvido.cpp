/*

5. Alocar espaço para armazenar as temperaturas diárias registradas durante um mês. O programa deve mostrar diariamente (a medida que as temperaturas são incluídas) a maior temperatura e o dia em que ocorreu. Utilizar função para alocação dinâmica.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraValorTemp (float *tempDiaria, int qtdDias);

void imprimiVetor(float *tempDiaria, int qtdDias);

float procuraMaiorTemp(float *tempDiaria, int qtdDias);

void alocaRealock(float **tempDiaria, int qtdDias);

void teste();

int main()
{
  int diasMes=30;
  float *tempDiaria=NULL, maiorTemperatura;

  alocaRealock(&tempDiaria,diasMes);
  geraValorTemp(tempDiaria,diasMes);

  imprimiVetor(tempDiaria,diasMes);
  maiorTemperatura=procuraMaiorTemp(tempDiaria,diasMes);

  printf("Valor da maior temp: %f\n", maiorTemperatura);

  return 0;
}

void geraValorTemp (float *tempDiaria, int qtdDias)
{
  srand(time(NULL));

  for (int i = 0; i < qtdDias; i++)
    *(tempDiaria+i) = rand() % 45;

}

void alocaRealock(float **tempDiaria, int qtdDias)
{
  if ((*tempDiaria=(float*)realloc(*tempDiaria, qtdDias*sizeof(float)))==NULL)
  {
    printf("Erro de alocacao\n");
    exit(1);
  }
}

void imprimiVetor(float *tempDiaria, int qtdDias)
{
  for (int i = 0; i < qtdDias; i++, tempDiaria++)
    printf("Dia[%i] temp =[%f]\n", i+1, *tempDiaria);
}

void teste()
{
  printf("\n\nTESTE OK\n\n");
}

float procuraMaiorTemp(float *tempDiaria, int qtdDias)
{
  float maiorTemp;

  maiorTemp = *tempDiaria;

  for (int i = 0; i < qtdDias; i++)
    if (*(tempDiaria+i)>maiorTemp)
      maiorTemp = *(tempDiaria+i);

  return maiorTemp;
}
