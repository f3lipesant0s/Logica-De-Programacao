#include <stdio.h>
#include <stdlib.h>

/*. A quilometragem inicial de um carro � 200000. Depois de uma viagem, a quilometragem final
do carro ficou em 205701. Fazer um programa para ler do teclado estes valores armazenando
em vari�veis, depois calcular e armazenar a dist�ncia percorrida do carro e finalmente
apresent�-la
*/



int main()
{
    int valorA, valorB, resultado;

    printf("Qual a quilometragem inicial do carro: ");
    scanf ("%d", &valorA);

    printf("Qual a quilometragem final: ");
    scanf ("%d", &valorB);

    resultado = valorB - valorA;

    printf("A dist�ncia percorrida foi de %d quil�metros.\n", resultado);


    return 0;
}
