#include <stdio.h>
#include <stdlib.h>

/* Ler o nome e as 3 notas escolares de um aluno
   Calcular a m�dia do aluno
   Mostrar o resultado da m�dia
*/

int main()
{
   char nome[80];
   float nota1, nota2, nota3, media;

   printf ("Digite o nome do aluno: ");
   gets(nome);
   fflush(stdin);
   printf("Digite a primeira nota: ");
   scanf ("%f", &nota1);
   printf ("Digite a segunda nota: ");
   scanf ("%f", &nota2);
   printf ("Digite a terceira nota: ");
   scanf ("%f", &nota3);

   media = (nota1+nota2+nota3) /3;

   printf ("o aluno: %s tem media: %.2f \n",nome,media );









    return 0;
}
