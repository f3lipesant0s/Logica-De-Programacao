#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB;
    int somar, subtrair, multiplicar, dividir, resto;

    printf("Digite o primeiro valor: ");
    scanf ("%d", &valorA);
    printf ("Digite outro valor: ");
    scanf ("%d", &valorB);

    somar =          valorA + valorB;
    subtrair =       valorA - valorB;
    multiplicar =    valorA * valorB;
    dividir =        valorA / valorB;
    resto =          valorA % valorB;

    printf ("A soma foi.......: %d \n", somar);
    printf ("A difrença foi...: %d \n", subtrair);
    printf ("o produto foi ...: %d \n", multiplicar);
    printf ("o quociente foi..: %d \n", dividir);
    printf ("o resto foi......: %d \n", resto);
    return 0;
}
