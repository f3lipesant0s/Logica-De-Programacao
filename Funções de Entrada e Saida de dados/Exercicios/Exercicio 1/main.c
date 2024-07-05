#include <stdio.h>
#include <stdlib.h>

/*. A quilometragem inicial de um carro é 200000. Depois de uma viagem, a quilometragem final
do carro ficou em 205701. Fazer um programa para ler do teclado estes valores armazenando
em variáveis, depois calcular e armazenar a distância percorrida do carro e finalmente
apresentá-la
*/



int main()
{
    int valorA, valorB, resultado;

    printf("Qual a quilometragem inicial do carro: ");
    scanf ("%d", &valorA);

    printf("Qual a quilometragem final: ");
    scanf ("%d", &valorB);

    resultado = valorB - valorA;

    printf("A distância percorrida foi de %d quilômetros.\n", resultado);


    return 0;
}
