#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, resultado; /* Declara��o de vari�veis */

    printf("Digite um valor: "); /*Entrada de dados */
    scanf("%d", &valorA);
    printf("Digite outro n�mero: ");
    scanf("%d", &valorB);

    resultado = valorA + valorB;    /* Processamento de dados */

    printf("Resultado: %d \n",resultado); /* saida de dados */
    printf("%d + %d = %d \n", valorA, valorB, resultado);

    return 0;
}
