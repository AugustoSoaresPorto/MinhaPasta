#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Receber os seguintes dados de um funcion�rio: nome, idade, cargo e o seu sal�rio bruto. Considere:
o sal�rio bruto teve um reajuste de 20%;
o sal�rio bruto total (sal�rio bruto + 20%) � descontado 15% para se obter o sal�rio l�quido.
Elabore um algoritmo que solicite os dados do funcion�rio processe e mostre no v�deo:

o nome, a idade e o cargo;
o sal�rio bruto total;
o sal�rio l�quido. */

//Variaveis
char nome[10], cargo[10];
int idade=0;
float salariot=0.0, salariob=0.0, salariol=0.0;

//Entrada
    printf ("Informe o nome do funcionario \n");
    scanf ("%s", & nome);

    printf ("Informe a idade do funcionario \n");
    scanf ("%i", & idade);

    printf ("Informe o cargo do funcionario \n");
    scanf ("%s", & cargo);

    printf ("Informe o salario bruto antes do reajuste \n");
    scanf ("%f", & salariob);

//Processamento
salariot = salariob * 1.2;
salariol = salariot * 0.85;

//Saida
    printf("%s, de %i anos \n", nome, idade);
    printf("Cargo: %s \n", cargo);
    printf("Salario bruto reajustado: %.2f \n", salariot);
    printf("Salario liquido reajustado: %.2f \n", salariol);

    return 0;
}
